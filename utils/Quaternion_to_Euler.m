function [roll, pitch, yaw, droll, dpitch, dyaw] = IMU_to_Euler(quaternion, Angular_velocity)
% Function to compute the Euler angles (ZYX) from a given quaternion
% https://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
% https://math.stackexchange.com/questions/1288207/extrinsic-and-intrinsic-euler-angles-to-rotation-matrix-and-back


% need further refined for different quadrant
% now is using intrinsic X-Y-Z, if we use Z-Y-X in future, need modified.

q = quaternion;
dq = Angular_velocity;

R = [1 0 0; 0 cos(pi) -sin(pi); 0 sin(pi) cos(pi)]; % q is measured when z is pointing down. Move it back

q_r = q;
dq_r = dq;

q_r(2:4) = R*q_r(2:4);
dq_r = R*dq_r;

qw = q_r(1); qx = q_r(2); qy = q_r(3); qz = q_r(4);


roll = atan2(-2*(qy*qz-qw*qx), qw^2 - qx^2 -qy^2 +qz^2);
pitch = asin(2*(qw*qy+qx*qz));
yaw = atan2(-2*(qx*qy-qw*qz), qw^2 -qx^2 - qy^2 +qz^2);

dq = AngularVelocity_to_EulerRates([roll;pitch;yaw],dq_r);

droll = dq(1);
dpitch = dq(2);
dyaw = dq(3);


end