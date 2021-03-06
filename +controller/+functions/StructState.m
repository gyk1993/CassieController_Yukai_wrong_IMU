function [state] = StructState(q, dq, stanceLeg)
% Function that separates out q and dq into more readable versions
%
%   Ross Hartley
%   6/08/2017
%

% Extract State
qp = q(1:3);
qq = q(4:6);
qaL = q(7:11);
qjL = q(12:14);
qsL = q(15:16);
qaR = q(17:21);
qjR = q(22:24);
qsR = q(25:26);

dqp = dq(1:3);
dqq = dq(4:6);
dqaL = dq(7:11);
dqjL = dq(12:14);
dqsL = dq(15:16);
dqaR = dq(17:21);
dqjR = dq(22:24);
dqsR = dq(25:26);

[roll_XYZ, pitch_XYZ, yaw_XYZ] = ConvertEuler_ZYX_to_XYZ(qq(1),qq(2),qq(3));

if stanceLeg == 1
    % Right Stance
    state.q.opt = [qp; roll_XYZ; pitch_XYZ; yaw_XYZ; 0; qaL(1:4); 0; qjL(2); qaL(5); 0; qaR(1:4); 0; qjR(2); qaR(5)];

    state.q.all = q;
    state.q.qp = qp;
    state.q.qq = qq;
    state.q.qa = [qaL; qaR];
    state.q.qj = [qjL; qjR];
    state.q.qs = [qsL; qsR];
    
    state.dq.all = dq;
    state.dq.dqp = dqp;
    state.dq.dqq = dqq;
    state.dq.dqa = [dqaL; dqaR];
    state.dq.dqj = [dqjL; dqjR];
    state.dq.dqs = [dqsL; dqsR];

    state.stance.qa = qaR;
    state.stance.qj = qjR;
    state.stance.qs = qsR;
    state.stance.dqa = qaR;
    state.stance.dqj = qjR;
    state.stance.dqs = qsR;
    
    state.swing.qa = qaL;
    state.swing.qj = qjL;
    state.swing.qs = qsL;
    state.swing.dqa = qaL;
    state.swing.dqj = qjL;
    state.swing.dqs = qsL;
    
    state.q_readable.x = 0;
    state.q_readable.y = 0;
    state.q_readable.z = 0;
    
    state.q_readable.roll = qq(1);
    state.q_readable.pitch = qq(2);
    state.q_readable.yaw = qq(3);
    
    state.q_readable.stance_hip_abduction = qaR(1);
    state.q_readable.stance_hip_rotation = qaR(2);
    state.q_readable.stance_hip_flexion = qaR(3);
    state.q_readable.stance_knee_preSpring = qaR(4);
    state.q_readable.stance_knee = qaR(4) + qsR(1);
    state.q_readable.stance_ankle_preSpring = deg2rad(13) - qaR(4);
    state.q_readable.stance_ankle = qjR(2);
    state.q_readable.stance_toe = qaR(5);
    
    state.q_readable.swing_hip_abduction = qaL(1);
    state.q_readable.swing_hip_rotation = qaL(2);
    state.q_readable.swing_hip_flexion = qaL(3);
    state.q_readable.swing_knee_preSpring = qaL(4);
    state.q_readable.swing_knee = qaL(4) + qsL(1);
    state.q_readable.swing_ankle_preSpring = deg2rad(13) - qaL(4);
    state.q_readable.swing_ankle = qjL(2);
    state.q_readable.swing_toe = qaL(5);
    
    state.dq_readable.roll = dqq(1);
    state.dq_readable.pitch = dqq(2);
    state.dq_readable.yaw = dqq(3);
    
    state.dq_readable.stance_hip_abduction = dqaR(1);
    state.dq_readable.stance_hip_rotation = dqaR(2);
    state.dq_readable.stance_hip_flexion = dqaR(3);
    state.dq_readable.stance_knee_preSpring = dqaR(4);
    state.dq_readable.stance_knee = dqaR(4) + dqsR(1);
    state.dq_readable.stance_ankle_preSpring = - dqaR(4);
    state.dq_readable.stance_ankle = dqjR(2);
    state.dq_readable.stance_toe = dqaR(5);
    
    state.dq_readable.swing_hip_abduction = dqaL(1);
    state.dq_readable.swing_hip_rotation = dqaL(2);
    state.dq_readable.swing_hip_flexion = dqaL(3);
    state.dq_readable.swing_knee_preSpring = dqaL(4);
    state.dq_readable.swing_knee = dqaL(4) + dqsL(1);
    state.dq_readable.swing_ankle_preSpring = - dqaL(4);
    state.dq_readable.swing_ankle = dqjL(2);
    state.dq_readable.swing_toe = dqaL(5);
    
else
    % Left Stance
    state.q.opt = [qp; roll_XYZ; pitch_XYZ; yaw_XYZ; 0; qaL(1:4); 0; qjL(2); qaL(5); 0; qaR(1:4); 0; qjR(2); qaR(5)];

    state.q.all = q;
    state.q.qp = qp;
    state.q.qq = qq;
    state.q.qa = [qaL; qaR];
    state.q.qj = [qjL; qjR];
    state.q.qs = [qsL; qsR];
    
    state.dq.all = dq;
    state.dq.dqp = dqp;
    state.dq.dqq = dqq;
    state.dq.dqa = [dqaL; dqaR];
    state.dq.dqj = [dqjL; dqjR];
    state.dq.dqs = [dqsL; dqsR];
    
    state.stance.qa = qaL;
    state.stance.qj = qjL;
    state.stance.qs = qsL;
    state.stance.dqa = qaL;
    state.stance.dqj = qjL;
    state.stance.dqs = qsL;
    
    state.swing.qa = qaR;
    state.swing.qj = qjR;
    state.swing.qs = qsR;
    state.swing.dqa = qaR;
    state.swing.dqj = qjR;
    state.swing.dqs = qsR;
    
    state.q_readable.x = 0;
    state.q_readable.y = 0;
    state.q_readable.z = 0;
    
    state.q_readable.roll = qq(1);
    state.q_readable.pitch = qq(2);
    state.q_readable.yaw = qq(3);
    
    state.q_readable.stance_hip_abduction = qaL(1);
    state.q_readable.stance_hip_rotation = qaL(2);
    state.q_readable.stance_hip_flexion = qaL(3);
    state.q_readable.stance_knee_preSpring = qaL(4);
    state.q_readable.stance_knee = qaL(4) + qsL(1);
    state.q_readable.stance_ankle_preSpring = deg2rad(13) - qaL(4);
    state.q_readable.stance_ankle = qjL(2);
    state.q_readable.stance_toe = qaL(5);
    
    state.q_readable.swing_hip_abduction = qaR(1);
    state.q_readable.swing_hip_rotation = qaR(2);
    state.q_readable.swing_hip_flexion = qaR(3);
    state.q_readable.swing_knee_preSpring = qaR(4);
    state.q_readable.swing_knee = qaR(4) + qsR(1);
    state.q_readable.swing_ankle_preSpring = deg2rad(13) - qaR(4);
    state.q_readable.swing_ankle = qjR(2);
    state.q_readable.swing_toe = qaR(5);
    
    state.dq_readable.roll = dqq(1);
    state.dq_readable.pitch = dqq(2);
    state.dq_readable.yaw = dqq(3);
    
    state.dq_readable.stance_hip_abduction = dqaL(1);
    state.dq_readable.stance_hip_rotation = dqaL(2);
    state.dq_readable.stance_hip_flexion = dqaL(3);
    state.dq_readable.stance_knee_preSpring = dqaL(4);
    state.dq_readable.stance_knee = dqaL(4) + dqsL(1);
    state.dq_readable.stance_ankle_preSpring = - dqaL(4);
    state.dq_readable.stance_ankle = dqjL(2);
    state.dq_readable.stance_toe = dqaL(5);
    
    state.dq_readable.swing_hip_abduction = dqaR(1);
    state.dq_readable.swing_hip_rotation = dqaR(2);
    state.dq_readable.swing_hip_flexion = dqaR(3);
    state.dq_readable.swing_knee_preSpring = dqaR(4);
    state.dq_readable.swing_knee = dqaR(4) + dqsR(1);
    state.dq_readable.swing_ankle_preSpring = - dqaR(4);
    state.dq_readable.swing_ankle = dqjR(2);
    state.dq_readable.swing_toe = dqaR(5);
end
end

