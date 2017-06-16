%SIMULATIONINITFCN Model initialization callback function.
%
% Syntax:
%   simulationInitFcn;

% Copyright 2015-2017 Mikhail S. Jones

% Clean up workspace
clear all; clc;

% Start clock at initialization (used for computing real time performance)
initTime = tic;

% Initialize data structures and interface objects
simulationParameters = CassieSimulationParameters;
cassieParameters = CassieParameters;
cassieEtherCat = CassieEtherCat;
cassieInputs = CassieInputs;
cassieOutputs = CassieOutputs;

%% Initialize Data Bus
Data = [];
Data.t = 0;
Data.q = zeros(26,1);
Data.dq = zeros(26,1);
Data.u = zeros(10,1);
Data.stanceLeg = 0;
Data.s_sw = 0;
Data.s_st = 0;
Data.s = 0;
Data.ds = 0;
Data.ya = zeros(10,1);
Data.dya = zeros(10,1);
Data.GRF = zeros(2,1);

cassieDataBusInfo = Simulink.Bus.createObject(Data);
cassieDataBus = eval(cassieDataBusInfo.busName);

%% Initialize ControlParams Bus

Data.t = 0;
Data.q = zeros(26,1);
Data.dq = zeros(26,1);
Data.u = zeros(10,1);
Data.stanceLeg = 0;
Data.s_sw = 0;
Data.s_st = 0;
Data.s = 0;
Data.ds = 0;
Data.ya = zeros(10,1);
Data.dya = zeros(10,1);
Data.GRF = zeros(2,1);

cassieDataBusInfo = Simulink.Bus.createObject(Data);
cassieDataBus = eval(cassieDataBusInfo.busName);

%% Initialize Controller Parameter Bus
opt = load('mat\velocity_00_00_stepTime_075');
q0_opt = opt.outputs{1}.q(1,:)'; % initial state
dq0_opt = opt.outputs{1}.dq(1,:)'; % initial state

% Right Stance
q_opt = opt.outputs{1}.q';

qp = q_opt(1:3,:);
qq = q_opt(4:6,:);
qaL = q_opt([8,9,10,11,14],:);
qjL = [zeros(1,29); q_opt(13,:); zeros(1,29)];
qsL = zeros(2,29);
qaR = q_opt([16,17,18,19,22],:);
qjR = [zeros(1,29); q_opt(21,:); zeros(1,29)];
qsR = zeros(2,29);

dq_opt = opt.outputs{1}.dq';
dqp = dq_opt(1:3,:);
dqq = dq_opt(4:6,:);
dqaL = dq_opt([8,9,10,11,14],:);
dqjL = [zeros(1,29); dq_opt(13,:); zeros(1,29)];
dqsL = zeros(2,29);
dqaR = dq_opt([16,17,18,19,22],:);
dqjR = [zeros(1,29); dq_opt(21,:); zeros(1,29)];
dqsR = zeros(2,29);

q = [qp; qq; qaL; qjL; qsL; qaR; qjR; qsR];
dq = [dqp; dqq; dqaL; dqjL; dqsL; dqaR; dqjR; dqsR];

for i = 1:size(q,2)
    [ roll_ZYX, pitch_ZYX, yaw_ZYX ] = ConvertEuler_XYZ_to_ZYX( q(4,i), q(5,i), q(6,i) );
    q(4:6,i) = zeros(3,1);%[roll_ZYX, pitch_ZYX, yaw_ZYX];
end

ControlParams.RightStance.HAlpha = bezfit(linspace(0,1,29), q, 5);
u = opt.outputs{1}.u';
ControlParams.RightStance.HAlpha_u = bezfit(linspace(0,1,29), u, 5);
ControlParams.RightStance.ct = 1/mean(opt.outputs{1}.t);

% Left Stance
q_opt = opt.outputs{1}.q;
q_opt = q_opt(:,[1:6,15:22,7:14]);
q_opt(:,[2,4,6]) = q_opt(end,[2,4,6]) - (q_opt(:,[2,4,6]) - q_opt(1,[2,4,6]));
q_opt(:,[8,9,16,17]) = -q_opt(:,[8,9,16,17]);
q_opt = q_opt';

qp = q_opt(1:3,:);
qq = q_opt(4:6,:);
qaL = q_opt([8,9,10,11,14],:);
qjL = [zeros(1,29); q_opt(13,:); zeros(1,29)];
qsL = zeros(2,29);
qaR = q_opt([16,17,18,19,22],:);
qjR = [zeros(1,29); q_opt(21,:); zeros(1,29)];
qsR = zeros(2,29);

dq_opt = opt.outputs{1}.dq';
dqp = dq_opt(1:3,:);
dqq = dq_opt(4:6,:);
dqaL = dq_opt([8,9,10,11,14],:);
dqjL = [zeros(1,29); dq_opt(13,:); zeros(1,29)];
dqsL = zeros(2,29);
dqaR = dq_opt([16,17,18,19,22],:);
dqjR = [zeros(1,29); dq_opt(21,:); zeros(1,29)];
dqsR = zeros(2,29);

q = [qp; qq; qaL; qjL; qsL; qaR; qjR; qsR];
dq = [dqp; dqq; dqaL; dqjL; dqsL; dqaR; dqjR; dqsR];

for i = 1:size(q,2)
    [ roll_ZYX, pitch_ZYX, yaw_ZYX ] = ConvertEuler_XYZ_to_ZYX( q(4,i), q(5,i), q(6,i) );
    q(4:6,i) = zeros(3,1);%[roll_ZYX, pitch_ZYX, yaw_ZYX];
end

ControlParams.LeftStance.HAlpha = bezfit(linspace(0,1,29), q, 5);
u = opt.outputs{1}.u';
u = u([6:10,1:5],:); u([1,2],:) = -u([1,2],:);
ControlParams.LeftStance.HAlpha_u = bezfit(linspace(0,1,29), u, 5);
ControlParams.LeftStance.ct = 1/mean(opt.outputs{1}.t);

% Set initial motor positions
cassieEtherCat.setMotorPositions(q0_opt([8,9,10,11,14,16,17,18,19,22]));

% Set initial pelvis position and rotation
pelvisPosition = q0_opt(1:3); pelvisPosition(3) = 1;
[ roll_ZYX, pitch_ZYX, yaw_ZYX ] = ConvertEuler_XYZ_to_ZYX(q0_opt(4), q0_opt(5), q0_opt(6));
pelvisRotation = Rotation3d().rotZYX([roll_ZYX; pitch_ZYX; yaw_ZYX]).getValue;

cassieControlParamsBusInfo = Simulink.Bus.createObject(ControlParams);
cassieControlParamsBus = eval(cassieControlParamsBusInfo.busName);

%% Initialize Agility Robotics Buses

% Initialize Cassie EtherCAT bus signals for models
cassieEtherCatData = cassieEtherCat.getStructure;
cassieEtherCatBusInfo = Simulink.Bus.createObject(cassieEtherCatData);
cassieEtherCatBus = eval(cassieEtherCatBusInfo.busName);

% Initialize Cassie inputs bus signals for models
cassieInputsData = cassieInputs.getStructure;
cassieInputsBusInfo = Simulink.Bus.createObject(cassieInputsData);
cassieInputsBus = eval(cassieInputsBusInfo.busName);

% Initialize Cassie outputs bus signals for models
cassieOutputsData = cassieOutputs.getStructure;
cassieOutputsBusInfo = Simulink.Bus.createObject(cassieOutputsData);
cassieOutputsBus = eval(cassieOutputsBusInfo.busName);



