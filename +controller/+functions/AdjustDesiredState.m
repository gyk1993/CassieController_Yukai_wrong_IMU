function [state_desired] = AdjustDesiredState...
    (state, state_desired, stanceLeg, s_st, s_sw)
% COMPUTEACTUATORS Function to compute desired actuator angles
%
%   Ross Hartley
%   4/28/2017
%
qad_sw = zeros(5,1);
dqad_sw = zeros(5,1);
qad_st = zeros(5,1);
dqad_st = zeros(5,1);

% Solve for q_act
% FK([q_act, q_unact]) - FK_des = 0 

% Forward Kinematics
[q_swLA, q_swLL] = flat_ground_walking.controller.kin. ...
    FK_qFlexion_qKnee_to_qLA_qLL(state.q_readable.swing_hip_flexion, state.q_readable.swing_knee);
[dq_swLA, dq_swLL] = flat_ground_walking.controller.kin. ...
    FK_dqFlexion_dqKnee_to_dqLA_dqLL(state.q_readable.swing_hip_flexion, state.q_readable.swing_knee, state.dq_readable.swing_hip_flexion, state.dq_readable.swing_knee);

[qd_swLA, qd_swLL] = flat_ground_walking.controller.kin. ...
    FK_qFlexion_qKnee_to_qLA_qLL(state_desired.q_readable.swing_hip_flexion, state_desired.q_readable.swing_knee);
[dqd_swLA, dqd_swLL] = flat_ground_walking.controller.kin. ...
    FK_dqFlexion_dqKnee_to_dqLA_dqLL(state_desired.q_readable.swing_hip_flexion, state_desired.q_readable.swing_knee, state_desired.dq_readable.swing_hip_flexion, state_desired.dq_readable.swing_knee);
    
[~, q_stLL] = flat_ground_walking.controller.kin. ...
    FK_qFlexion_qKnee_to_qLA_qLL(state.q_readable.stance_hip_flexion,state.q_readable.stance_knee);
[~, dq_stLL] = flat_ground_walking.controller.kin. ...
    FK_dqFlexion_dqKnee_to_dqLA_dqLL(state.q_readable.stance_hip_flexion,state.q_readable.stance_knee,state.dq_readable.stance_hip_flexion,state.dq_readable.stance_knee);

[~, qd_stLL] = flat_ground_walking.controller.kin. ...
    FK_qFlexion_qKnee_to_qLA_qLL(state_desired.q_readable.stance_hip_flexion,state_desired.q_readable.stance_knee);
[~, dqd_stLL] = flat_ground_walking.controller.kin. ...
    FK_dqFlexion_dqKnee_to_dqLA_dqLL(state_desired.q_readable.stance_hip_flexion,state_desired.q_readable.stance_knee,state_desired.dq_readable.stance_hip_flexion,state_desired.dq_readable.stance_knee);

%% Swing Leg Actuators

% hip abduction
qad_sw(1) = (1-s_sw) * state_desired.q_readable.swing_hip_abduction + ...
    (s_sw) * state.q_readable.swing_hip_abduction;
dqad_sw(1) = (1-s_sw) * state_desired.dq_readable.swing_hip_abduction + ...
    (s_sw) * state.dq_readable.swing_hip_abduction;

% hip rotation
qad_sw(2) = (1-s_sw) * state_desired.q_readable.swing_hip_rotation + ...
    (s_sw) * state.q_readable.swing_hip_rotation;
dqad_sw(2) = (1-s_sw) * state_desired.dq_readable.swing_hip_rotation + ...
    (s_sw) * state.dq_readable.swing_hip_rotation;

% knee angle
qad_sw(4) = flat_ground_walking.controller.kin. ...
    IK_qLL_to_qKnee(qd_swLL);
dqad_sw(4) = flat_ground_walking.controller.kin. ...
    IK_dqLL_to_dqKnee(qd_swLL, dqd_swLL);

% hip flexion
qad_sw(3) = (1-s_sw) * flat_ground_walking.controller.kin. ...
    IK_qLA_qKnee_to_qFlexion(qd_swLA, qad_sw(4)) + ...
    (s_sw) * state.q_readable.swing_hip_flexion;
dqad_sw(3) = (1-s_sw) * flat_ground_walking.controller.kin. ...
    IK_dqLA_qKnee_to_dqFlexion(qd_swLA, qad_sw(4), dqd_swLA, dqad_sw(4)) + ...
    (s_sw) * state.dq_readable.swing_hip_flexion;

% toe angle
qad_sw(5) = (1-s_sw) * state.q_readable.swing_toe + ...
        (s_sw) * state.q_readable.swing_toe;
dqad_sw(5) = (1-s_sw) * state.dq_readable.swing_toe + ...
        (s_sw) * state.dq_readable.swing_toe;

%% Stance Leg Actuators

% hip abduction
qad_st(1) = (s_st) * state.q_readable.stance_hip_abduction + (state.q_readable.roll - state_desired.q_readable.roll) + ...
    (1-s_st) * state_desired.q_readable.stance_hip_abduction;
dqad_st(1) = (s_st) * state.dq_readable.stance_hip_abduction + (state.dq_readable.roll - state_desired.dq_readable.roll) + ...
    (1-s_st) * state_desired.dq_readable.stance_hip_abduction;

% hip rotation
% qad_st(2) = (s_st) * state.q_readable.stance_hip_rotation - (state.q_readable.yaw - state_desired.q_readable.yaw) + ...
%     (1-s_st) * state_desired.q_readable.stance_hip_rotation;
% dqad_st(2) = (s_st) * state.dq_readable.stance_hip_rotation - (state.dq_readable.yaw - state_desired.dq_readable.yaw) + ...
%     (1-s_st) * state_desired.dq_readable.stance_hip_rotation;
qad_st(2) = (s_st) * state_desired.q_readable.stance_hip_rotation + ...
    (1-s_st) * state_desired.q_readable.stance_hip_rotation;
dqad_st(2) = (s_st) * state_desired.dq_readable.stance_hip_rotation + ...
    (1-s_st) * state_desired.dq_readable.stance_hip_rotation;

% knee angle
qad_st(4) = flat_ground_walking.controller.kin. ...
    IK_qLL_to_qKnee(qd_stLL);
dqad_st(4) = flat_ground_walking.controller.kin. ...
    IK_dqLL_to_dqKnee(qd_stLL, dqd_stLL);

% hip flexion
qad_st(3) = (s_st) * (state.q_readable.stance_hip_flexion + (state.q_readable.pitch - state_desired.q_readable.pitch)) + ...
    (1-s_st) * state_desired.q_readable.stance_hip_flexion;
dqad_st(3) = (s_st) * (state.dq_readable.stance_hip_flexion + (state.dq_readable.pitch - state_desired.dq_readable.pitch)) + ...
    (1-s_st) * state_desired.dq_readable.stance_hip_flexion;

% toe angle
qad_st(5) = state.q_readable.stance_toe;
dqad_st(5) = state.dq_readable.stance_toe;


%% Reconstruct Desired Actuators
qd = state_desired.q.all;
dqd = state_desired.dq.all;

if stanceLeg == 1
    % Right stance
    qd(7:11) = qad_sw; % Left
    dqd(7:11) = dqad_sw;
    qd(17:21) = qad_st; % Right
    dqd(17:21) = dqad_st;
else
    % Left stance
    qd(7:11) = qad_st; % Left
    dqd(7:11) = dqad_st;
    qd(17:21) = qad_sw; % Right
    dqd(17:21) = dqad_sw;
end

state_desired = flat_ground_walking.controller.functions. ...
    StructState(qd, dqd, stanceLeg);

end



