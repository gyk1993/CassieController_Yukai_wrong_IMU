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
    Kp = 400*ones(10,1);
    % Derivative Gains
    Kd = 20*ones(10,1);
    
    % Allow domain switching
    allow_switching = true;
    
    % spring coeffient
    Ks1 = 1800;
    Ks2 = 1600;
    
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
      stepNum = 1;
      % u continuity sigmoid offset
      u_cont_alpha = zeros(10,1);
      % u continuity sigmoid decay rate
      u_cont_beta = 30;
      u_prev = zeros(10,1);
      ini = 0;
      hd = zeros(10,1);
      dhd = zeros(10,1);
      Switch = 0;
  end
  
  % Pre-computed constants
  properties(Access = private, Constant)
      TorqueLimits = 1*[4.5; 4.5; 12.2; 12.2; 0.9; 4.5; 4.5; 12.2; 12.2; 0.9];
      GearRatios = [25; 25; 16; 16; 50; 25; 25; 16; 16; 50];
      ActuatorLimits = [-0.2618, 0.3927;    -0.3927, 0.3927;    -0.8727, 1.3963;    -2.8623, -0.7330;   -2.4435, -0.5236; ...
                        -0.2618, 0.3927;    -0.3927, 0.3927;    -0.8727, 1.3963;    -2.8623, -0.7330;   -2.4435, -0.5236];
  end
  
  % PROTECTED METHODS =====================================================
  methods (Access = protected)
    function setupImpl(obj)
    %SETUPIMPL Initialize System object.

      % Initialize the Cassie input/output data structures
      obj.inputs = CassieInputs;
%       obj.outputs = CassieOutputs;
      % Initialize other properties
      
    end % setupImpl

    function [inputs, Data] = stepImpl(obj, t, outputs, ControlParams)
    %STEPIMPL System output and state update equations.
    
      % Update the Cassie outputs data structure
%       obj.outputs.setStructure(outputs);
      
      cassieOutputs = CassieOutputs;
      cassieOutputs.setStructure(outputs);
      %%%%%%%%%%%%%%%%%%% get values %%%%%%%%%%%%%%%%%%%%%%%%%%%%
      % Get current positions
      [qz,qy,qx] = Quaternion_to_Euler(cassieOutputs.getVectorNavOrientation);
      qq = [qx;qy;qz];
      qaR = cassieOutputs.getRightLegMotorPositions;
      qjR =  cassieOutputs.getRightLegJointPositions;
      qsR = cassieOutputs.getRightLegSpringDeflections;
      qaL = cassieOutputs.getLeftLegMotorPositions;
      qjL =  cassieOutputs.getLeftLegJointPositions;
      qsL = cassieOutputs.getLeftLegSpringDeflections;
      % Get current velocities
      dqq = cassieOutputs.getVectorNavAngularVelocity;
      dqaR = cassieOutputs.getRightLegMotorVelocities;
      dqjR =  cassieOutputs.getRightLegJointVelocities;
      dqsR = cassieOutputs.getRightLegSpringDeflectionRates;
      dqaL = cassieOutputs.getLeftLegMotorVelocities;
      dqjL =  cassieOutputs.getLeftLegJointVelocities;
      dqsL = cassieOutputs.getLeftLegSpringDeflectionRates;
      
      
      
      
      q_abduction_R = qaR(1);
      q_rotation_R = qaR(2);
      q_thigh_R = qaR(3);
      q_thigh_knee_R = qaR(4);
      q_knee_shin_R = qjR(1);
      q_thigh_shin_R = q_thigh_knee_R+q_knee_shin_R;
      q_shin_tarsus_R = qjR(2);
      q_toe_R = qaR(5);
      
      q_abduction_L = qaL(1);
      q_rotation_L = qaL(2);
      q_thigh_L = qaL(3);
      q_thigh_knee_L = qaL(4);
      q_knee_shin_L = qjL(1);
      q_thigh_shin_L = q_thigh_knee_L+q_knee_shin_L;
      q_shin_tarsus_L = qjL(2);
      q_toe_L = qaL(5);
      
      qall_1 = [0;  0;              0;              qx;         qy;             qz;
                0;  q_abduction_L;	q_rotation_L;	q_thigh_L;  q_thigh_shin_L; 0;  q_shin_tarsus_L; q_toe_L;
                0;  q_abduction_R;	q_rotation_R;	q_thigh_R;  q_thigh_shin_R; 0;  q_shin_tarsus_R; q_toe_R];
      
            
      qall_2 = [0;  0;              0;              qx;         qy;             qz;
                0;  q_abduction_L;	q_rotation_L;	q_thigh_L;  q_thigh_knee_L; q_knee_shin_L;  q_shin_tarsus_L; q_toe_L;
                0;  q_abduction_R;	q_rotation_R;	q_thigh_R;  q_thigh_knee_R; q_knee_shin_R;  q_shin_tarsus_R; q_toe_R];
      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      
      
      if obj.ini == 0
         hd =[qaL; qaR];
        dhd = [dqaL; dqaR];
      end
      
      obj.Switch = 0;
      if obj.s_last >=0.9999 || obj.ini == 0
          obj.stanceLeg = -obj.stanceLeg;
          obj.stepNum = obj.stepNum+1;
          obj.t0=t;
          obj.Switch = 1;
          if obj.stanceLeg == 1
              obj.params = ControlParams.RightStance;
              obj.params.HAlpha(:,1)=obj.hd;
%               obj.params.HAlpha(:,2)=obj.hd + obj.dhd/ControlParams.RightStance.ct/5; % 5 correspond to the dof of Bezier
          elseif obj.stanceLeg == -1
              obj.params = ControlParams.LeftStance;
              obj.params.HAlpha(:,1)=obj.hd;
%               obj.params.HAlpha(:,2)=obj.hd + obj.dhd/ControlParams.LeftStance.ct/5; % 5 correspond to the dof of Bezier
          else
              error('stanceLeg error')
          end
      end
      
      if obj.ini ==0
          obj.ini =1;
      end
      
      params = obj.params;
      s = (t - obj.t0)*params.ct;
%       s=0;
      obj.s_last = s;
      
      %% Compute desired motor positions
      
%       hd = bezier(params.HAlpha,s);
%       dhd = dbezier(params.HAlpha,s)*params.ct;
%         hd = [...
%         0; 0; 0.4983; -1.2018; -1.5979; ...
%         0; 0; 0.4983; -1.2018; -1.5979];
%         hd = [...
%         0; 0; 1.2; -1.2018; -1.5979; ...
%         0; 0; 1.2; -1.2018; -1.5979];
        hd = [...
        0; 0; 0; -1.2018; -1.5979; ...
        0; 0; 0; -1.2018; -1.5979];
        dhd = zeros(10,1);
%       hd([4,8])=[-0.75;-0.75];
%       hd(3) = 0.5;
%       dhd(3) = 0;
%       dhd([4,8])=[0;0];
%       hd(1:5)=[0;0;0.3;-0.75;-1];
%       dhd(1:5)=[0;0;0;-0;-0];
%       
%       dhd([5,10]) = 0;
      h0=[qaL; qaR];
      dh0 = [dqaL; dqaR];
      
      y= h0 - hd;
      dy = dh0 - dhd;
      
%       if obj.stanceLeg == 1
%           y(8) = qy -0;
%           dy(8) =
      
      u = - obj.Kp.*y - obj.Kd.*dy;
      u([5,10]) = 0;
      [ GRF_R GRF_L ] = get_GRF(obj,qall_2,qsR,qsL);
      [Fs1R Fs2R Fs1L Fs2L] = get_spring_force(obj,qsR,qsL);
      if t <0.1
          GRF_R = zeros(2,1);
          GRF_L = zeros(2,1);
      end
%       u = - obj.Kp.*y;
%%    Construct obj properties
      obj.hd = hd;
      obj.dhd = dhd;
%%    Construct Data
      Data = [];
      Data.t = t;
      Data.q = zeros(26,1);
      Data.dq = zeros(26,1);
      Data.u = u;
      Data.stanceLeg = 0;
      Data.s_sw = 0;
      Data.s_st = 0;
      Data.s = s;
      Data.ds = 0;
      Data.hd = hd;
      Data.dhd = dhd;
      Data.h0 = h0;
      Data.dh0 = dh0;
      Data.y = y;
      Data.dy = dy;
      Data.GRF = [GRF_R(2); GRF_L(2)];
%       Data.GRF = zeros(2,1);
      Data.t0 = obj.t0;
      Data.Switch = obj.Switch;
      Data.spring_force_R = [Fs1L; Fs2L];
      Data.spring_force_L = [Fs1R; Fs2R];
      
      Data.q_abduction_R = q_abduction_R;
      Data.q_rotation_R = q_rotation_R;
      Data.q_thigh_R = q_thigh_R;
      Data.q_thigh_knee_R = q_thigh_knee_R;
      Data.q_knee_shin_R = q_knee_shin_R;
      Data.q_thigh_shin_R = q_thigh_shin_R;
      Data.q_shin_tarsus_R = q_shin_tarsus_R;
      Data.q_toe_R = q_toe_R;
      
      Data.q_abduction_L = q_abduction_L ;
      Data.q_rotation_L = q_rotation_L;
      Data.q_thigh_L = q_thigh_L;
      Data.q_thigh_knee_L = q_thigh_knee_L;
      Data.q_knee_shin_L = q_knee_shin_L;
      Data.q_thigh_shin_L = q_thigh_shin_L;
      Data.q_shin_tarsus_L = q_shin_tarsus_L;
      Data.q_toe_L = q_toe_L;
%       u=zeros(10,1);
      %% PD Control

%       % Compute PD control law
%       ya = (state.q.qa - state_desired.q.qa);
%       dya = (state.dq.dqa - state_desired.dq.dqa);
%       u = -(obj.Kp.*ya + obj.Kd.*dya);
%       
%       % Saturate torques
%       u = saturate(u, -obj.TorqueLimits, obj.TorqueLimits);
%       
%       % Check to see if there was a domain switch
%       if obj.stanceLeg ~= obj.stanceLeg_prev
%           % Compute torque update sigmoid params
%           obj.u_cont_alpha = flat_ground_walking.controller.functions. ...
%               TorqueContinuity(u, obj.u_prev, s, obj.u_cont_beta);
%       end
%       % Maintain errors across domain switches (sigmoid)
%       u = u + (2.*obj.u_cont_alpha + -2.*obj.u_cont_alpha./(1+exp(-obj.u_cont_beta*s)));
%       
%       % Final Updates
%       obj.u_prev = u;
%       obj.stanceLeg_prev = obj.stanceLeg;
%       
%       % Set desired motor torques
%       obj.inputs.setMotorTorques(obj.GearRatios.*u);
%       
%       %% Handle impacts and store data
%       
%       % Impact Detection
%       if DetectImpact(obj, s_unsat, s_sw)
%           HandleImpact(obj, t, s, ds, qd, dqd);
%       end
%       
%       % Store Data
%       Data.t = t;
%       Data.q = q;
%       Data.dq = q;
%       Data.u = u;
%       Data.stanceLeg = obj.stanceLeg;
%       Data.s_sw = s_sw;
%       Data.s_st = s_st;
%       Data.s = s;
%       Data.ds = ds;
%       Data.ya = rad2deg(ya);
%       Data.dya = rad2deg(dya);
%       Data.GRF = [GRF_R; GRF_L];
    
      % Return the updated Cassie inputs data structure
      obj.inputs.setMotorTorques(u);
      inputs = obj.inputs.getStructure;
        
    end % stepImpl
    
    
    function [ GRF_R GRF_L ] = get_GRF(obj,qall,qsR,qsL)
        
%         JR = controller.kin.J_RightToeJoint(qall);
%         JL = controller.kin.J_LeftToeJoint(qall);
        JR = controller.kin.J_RightToeBottom(qall);
        JL = controller.kin.J_LeftToeBottom(qall);
        [Fs1R Fs2R Fs1L Fs2L] = get_spring_force(obj,qsR,qsL);
        
        JR_s = JR([1,3],[20,21]);
        JL_s = JL([1,3],[12,13]);
%         GRF_R = (-JR_s')^-1*[Fs1R+Fs2R; Fs2R];
        GRF_R = (-JR_s')^-1*[Fs1R+Fs2R; Fs2R];
        GRF_L = (-JL_s')^-1*[Fs1L; Fs2L];

    end
    
    function [Fs1R Fs2R Fs1L Fs2L] = get_spring_force(obj,qsR,qsL)
        Fs1R =- obj.Ks1 * qsR(1);
        Fs2R =- obj.Ks2 * qsR(2);
        Fs1L =- obj.Ks1 * qsL(1);
        Fs2L =- obj.Ks2 * qsL(2);
    end
    
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%%%%%%%%% Ross Function %%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    
            
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