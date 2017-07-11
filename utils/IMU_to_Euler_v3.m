function [roll, pitch, yaw, droll, dpitch, dyaw] = IMU_to_Euler_v3( q,w )
% convert the quaternion angle and angular velocity to euler and euler
% rates

% need further refined for different quadrant
% now is using intrinsic X-Y-Z, if we use Z-Y-X in future, need modified.

R_fix = [1 0 0; 0 cos(pi) -sin(pi); 0 sin(pi) cos(pi)]; % q is measured when z is pointing down. Move it back

q(2:4) = R_fix*q(2:4);
w = R_fix*w;



R = Quaternion_to_Matrix(q);
% w = R^-1*w;
dR = AngularVelocity_to_dMatrix(w,R);
[roll,pitch,yaw] = Matrix_to_Euler(R);
[droll,dpitch,dyaw] = dMatrix_to_dEuler(R,dR);



end

