%% Script to run simulation

% Reset 
clear; restoredefaultpath; clc;

% Add paths
addpath(genpath('../'));
addpath(genpath('D:\Graduate\robots\SomePackage\Cassie Simulator 20170522')); % SimMechanics 

%% Generate Files if needed
% flat_ground_walking.controller.util.GenerateKinematics
% flat_ground_walking.controller.util.GenerateTorqueContinuity

%% Open Model 
mdl = 'cassie_sim';
open_system(mdl); % Simulation model

%% Run
sim(mdl);

