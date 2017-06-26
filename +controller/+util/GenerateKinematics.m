%% Generates Forward and Inverse Kinematics for control
PATH = '+controller/+kin/';

%% Load urdf model and generate kinematics

% Set FROST path
FROST_PATH = 'D:\Graduate\robots\SomePackage\frost';
addpath(FROST_PATH)
frost_addpath;

% Load model
cassie = CASSIE('urdf/cassie.urdf');
% cassie.ExportKinematics(PATH);

% Export Toe Height and Jacobians
X = SymVariable('x',[22,1]);
pL = cassie.ContactPoints.LeftToeBottom.computeCartesianPosition;
pR = cassie.ContactPoints.RightToeBottom.computeCartesianPosition;

LeftToe = SymFunction('LeftToeBottom',pL,X);
RightToe = SymFunction('RightToeBottom',pR,X);

J_pL = jacobian(pL,X);
J_pR = jacobian(pR,X);

J_LeftToe = SymFunction('J_LeftToeBottom', J_pL, X);
J_RightToe = SymFunction('J_RightToeBottom', J_pR, X);

LeftToe.export(PATH, 'ForceExport', true);
J_LeftToe.export(PATH, 'ForceExport', true);
RightToe.export(PATH, 'ForceExport', true);
J_RightToe.export(PATH, 'ForceExport', true);

% Export Toe Height and Jacobians ( at toe joint)
l_foot_frame = cassie.Joints(getJointIndices(cassie, 'toe_joint_left'));
r_foot_frame = cassie.Joints(getJointIndices(cassie, 'toe_joint_right'));

X = SymVariable('x',[22,1]);
pL = l_foot_frame.computeCartesianPosition;
pR = r_foot_frame.computeCartesianPosition;

LeftToe = SymFunction('LeftToeJoint',pL,X);
RightToe = SymFunction('RightToeJoint',pR,X);


J_pL = jacobian(pL,X);
J_pR = jacobian(pR,X);

J_LeftToe = SymFunction('J_LeftToeJoint', J_pL, X);
J_RightToe = SymFunction('J_RightToeJoint', J_pR, X);

LeftToe.export(PATH, 'ForceExport', true);
J_LeftToe.export(PATH, 'ForceExport', true);
RightToe.export(PATH, 'ForceExport', true);
J_RightToe.export(PATH, 'ForceExport', true);

%% Forward Kinemtics for output control

toePos = cassie.Joints(14).computeCartesianPosition - cassie.Joints(9).computeCartesianPosition;
toePos = subs(toePos, cassie.States.x([1:6,7:9,12]),zeros(10,1));
toePos = subs(toePos, cassie.States.x(13), -cassie.States.x(11) + deg2rad(13));

qLL = sqrt(toePos(1).^2 + toePos(3).^2);
qLA = asin(toePos(1)./qLL);
dqLL = jacobian(qLL, cassie.States.x)*cassie.States.dx;
dqLA = jacobian(qLA, cassie.States.x)*cassie.States.dx;
export(qLL, qLA, 'File', [PATH, 'qLA_qLL_FK'], 'Vars', {SymVariable(cassie.States.x(10)), SymVariable(cassie.States.x(11))}, 'ForceExport', true);
export(qLL, qLA, 'File', [PATH,'qLA_qLL_FK'], 'Vars', {SymVariable(cassie.States.x(10)), SymVariable(cassie.States.x(11))}, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);

export(dqLL, dqLA, 'File', [PATH,'dqLA_dqLL_FK'], 'Vars', {SymVariable(cassie.States.x(10)), SymVariable(cassie.States.x(11)), SymVariable(cassie.States.dx(10)), SymVariable(cassie.States.dx(11))}, 'ForceExport', true);
export(dqLL, dqLA, 'File', [PATH,'dqLA_dqLL_FK'], 'Vars', {SymVariable(cassie.States.x(10)), SymVariable(cassie.States.x(11)), SymVariable(cassie.States.dx(10)), SymVariable(cassie.States.dx(11))}, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);



%% Inverse Kinematics for output control

% Solve for qKnee
qLL = SymVariable('qLL',[1,1]);
dqLL = SymVariable('dqLL', [1,1]);
expr = tovector(SymExpression([char(qLL.^2 - (toePos(1).^2 + toePos(3).^2)), '==0']));
vars = SymVariable('x$11$1');
qKnee = eval_math_fun('Values@First', eval_math_fun('Solve', {expr,vars}));
export(qKnee, 'File', [PATH, 'qKnee_IK'], 'Vars', {qLL}, 'ForceExport', true);
export(qKnee, 'File', [PATH, 'qKnee_IK'], 'Vars', {qLL}, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);

% Solve for qFlexion
qLA = SymVariable('qLA',[1,1]);
dqLA = SymVariable('dqLA',[1,1]);
expr = tovector(SymExpression([char(sin(qLA) - toePos(1)./qLL), '==0']));
vars = SymExpression('x$10$1');
qFlexion1 = eval_math_fun('Values@Part',{eval_math_fun('Solve',{expr,vars}), '1'});
qFlexion2 = eval_math_fun('Values@Part',{eval_math_fun('Solve',{expr,vars}), '2'});
qFlexion3 = eval_math_fun('Values@Part',{eval_math_fun('Solve',{expr,vars}), '3'});
qFlexion4 = eval_math_fun('Values@Part',{eval_math_fun('Solve',{expr,vars}), '4'});

qFlexion1 = subs(qFlexion1, cassie.States.x(11), qKnee);
qFlexion2 = subs(qFlexion2, cassie.States.x(11), qKnee);
qFlexion3 = subs(qFlexion3, cassie.States.x(11), qKnee);
qFlexion4 = subs(qFlexion4, cassie.States.x(11), qKnee);

export(qFlexion1, 'File', [PATH,'qFlexion_IK1'], 'Vars', {qLA, qLL}, 'ForceExport', true);
export(qFlexion2, 'File', [PATH,'qFlexion_IK2'], 'Vars', {qLA, qLL}, 'ForceExport', true);
export(qFlexion3, 'File', [PATH,'qFlexion_IK3'], 'Vars', {qLA, qLL}, 'ForceExport', true);
export(qFlexion4, 'File', [PATH,'qFlexion_IK4'], 'Vars', {qLA, qLL}, 'ForceExport', true);

% Solve for dqKnee
dqKnee = jacobian(qKnee, qLL)*dqLL;
export(dqKnee, 'File', [PATH,'dqKnee_IK'], 'Vars', {qLL, dqLL}, 'ForceExport', true);
export(dqKnee, 'File', [PATH,'dqKnee_IK'], 'Vars', {qLL, dqLL}, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);

% Solve for dqFlexion
dqFlexion1 = jacobian(qFlexion1, [qLA, qLL])*[dqLA; dqLL];
dqFlexion2 = jacobian(qFlexion2, [qLA, qLL])*[dqLA; dqLL];
dqFlexion3 = jacobian(qFlexion3, [qLA, qLL])*[dqLA; dqLL];
dqFlexion4 = jacobian(qFlexion4, [qLA, qLL])*[dqLA; dqLL];

export(dqFlexion1, 'File', [PATH,'dqFlexion_IK1'], 'Vars', {qLA, qLL, dqLA, dqLL}, 'ForceExport', true);
export(dqFlexion2, 'File', [PATH,'dqFlexion_IK2'], 'Vars', {qLA, qLL, dqLA, dqLL}, 'ForceExport', true);
export(dqFlexion3, 'File', [PATH,'dqFlexion_IK3'], 'Vars', {qLA, qLL, dqLA, dqLL}, 'ForceExport', true);
export(dqFlexion4, 'File', [PATH,'dqFlexion_IK4'], 'Vars', {qLA, qLL, dqLA, dqLL}, 'ForceExport', true);
%% Modify files to work in simulink

current_dir = pwd;
cd(PATH);
!ren *.cc *.c
!ren *.hh *.h
cd(current_dir);


