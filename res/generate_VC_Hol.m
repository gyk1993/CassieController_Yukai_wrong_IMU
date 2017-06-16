%% Setting up path
clear; close all; clc;
restoredefaultpath; matlabrc;

cur = './';

export_path = fullfile(cur, 'export');
if ~exist(export_path,'dir')
    mkdir(export_path);
end

if ~exist([export_path,'/compliant'],'dir')
    mkdir([export_path,'/compliant']);
end

if ~exist([export_path,'/compliant/vc'],'dir')
    mkdir([export_path,'/compliant/vc']);
end

if ~exist([export_path,'/compliant/hol'],'dir')
    mkdir([export_path,'/compliant/hol']);
end

addpath(fullfile(cur, 'frost'));
frost_addpath;

%% Loading model from URDF
urdf = fullfile(cur,'urdf','wdc_v3_user_torso.urdf');
model = RobotLinks(urdf);

%% Generate the Virtual Constraints
vc_list = what('+ExoSys/+VirtualConstraints');

for i = 1:length(vc_list.m)
    [pathstr, name, ext] = fileparts(vc_list.m{i});
    vc_func = str2func(['ExoSys.VirtualConstraints.', name]);
    
    vc = vc_func(model);
    
    Jd1ya_exp = jacobian(vc.ActualOutput, model.States.x);
    Jd1ya_func = SymFunction(['Jd1ya_', vc.Name, '_', model.Name], Jd1ya_exp, {model.States.x});
    Jd1ya_func.export([export_path,'/compliant/vc'], 'ForceExport', true);
    Jd1ya_func.export([export_path,'/compliant/vc'], 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
    
    vc.export([export_path,'/compliant/vc'], 'ForceExport', true);
    vc.export([export_path,'/compliant/vc'], 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
end

current_dir = pwd;
cd([export_path,'/compliant/vc']);
!ren *.cc *.c
!ren *.hh *.h
cd(current_dir);

%% Generate the Holonomic Constraints

model.HolonomicConstraints.qfixed.export([export_path,'/compliant/hol'], 'ForceExport', true);
model.HolonomicConstraints.qfixed.export([export_path,'/compliant/hol'], 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);

hol_list = what('+ExoSys/+HolonomicConstraints');

for i = 1:length(hol_list.m)
    [pathstr, name, ext] = fileparts(hol_list.m{i});
    hol_func = str2func(['ExoSys.HolonomicConstraints.', name]);
    
    hol = hol_func(model);
    hol.export([export_path,'/compliant/hol'], 'ForceExport', true);
    hol.export([export_path,'/compliant/hol'], 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
end

current_dir = pwd;
cd([export_path,'/compliant/hol']);
!ren *.cc *.c
!ren *.hh *.h
cd(current_dir);

