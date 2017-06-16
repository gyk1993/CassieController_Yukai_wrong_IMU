function [roll, pitch, yaw] = Quaternion_to_Euler(q)
% Function to compute the Euler angles (ZYX) from a given quaternion
% https://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
qw = q(1); qx = q(2); qy = q(3); qz = q(4);
roll = atan2(-2.*(qx*qz - qw*qy), qw^2 - qx^2 - qy^2 + qz^2);
pitch = asin(2.*(qy*qz + qw*qx));
yaw = atan2(-2.*(qx*qy - qw*qz),  qw^2 - qx^2 + qy^2 - qz^2);
end