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
    
    % foot placement gain s is saggital, l is lateral
    Kfs_d = 0.3;
    Kfs_p = 0.02;
    
    Kfl_d = 0.5;
    % Allow domain switching
    allow_switching = true;
    
    % spring coeffient
    Ks1 = 1800;
    Ks2 = 1600;
    
    stance_thre = 120;
    
    abduction_tol = 0.1;
    
    sagittal_offset = -0.05;
    
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
      t_prev =0;
      position = zeros(3,1);
      dqy_start = 0;
      
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
      [qroll, qpitch, qyaw, dqroll, dqpitch, dqyaw] = Quaternion_to_Euler(cassieOutputs.getVectorNavOrientation, cassieOutputs.getVectorNavAngularVelocity);
      qq = [qroll;qpitch;qyaw];
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
      
      
      dq_abduction_R = dqaR(1);
      dq_rotation_R = dqaR(2);
      dq_thigh_R = dqaR(3);
      dq_thigh_knee_R = dqaR(4);
      dq_knee_shin_R = dqjR(1);
      dq_thigh_shin_R = dq_thigh_knee_R+dq_knee_shin_R;
      dq_shin_tarsus_R = dqjR(2);
      dq_toe_R = dqaR(5);
      
      dq_abduction_L = dqaL(1);
      dq_rotation_L = dqaL(2);
      dq_thigh_L = dqaL(3);
      dq_thigh_knee_L = dqaL(4);
      dq_knee_shin_L = dqjL(1);
      dq_thigh_shin_L = dq_thigh_knee_L+dq_knee_shin_L;
      dq_shin_tarsus_L = dqjL(2);
      dq_toe_L = dqaL(5);
      
      qall_1 = [0;  0;              0;              qroll;         qpitch;             qyaw;
                0;  q_abduction_L;	q_rotation_L;	q_thigh_L;  q_thigh_shin_L; 0;  q_shin_tarsus_L; q_toe_L;
                0;  q_abduction_R;	q_rotation_R;	q_thigh_R;  q_thigh_shin_R; 0;  q_shin_tarsus_R; q_toe_R];
      
      
      qall_2 = [0;  0;              0;              qroll;         qpitch;             qyaw;
                0;  q_abduction_L;	q_rotation_L;	q_thigh_L;  q_thigh_knee_L; q_knee_shin_L;  q_shin_tarsus_L; q_toe_L;
                0;  q_abduction_R;	q_rotation_R;	q_thigh_R;  q_thigh_knee_R; q_knee_shin_R;  q_shin_tarsus_R; q_toe_R];
      
      dqall_1 = [0;  0;              0;              dqroll;         dqpitch;             dqyaw;
                 0;  dq_abduction_L;	dq_rotation_L;	dq_thigh_L;  dq_thigh_shin_L; 0;  dq_shin_tarsus_L; dq_toe_L;
                 0;  dq_abduction_R;	dq_rotation_R;	dq_thigh_R;  dq_thigh_shin_R; 0;  dq_shin_tarsus_R; dq_toe_R];
      
      
      dqall_2 = [0;  0;              0;              dqroll;         dqpitch;             dqyaw;
                 0;  dq_abduction_L;	dq_rotation_L;	dq_thigh_L;  dq_thigh_knee_L; dq_knee_shin_L;  dq_shin_tarsus_L; dq_toe_L;
                 0;  dq_abduction_R;	dq_rotation_R;	dq_thigh_R;  dq_thigh_knee_R; dq_knee_shin_R;  dq_shin_tarsus_R; dq_toe_R];
      
 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      [dqx,dqy,dqz] = get_velocity(obj,qall_2,dqall_2);
      dqall_2_g = [ dqx;  dqy;              dqz;              dqroll;         dqpitch;             dqyaw;
                    0;  dq_abduction_L;	dq_rotation_L;	dq_thigh_L;  dq_thigh_knee_L; dq_knee_shin_L;  dq_shin_tarsus_L; dq_toe_L;
                    0;  dq_abduction_R;	dq_rotation_R;	dq_thigh_R;  dq_thigh_knee_R; dq_knee_shin_R;  dq_shin_tarsus_R; dq_toe_R];
                
                
      com_pos = controller.kin.ComPosition(qall_2);
      com_pos = com_pos';
      com_vel = controller.kin.ComVelocity(qall_2,dqall_2_g);
      
      if obj.ini == 0
         hd =[qaL; qaR];
        dhd = [dqaL; dqaR];
      end
      
      obj.Switch = 0;
      [ GRF_R GRF_L ] = get_GRF(obj,qall_2,qsR,qsL,0);
      [Fs1R Fs2R Fs1L Fs2L] = get_spring_force(obj,qsR,qsL);
      if obj.stanceLeg == 1
          swing_grf = GRF_L(2);
      else
          swing_grf = GRF_R(2);
      end
      
      
%             if obj.s_last >=0.9999 || obj.ini == 0
      if (obj.s_last >=0.5 && swing_grf >obj.stance_thre) || obj.ini == 0 || obj.s_last > 2
          obj.stanceLeg = -obj.stanceLeg;
          obj.stepNum = obj.stepNum+1;
          obj.t0=t;
          obj.Switch = 1;
          obj.dqy_start = dqy;
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
      
      hd = bezier(params.HAlpha,s);
      dhd = dbezier(params.HAlpha,s)*params.ct;
%         hd = [...
%         0; 0; 0; -1.5; -1.5979; ...
%         0; 0; 0.4983; -1.2018; -1.5979];
%         hd = [...
%         0; 0; 0.4983; -1.2018; -1.5979; ...
%         0; 0; 0.4983; -1.2018; -1.5979];
%         hd = [...
%         0; 0; 1.2; -1.2018; -1.5979; ...
%         0; 0; 1.2; -1.2018; -1.5979];
%         hd = [...
%         0; 0; 0.8; -1.2018; -1.5979; ...
%         0; 0; 0.8; -1.2018; -1.5979];
%         hd = [...
%         0; 0; 0; -1.2018; -1.5979; ...
%         0; 0; 0; -1.2018; -1.5979];

%       hd = [...
%         0; 0; 0.4983; -0.7330; -1.5979; ...
%         0; 0; 0.4983; -0.7330; -1.5979];

%         dhd = zeros(10,1);
        
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
      
      h0_fix = h0;
      dh0_fix = dh0;
      
      p =1;
%       if dqx>= 0
%           p =1;
%       else
%           p =2;
%       end
      
%       if obj.stanceLeg == 1
%     if GRF_R(2)>obj.stance_thre
    if obj.stanceLeg == 1 && GRF_R(2)>obj.stance_thre
          h0(8) = 3*qpitch;
          dh0(8) = 3*dqpitch;
          hd(8) = 0;
          dhd(8) = 0;
          
%           hd(3) = hd(3) + obj.Kfs_d*p*(dqx-ControlParams.Desired_Velocity) - 0.045;
%           hd(3) = hd(3) + obj.Kfs_d*p*dqx - 0.05 +obj.Kfs_p*obj.position(1);
          hd(3) = hd(3) + obj.Kfs_d*p*dqx*s + obj.sagittal_offset;
          %% latteral
          h0(6) = -3*qroll;
          dh0(6) = -3*dqroll;
          hd(6) = 0;
          dhd(6) = 0;
          
          
          h0(1) = h0(1) + qroll;
          dh0(1) = dh0(1) + dqroll;
          hd(1) = hd(1) + obj.Kfl_d*dqy*s;
 
%           hd(1) = hd(1) -qroll + obj.Kfl_d*dqy*s;
%           hd(1) = max( hd(1), -0.1);
%           dhd(1) = dhd(1) - dqroll;
          
          if h0_fix(6) - hd(1) > obj.abduction_tol
              hd(1) = h0_fix(6) - obj.abduction_tol;
              dhd(1) = dh0_fix(6);
          end
%           
%           hd(2) = hd(2) - qyaw;
    end
%       elseif obj.stanceLeg == -1
%     if GRF_L(2)>obj.stance_thre
      if obj.stanceLeg == -1 && GRF_L(2)>obj.stance_thre
          h0(3) = 3*qpitch;
          dh0(3) = 3*dqpitch;
          hd(3) = 0;
          dhd(3) = 0;

%           hd(8) = hd(8) +obj.Kfs_d*p*(dqx-ControlParams.Desired_Velocity) - 0.045;
%           hd(8) = hd(8) +obj.Kfs_d*p*dqx - 0.05 + obj.Kfs_p*obj.position(1);
            hd(8) = hd(8) +obj.Kfs_d*p*dqx*s + obj.sagittal_offset;
          
          h0(1) = -3*qroll;
          dh0(1) = -3*dqroll;
          hd(1) = 0;
          dhd(1) = 0;
          
          h0(6) = h0(6) + qroll;
          dh0(6) = dh0(6) + dqroll;
          hd(6) = hd(6) + obj.Kfl_d*dqy*s;
          
%           hd(6) = hd(6)  - qroll + obj.Kfl_d*dqy*s;
%           hd(6) = min( hd(6), 0.1);
%           dhd(6) = dhd(6) - dqroll;
          
          if hd(6) - h0_fix(1) > obj.abduction_tol
              hd(6) = h0_fix(1) + obj.abduction_tol;
              dhd(6) = dh0_fix(1);
          end
          
%           hd(7) = hd(7) - qyaw;
      end
      
      %% flat the toe
      if obj.stanceLeg == 1
          h0(5) = -qpitch + h0_fix(3) + h0_fix(4) + h0_fix(5) + 2;
          dh0(5) = -dqpitch + dh0_fix(3) + dh0_fix(4) + dh0_fix(5);
          hd(5) = 0;
          dhd(5) = 0;
          hd(10) = h0(10);
          dhd(10) = dh0(10);
      end
      if obj.stanceLeg == -1
          h0(10) = -qpitch + h0_fix(8) + h0_fix(9) + h0_fix(10) + 2;
          dh0(10) = -dqpitch + dh0_fix(8) + dh0_fix(9) + dh0_fix(10);
          hd(10) = 0;
          dhd(10) = 0;
          hd(5) = h0(5);
          dhd(5) = dh0(5);          
      end
      
      
      y= h0 - hd;
      dy = dh0 - dhd;
      
      
      u = - obj.Kp.*y - obj.Kd.*dy;
      
%       if obj.stanceLeg == 1
%           u(10) = 0;
% %           u(5)=0.5*u(5);
%       elseif obj.stanceLeg == -1
%           u(5) = 0;
% %           u(10)= 0.5 *u(10);
%       else
%           error('stanceLeg error')
%       end
      
%       u([5,10]) = 0;
%       u = saturate(u, -obj.TorqueLimits, obj.TorqueLimits);
%       u(4) = 30;
%       u(9) = 30;

      if t <0.1
          GRF_R = zeros(2,1);
          GRF_L = zeros(2,1);
      end
%       u = - obj.Kp.*y;
%%    Construct obj properties
      if t >=0.1
      obj.position = obj.position + (t-obj.t_prev)*[dqx;dqy;dqz];
      end
      obj.hd = hd;
      obj.dhd = dhd;
      obj.t_prev = t;
%%    Construct Data
      Data = [];
      Data.t = t;
      Data.q = zeros(26,1);
      Data.dq = zeros(26,1);
      Data.u = u;
      Data.stanceLeg = obj.stanceLeg;
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
      
      
      Data.torso_angle = [qroll;qpitch;qyaw];
      Data.d_torso_angle = [dqroll;dqpitch;dqyaw];
      
      Data.torso_position = obj.position;
      Data.torso_velocity = [dqx;dqy;dqz];
      
      Data.com_pos = com_pos;
      Data.com_vel = com_vel;
      
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
 
    
      % Return the updated Cassie inputs data structure
      obj.inputs.setMotorTorques(u);
      inputs = obj.inputs.getStructure;
        
    end % stepImpl
    
    
    function [ GRF_R GRF_L ] = get_GRF(obj,qall,qsR,qsL,u)
        
        JR = controller.kin.J_RightToeJoint(qall);
        JL = controller.kin.J_LeftToeJoint(qall);
%         JR = controller.kin.J_RightToeBottom(qall);
%         JL = controller.kin.J_LeftToeBottom(qall);
        G = controller.kin.Ge_vec(qall);
        [Fs1R Fs2R Fs1L Fs2L] = get_spring_force(obj,qsR,qsL);
        
%         JR_s = JR([1,3],[20,21]);
%         JL_s = JL([1,3],[12,13]);
        JR_s = JR([1,3],[20,21]);
        JL_s = JL([1,3],[12,13]);
        JR_s_test = JR([1,3],[19,21]);
        JL_s_test = JL([1,3],[11,13]);
        temp_1 = JR([1,3],19)+JR([1,3],20)+JR([1,3],21);
        JR_s_temp1 = JR_s;
        JR_s_temp1(:,2)=temp_1;
        JR_s_temp2 = JR_s;
        JR_s_temp2(:,1) = JR_s(:,1)-JR_s(:,2);
        JR_s_temp3 = JR_s;
        JR_s_temp3(:,1) = JR_s(:,1)-2*JR_s(:,2);
%         GRF_R = (-JR_s')^-1*[Fs1R+Fs2R; Fs2R];
        GRF_R = (-JR_s')^-1*[Fs1R+Fs2R; Fs2R];
        GRF_L = (-JL_s')^-1*[Fs1L+Fs2L; Fs2L];
        GRF_R_test = (-[JR_s zeros(2,1); ones(1,3)]')^-1*[Fs1R+Fs2R; Fs2R;-7.13];
        GRF_R_test2 = (-JR_s')^-1*[-Fs1R-Fs2R; Fs2R];
        GRF_R_test3 = (-JR_s')^-1*([Fs1R+Fs2R; Fs2R]-G([20,21]));
        GRF_R_test4 = (-JR_s')^-1*([Fs1R+Fs2R; Fs2R]+G([20,21]));
        GRF_R_test5 = (-JR_s_temp2')^-1*([Fs1R; Fs2R]);
    end
    
    function [Fs1R Fs2R Fs1L Fs2L] = get_spring_force(obj,qsR,qsL)
        Fs1R =- obj.Ks1 * qsR(1);
        Fs2R =- obj.Ks2 * qsR(2);
        Fs1L =- obj.Ks1 * qsL(1);
        Fs2L =- obj.Ks2 * qsL(2);
    end
    
    function [dqx,dqy,dqz] = get_velocity(obj,q,dq)
        if obj.stanceLeg == 1
            range = 15:21;
            J = controller.kin.J_RightToeBottom(q);
        elseif obj.stanceLeg == -1
            J = controller.kin.J_LeftToeBottom(q);
            range = 7:13;
        end
        
        v_torso = (-J(:,1:3)^-1)*(J(:,4:6)*dq(4:6)+J(:,range)*dq(range));
        dqx = v_torso(1);
        dqy = v_torso(2);
        dqz = v_torso(3);
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