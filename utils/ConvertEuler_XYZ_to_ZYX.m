function [ roll_ZYX, pitch_ZYX, yaw_ZYX ] = ConvertEuler_XYZ_to_ZYX( roll_XYZ, pitch_XYZ, yaw_XYZ )
%CONVERTEULER_XYZ_TO_ZYX Converts euler angles from the XYZ to ZYX convention
%   
% Author: Ross Hartley
%         4/25/2017
%

% Compute Rotation Matrix
Rz = [cos(yaw_XYZ), -sin(yaw_XYZ), 0; sin(yaw_XYZ), cos(yaw_XYZ), 0; 0,0,1];
Ry = [cos(pitch_XYZ), 0, sin(pitch_XYZ); 0, 1, 0; -sin(pitch_XYZ), 0, cos(pitch_XYZ)];
Rx = [1,0,0; 0, cos(roll_XYZ), -sin(roll_XYZ); 0, sin(roll_XYZ), cos(roll_XYZ)];
R = Rz*Ry*Rx;  

% Extract Euler angles in ZYX (intrinsic) convention
% https://www.geometrictools.com/Documentation/EulerAngles.pdf
roll_ZYX = atan2(-R(2,3),R(3,3));
pitch_ZYX = asin(R(1,3));
yaw_ZYX = atan2(-R(1,2),R(1,1));

end

