%CONTROLLER Controller template.

% Copyright 2017 Mikhail S. Jones

classdef Controller < matlab.System & matlab.system.mixin.Propagates %#codegen

  % PROTECTED PROPERTIES ==================================================
  properties (Access = protected)
    % Cassie inputs data structure
    inputs
    % Controller Parameters
    params
    
    % Proportional Gains
    Kp = 20*ones(10,1);
    % Derivative Gains
    Kd = 1*ones(10,1);
    
    % Allow domain switching
    allow_switching = true;
        
  end % properties
  
  % Private variables
  properties(Access = private)
      stanceLeg = 1;
      stanceLeg_prev = 1;
      t0 = 0;
      s_last = 0;
      ds_last = 0;
      qd_last = zeros(26,1);
      dqd_last = zeros(26,1);
      stepNum = 0;
      % u continuity sigmoid offset
      u_cont_alpha = zeros(10,1);
      % u continuity sigmoid decay rate
      u_cont_beta = 30;
      u_prev = zeros(10,1);
  end
  
  % Pre-computed constants
  properties(Access = private, Constant)
      TorqueLimits = 1*[4.5; 4.5; 12.2; 12.2; 0.9; 4.5; 4.5; 12.2; 12.2; 0.9];
      GearRatios = [25; 25; 16; 16; 50; 25; 25; 16; 16; 50];
      ActuatorLimits = [-0.2618, 0.3927; -0.3927, 0.3927; -0.8727, 1.3963; -2.8623, -0.6458; -2.4435, -0.5236; ...
          -0.2618, 0.3927; -0.3927, 0.3927; -0.8727, 1.3963; -2.8623, -0.6458; -2.4435, -0.5236];
  end
  
  % PROTECTED METHODS =====================================================
  methods (Access = protected)
    function setupImpl(obj)
    %SETUPIMPL Initialize System object.

      % Initialize the Cassie input/output data structures
      obj.inputs = CassieInputs;
      
      % Initialize other properties
      obj.stanceLeg = 1;
      obj.t0 = 0;
      obj.s_last = 0;
      obj.stepNum = 1;
      
    end % setupImpl

    function [inputs, Data, ControlParams] = stepImpl(obj, t, q, dq, ControlParams)
    %STEPIMPL System output and state update equations.
    % q = [qp; qq; qaL; qjL; qsL; qaR; qjR; qsR];
    
      % Set Controller Params
      obj.params = params;
      
      % Put state into structure
      state = flat_ground_walking.controller.functions. ...
          StructState(q, dq, obj.stanceLeg);
           
      % Define GRF mix integer
%       J_pRz = zeros(3,22);
%       J_pRz_tmp = flat_ground_walking.controller.kin.J_RightToeBottom(state.q.opt);
%       Js_pRz = flat_ground_walking.controller.kin.J_RightToeBottom(0);
%       for i = 1:size(Js_pRz,1)
%          J_pRz(Js_pRz(i,:)) = J_pRz_tmp(i);
%       end
%          
      GRF_L = 0;
      GRF_R = 0;
      
      s_L = scaleFactor(GRF_L, 0.025, 0.05);
      s_R = scaleFactor(GRF_R, 0.025, 0.05);
      if obj.stanceLeg == 1
          s_st = s_R;
          s_sw = s_L;
      else
          s_st = s_L;
          s_sw = s_R;
      end
      
      % Select Gait Parameters
      if obj.stanceLeg == 1 % right stance
          GaitParams = obj.params.RightStance;
      else
          GaitParams = obj.params.LeftStance;
      end
      
      
      %% Compute desired motor positions
      
      % Compute phase variable
      [s, s_unsat, ds] = GaitTimingVariable(obj, t, GaitParams);
      s = 0.0;
      ds = 0;
      
      % Update bezier parameters to ensure hybrid invariance
      if obj.stepNum > 1
          if obj.ds_last > 1
              GaitParams.HAlpha(:,[1,2]) = [obj.qd_last, obj.dqd_last/(5*obj.ds_last) + obj.qd_last];
          else
              GaitParams.HAlpha(:,1) = obj.qd_last;
          end
      end
     
      % Calculate Desired q & dq
      qd = bezierv(GaitParams.HAlpha, s);
      dqd_ds = beziervd(GaitParams.HAlpha, s);
      dqd = dqd_ds*ds;
      state_desired = flat_ground_walking.controller.functions. ...
          StructState(qd, dqd, obj.stanceLeg);
        
      % Modify desired state based on outputs and trajectory errors
      state_desired = flat_ground_walking.controller.functions. ...
          AdjustDesiredState(state, state_desired, obj.stanceLeg, s_st, s_sw);   
      qd = state_desired.q.all;
      dqd = state_desired.dq.all;

      %% PD Control

      % Compute PD control law
      ya = (state.q.qa - state_desired.q.qa);
      dya = (state.dq.dqa - state_desired.dq.dqa);
      u = -(obj.Kp.*ya + obj.Kd.*dya);
      
      % Saturate torques
      u = saturate(u, -obj.TorqueLimits, obj.TorqueLimits);
      
      % Check to see if there was a domain switch
      if obj.stanceLeg ~= obj.stanceLeg_prev
          % Compute torque update sigmoid params
          obj.u_cont_alpha = flat_ground_walking.controller.functions. ...
              TorqueContinuity(u, obj.u_prev, s, obj.u_cont_beta);
      end
      % Maintain errors across domain switches (sigmoid)
      u = u + (2.*obj.u_cont_alpha + -2.*obj.u_cont_alpha./(1+exp(-obj.u_cont_beta*s)));
      
      % Final Updates
      obj.u_prev = u;
      obj.stanceLeg_prev = obj.stanceLeg;
      
      % Set desired motor torques
      obj.inputs.setMotorTorques(obj.GearRatios.*u);
      
      %% Handle impacts and store data
      
      % Impact Detection
      if DetectImpact(obj, s_unsat, s_sw)
          HandleImpact(obj, t, s, ds, qd, dqd);
      end
      
      % Store Data
      Data.t = t;
      Data.q = q;
      Data.dq = q;
      Data.u = u;
      Data.stanceLeg = obj.stanceLeg;
      Data.s_sw = s_sw;
      Data.s_st = s_st;
      Data.s = s;
      Data.ds = ds;
      Data.ya = rad2deg(ya);
      Data.dya = rad2deg(dya);
      Data.GRF = [GRF_R; GRF_L];
    
      % Return the updated Cassie inputs data structure
      inputs = obj.inputs.getStructure;
    end % stepImpl
    
    
    
            
    % Function to compute gait timing variable
    function [s, s_unsat, ds] = GaitTimingVariable(obj, t, GaitParams)
        % Normal time based phase variable
        s = GaitParams.ct * (t - obj.t0);
        ds = GaitParams.ct;
        obj.s_last = s;
        s_unsat = s;
        
        % Saturate s
        s2 = max(min(s_unsat,2),-1);
        if s > 1.0
            s = 1.0;
            ds = max((2 - s2)^4,0)*ds; % ramp ds down (to avoid torque jumps)
        elseif s < -0.0
            s = -0.0;
            ds = max((s2 + 1)^4,0)*ds; % ramp ds down (to avoid torque jumps)
        end
    end
    
    
    % Function to detect impact
    function impact = DetectImpact(obj, s_unsat, s_sw)
        impact = obj.allow_switching && ( ((s_unsat >= 0.5) && (s_sw >= 1)) || (s_unsat >= 1) );
    end
    
    
    % Function to handle impact
    function HandleImpact(obj, t, s, ds, qd, dqd)
        % Swap legs
        obj.stanceLeg = -obj.stanceLeg;
        obj.t0 = t;
        obj.stepNum = obj.stepNum + 1;
        obj.s_last = s;
        obj.ds_last = ds;
        obj.qd_last = qd;
        obj.dqd_last = dqd;
    end
    

    

    function resetImpl(~)
    %RESETIMPL Reset System object states.
    end % resetImpl
    
    function [out, Data] = getOutputSizeImpl(~)
    %GETOUTPUTSIZEIMPL Get sizes of output ports.
      out = [1, 1];
      Data = [1, 1];
    end % getOutputSizeImpl
    
    function [out, Data] = getOutputDataTypeImpl(~)
    %GETOUTPUTDATATYPEIMPL Get data types of output ports.
      out = 'cassieInputsBus';
      Data = 'cassieDataBus';
    end % getOutputDataTypeImpl
    
    function [out, Data] = isOutputComplexImpl(~)
    %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
      out = false;
      Data = false;
    end % isOutputComplexImpl
    
    function [out, Data] = isOutputFixedSizeImpl(~)
    %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
      out = true;
      Data = true;
    end % isOutputFixedSizeImpl
  end % methods
end % classdef