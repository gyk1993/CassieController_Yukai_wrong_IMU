

syms qw qx qy qz real
syms dqw dqx dqy dqz real

q = [qw;qx;qy;qz];
dq = [dqw;dqx;dqy;dqz];







roll = atan2(-2*(qy*qz-qw*qx), qw^2 - qx^2 -qy^2 +qz^2);
pitch = asin(2*(qw*qy+qx*qz));
yaw = atan2(-2*(qx*qy-qw*qz), qw^2 -qx^2 - qy^2 +qz^2);





droll = jacobian(roll,q)*dq;
dpitch = jacobian(pitch,q)*dq;
dyaw = jacobian(yaw,q)*dq;

droll = simplify(droll)
dpitch = simplify(dpitch)
dyaw = simplify(dyaw)