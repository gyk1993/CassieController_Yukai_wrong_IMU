%% Generates Forward and Inverse Kinematics for control
PATH = '+controller/+kin/';

%% Load urdf model and generate kinematics

% Set FROST path
FROST_PATH = 'D:\Graduate\robots\SomePackage\frost';
addpath(FROST_PATH)
frost_addpath;

% Load model
cassie = flat_ground_walking.CASSIE('urdf/cassie.urdf');
% cassie.ExportKinematics(PATH);

% Export Toe Height and Jacobians
X = SymVariable('x',[22,1]);
pL = cassie.ContactPoints.LeftToeBottom.computeCartesianPosition;
pR = cassie.ContactPoints.RightToeBottom.computeCartesianPosition;
LeftToe = SymFunction('LeftToeBottom',pL,X);
RightToe = SymFunction('RightToeBottom',pR,X);
% LeftToeHeight = SymFunction('LeftToeHeight',pL(3),X);
% RightToeHeight = SymFunction('RightToeHeight',pR(3),X);

LeftToe.export(PATH, 'ForceExport', true);
LeftToe.export(PATH, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
RightToe.export(PATH, 'ForceExport', true);
RightToe.export(PATH, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);

LeftToe.exportJacobian(PATH, 'ForceExport', true);
LeftToe.exportJacobian(PATH, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
RightToe.exportJacobian(PATH, 'ForceExport', true);
RightToe.exportJacobian(PATH, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);



current_dir = pwd;
cd(PATH);
!ren *.cc *.c
!ren *.hh *.h
cd(current_dir);

%% Forward Kinemtics for output control
syms qFlexion qKnee qLA qLL dqFlexion dqKnee dqLA dqLL
H10 = [cos(qFlexion), -sin(qFlexion), 0; sin(qFlexion), cos(qFlexion), 0; 0,0,1];
H21 = [cos(qKnee), -sin(qKnee), 0; sin(qKnee), cos(qKnee), -0.12; 0,0,1];
H32 = [cos(-qKnee+deg2rad(13)), -sin(-qKnee+deg2rad(13)), 0.0674; sin(-qKnee+deg2rad(13)), cos(-qKnee+deg2rad(13)), -0.4955; 0,0,1];
H43 = [1, 0, -0.04; 0, 1, -0.408; 0,0,1];
H = H10*H21*H32*H43;
toe_position = H(1:2,end);
qLL = sqrt(simplify(toe_position(1)^2 + toe_position(2)^2));
qLA = simplify(asin(toe_position(1)/qLL));
dqLL = simplify(jacobian(qLL, [qFlexion; qKnee])*[dqFlexion; dqKnee]);
dqLA = simplify(jacobian(qLA, [qFlexion; qKnee])*[dqFlexion; dqKnee]);

matlabFunction(toe_position,'File',[PATH,'FK_hipflexion_to_toe'],'Vars',{qFlexion,qKnee},'Outputs',{'hip_flexion_to_toe'});
matlabFunction(qLA, qLL,'File',[PATH,'FK_qFlexion_qKnee_to_qLA_qLL'],'Vars',{qFlexion,qKnee},'Outputs',{'qLA', 'qLL'});
matlabFunction(dqLA, dqLL,'File',[PATH,'FK_dqFlexion_dqKnee_to_dqLA_dqLL'],'Vars',{qFlexion,qKnee,dqFlexion,dqKnee},'Outputs',{'dqLA', 'dqLL'});


%% Inverse Kinematics for output control
syms qLA qLL dqLA dqLL
% solving for qKnee
tmp = simplify(toe_position(1)^2 + toe_position(2)^2);
solution = solve(qLL^2  == tmp, qKnee, 'ReturnConditions', true, 'Real', true);
k = 0;
sol_qKnee = simplify(subs(solution.qKnee));
matlabFunction(sol_qKnee(1),'File',[PATH,'IK_qLL_to_qKnee'],'Vars',{qLL},'Outputs',{'qKnee'});
matlabFunction(jacobian(sol_qKnee(1), qLL)*dqLL,'File',[PATH,'IK_dqLL_to_dqKnee'],'Vars',{qLL, dqLL},'Outputs',{'dqKnee'});
% solving for qFlexion
tmp = simplify(asin(toe_position(1)/sqrt(simplify(toe_position(1)^2 + toe_position(2)^2))));
solution = solve(qLA  == tmp, qFlexion, 'ReturnConditions', true, 'Real', true);
k = 0;
sol_qFlexion = simplify(subs(solution.qFlexion));
matlabFunction(sol_qFlexion(1),'File',[PATH,'IK_qLA_qKnee_to_qFlexion'],'Vars',{qLA, qKnee},'Outputs',{'qFlexion'});
matlabFunction(jacobian(sol_qFlexion(1), [qLA, qKnee])*[dqLA; dqKnee],'File',[PATH,'IK_dqLA_qKnee_to_dqFlexion'],'Vars',{qLA, qKnee, dqLA, dqKnee},'Outputs',{'dqFlexion'});



%% GRF Estimation
% syms qPitch x z
% R = @(th) [cos(th), -sin(th); sin(th), cos(th)];
% toe_pos = R(qPitch) * toe_position;
% qAll = [qPitch; qKnee; qFlexion]; 
% solution = solve(toe_pos == [x;z], qAll, 'ReturnConditions', true, 'Real', true);




