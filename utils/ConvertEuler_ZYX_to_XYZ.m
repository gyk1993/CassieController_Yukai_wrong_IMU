function [ roll_XYZ, pitch_XYZ, yaw_XYZ ] = ConvertEuler_ZYX_to_XYZ( roll_ZYX, pitch_ZYX, yaw_ZYX )
%CONVERTEULER_XYZ_TO_ZYX Converts euler angles from the XYZ to ZYX convention
%   
% Author: Ross Hartley
%         4/25/2017
%

% Compute Rotation Matrix
Rz = [cos(yaw_ZYX), -sin(yaw_ZYX), 0; sin(yaw_ZYX), cos(yaw_ZYX), 0; 0,0,1];
Ry = [cos(pitch_ZYX), 0, sin(pitch_ZYX); 0, 1, 0; -sin(pitch_ZYX), 0, cos(pitch_ZYX)];
Rx = [1,0,0; 0, cos(roll_ZYX), -sin(roll_ZYX); 0, sin(roll_ZYX), cos(roll_ZYX)];
R = Rx*Ry*Rz;  

% Extract Euler angles in ZYX (intrinsic) convention
% https://www.geometrictools.com/Documentation/EulerAngles.pdf
roll_XYZ = atan2(R(3,2),R(3,3));
pitch_XYZ = asin(-R(3,1));
yaw_XYZ = atan2(R(2,1),R(1,1));

end

