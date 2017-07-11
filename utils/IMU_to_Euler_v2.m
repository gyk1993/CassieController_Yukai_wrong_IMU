function [roll, pitch, yaw, droll, dpitch, dyaw] = Quaternion_to_Euler(q, dq)
% Function to compute the Euler angles (ZYX) from a given quaternion
% https://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
% https://math.stackexchange.com/questions/1288207/extrinsic-and-intrinsic-euler-angles-to-rotation-matrix-and-back


% need further refined for different quadrant
% now is using intrinsic X-Y-Z, if we use Z-Y-X in future, need modified.

R = [1 0 0; 0 cos(pi) -sin(pi); 0 sin(pi) cos(pi)]; % q is measured when z is pointing down. Move it back

q_r = q;
dq_r = dq;

q_r(2:4) = R*q_r(2:4);
dq_r(2:4) = R*q_r(2:4); %% already wrong here, should be dq_r

qw = q_r(1); qx = q_r(2); qy = q_r(3); qz = q_r(4);
dqw = dq_r(1); dqx = dq_r(2); dqy = dq_r(3); dqz = dq_r(4);

roll = atan2(-2*(qy*qz-qw*qx), qw^2 - qx^2 -qy^2 +qz^2);
pitch = asin(2*(qw*qy+qx*qz));
yaw = atan2(-2*(qx*qy-qw*qz), qw^2 -qx^2 - qy^2 +qz^2);

droll = (2*(dqx*qw^3 - dqw*qw^2*qx - dqz*qw^2*qy - dqy*qw^2*qz + dqx*qw*qx^2 + 2*dqy*qw*qx*qy - 2*dqz*qw*qx*qz - dqx*qw*qy^2 + 2*dqw*qw*qy*qz + dqx*qw*qz^2 - dqw*qx^3 + dqz*qx^2*qy + dqy*qx^2*qz - dqw*qx*qy^2 - 2*dqx*qx*qy*qz + dqw*qx*qz^2 + dqz*qy^3 - dqy*qy^2*qz + dqz*qy*qz^2 - dqy*qz^3))/(qw^4 + 2*qw^2*qx^2 - 2*qw^2*qy^2 + 2*qw^2*qz^2 - 8*qw*qx*qy*qz + qx^4 + 2*qx^2*qy^2 - 2*qx^2*qz^2 + qy^4 + 2*qy^2*qz^2 + qz^4);

dpitch = (2*dqy*qw + 2*dqz*qx + 2*dqw*qy + 2*dqx*qz)/(1 - (2*qw*qy + 2*qx*qz)^2)^(1/2);

dyaw = -(2*(- dqz*qw^3 + dqy*qw^2*qx + dqx*qw^2*qy + dqw*qw^2*qz + dqz*qw*qx^2 - 2*dqw*qw*qx*qy - 2*dqx*qw*qx*qz + dqz*qw*qy^2 - 2*dqy*qw*qy*qz + dqz*qw*qz^2 - dqy*qx^3 + dqx*qx^2*qy + dqw*qx^2*qz + dqy*qx*qy^2 - 2*dqz*qx*qy*qz + dqy*qx*qz^2 - dqx*qy^3 + dqw*qy^2*qz + dqx*qy*qz^2 - dqw*qz^3))/(qw^4 - 2*qw^2*qx^2 - 2*qw^2*qy^2 + 6*qw^2*qz^2 - 8*qw*qx*qy*qz + qx^4 + 6*qx^2*qy^2 - 2*qx^2*qz^2 + qy^4 - 2*qy^2*qz^2 + qz^4);
end