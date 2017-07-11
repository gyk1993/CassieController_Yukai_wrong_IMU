%SIMULATIONINITFCN Model initialization callback function.
%
% Syntax:
%   simulationInitFcn;

% Copyright 2015-2017 Mikhail S. Jones

% Clean up workspace
clear all; 
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
Data.hd = zeros(10,1);
Data.dhd = zeros(10,1);
Data.h0 = zeros(10,1);
Data.dh0 = zeros(10,1);
Data.y = zeros(10,1);
Data.dy = zeros(10,1);
Data.GRF = zeros(2,1);
Data.t0 = 0;
Data.Switch = 0;
Data.spring_force_R = zeros(2,1);
Data.spring_force_L = zeros(2,1);

Data.torso_angle = zeros(3,1);
Data.d_torso_angle = zeros(3,1);
Data.id_torso_angle = zeros(3,1);

Data.torso_position = zeros(3,1);
Data.torso_velocity = zeros(3,1);
Data.torso_velocity_fil = zeros(3,1);
Data.torso_vx = 0;
Data.torso_vy = 0;
Data.torso_vz = 0;
Data.torso_vx_fil = 0;
Data.torso_vy_fil = 0;
Data.torso_vz_fil = 0;

Data.r_foot_v = zeros(3,1);
Data.l_foot_v = zeros(3,1);

Data.com_pos = zeros(3,1);
Data.com_vel = zeros(3,1);

Data.q_abduction_R = 0;
Data.q_rotation_R = 0;
Data.q_thigh_R = 0;
Data.q_thigh_knee_R = 0;
Data.q_knee_shin_R = 0;
Data.q_thigh_shin_R = 0;
Data.q_shin_tarsus_R = 0;
Data.q_toe_R = 0;

Data.q_abduction_L = 0 ;
Data.q_rotation_L = 0;
Data.q_thigh_L = 0;
Data.q_thigh_knee_L = 0;
Data.q_knee_shin_L = 0;
Data.q_thigh_shin_L = 0;
Data.q_shin_tarsus_L = 0;
Data.q_toe_L = 0;


Data.dq_abduction_R = 0;
Data.dq_rotation_R = 0;
Data.dq_thigh_R = 0;
Data.dq_thigh_knee_R = 0;
Data.dq_knee_shin_R = 0;
Data.dq_thigh_shin_R = 0;
Data.dq_shin_tarsus_R = 0;
Data.dq_toe_R = 0;

Data.dq_abduction_L = 0 ;
Data.dq_rotation_L = 0;
Data.dq_thigh_L = 0;
Data.dq_thigh_knee_L = 0;
Data.dq_knee_shin_L = 0;
Data.dq_thigh_shin_L = 0;
Data.dq_shin_tarsus_L = 0;
Data.dq_toe_L = 0;

cassieDataBusInfo = Simulink.Bus.createObject(Data);
cassieDataBus = eval(cassieDataBusInfo.busName);

%% Initialize Controller Parameter Bus
opt = load('mat\05dms_2');

% Right Stance

R_Alpha = reshape(opt.params{1}.atime,10,6);

ControlParams.RightStance.HAlpha = R_Alpha;

ControlParams.RightStance.ct = 1/opt.params{1}.ptime(1);

% Left Stance

L_Alpha = R_Alpha;
L_Alpha(1:5,:) = R_Alpha(6:10,:);
L_Alpha(6:10,:) = R_Alpha(1:5,:);

L_Alpha([1,2,6,7],:) = -L_Alpha([1,2,6,7],:);

ControlParams.LeftStance.HAlpha = L_Alpha;

ControlParams.LeftStance.ct = 1/opt.params{1}.ptime(1);
ControlParams.Desired_Velocity = (opt.states{1}.x(1,end) - opt.states{1}.x(1,1))/(opt.tspan{1}(end) - opt.tspan{1}(1)); 

% Set initial motor positions
cassieEtherCat.setMotorPositions([...
  0; 0; 0.4983; -1.2018; -1.5979; ...
  0; 0; 0.4983; -1.2018; -1.5979]);

% Set initial pelvis position and rotation
pelvisPosition = [0; 0; 1.1];
pelvisRotation = Rotation3d().rotZYX([0; 0; 0]).getValue;

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



