/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dqLA_dqLL_FK.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t459;
  double t2154;
  double t2646;
  double t2846;
  double t2940;
  double t3244;
  double t3609;
  double t3611;
  double t3620;
  double t3630;
  double t3634;
  double t3648;
  double t3695;
  double t3722;
  double t3723;
  double t3732;
  double t3746;
  double t3754;
  double t1300;
  double t1406;
  double t3086;
  double t3426;
  double t3432;
  double t3513;
  double t3524;
  double t3555;
  double t3726;
  double t3727;
  double t3728;
  double t3635;
  double t3653;
  double t3655;
  double t3952;
  double t3956;
  double t3958;
  double t3805;
  double t2431;
  double t3460;
  double t3556;
  double t3725;
  double t3758;
  double t3759;
  double t3821;
  double t3825;
  double t3833;
  double t3841;
  double t3866;
  double t3868;
  double t3922;
  double t3926;
  double t3927;
  double t3928;
  double t3964;
  double t3970;
  double t3976;
  double t3978;
  double t4027;
  double t4030;
  double t4049;
  double t4052;
  double t4053;
  double t4056;
  double t1634;
  double t3879;
  double t4118;
  double t4119;
  double t4120;
  double t3885;
  double t4058;
  double t4061;
  double t4066;
  double t4183;
  double t4186;
  double t4190;
  double t4202;
  double t4203;
  double t4112;
  double t4231;
  double t4232;
  double t4233;
  double t4208;
  double t4214;
  double t4121;
  double t4123;
  double t4129;
  t459 = Cos(var1[0]);
  t2154 = Sin(var1[0]);
  t2646 = Cos(var2[0]);
  t2846 = -1.*t2646;
  t2940 = 1. + t2846;
  t3244 = Sin(var2[0]);
  t3609 = -1.*var2[0];
  t3611 = 0.226893 + t3609;
  t3620 = Cos(t3611);
  t3630 = -1.*t3620;
  t3634 = 1. + t3630;
  t3648 = Sin(t3611);
  t3695 = -1.*t2646*t2154;
  t3722 = -1.*t459*t3244;
  t3723 = t3695 + t3722;
  t3732 = t459*t2646;
  t3746 = -1.*t2154*t3244;
  t3754 = t3732 + t3746;
  t1300 = -1.*t459;
  t1406 = 1. + t1300;
  t3086 = -0.049*t2940;
  t3426 = -0.21*t3244;
  t3432 = 0. + t3086 + t3426;
  t3513 = -0.21*t2940;
  t3524 = 0.049*t3244;
  t3555 = 0. + t3513 + t3524;
  t3726 = 0.0184*t3634;
  t3727 = -0.7055*t3648;
  t3728 = 0. + t3726 + t3727;
  t3635 = -0.7055*t3634;
  t3653 = -0.0184*t3648;
  t3655 = 0. + t3635 + t3653;
  t3952 = t2646*t2154;
  t3956 = t459*t3244;
  t3958 = t3952 + t3956;
  t3805 = t3620*t3754;
  t2431 = -0.09*t2154;
  t3460 = t459*t3432;
  t3556 = -1.*t2154*t3555;
  t3725 = t3655*t3723;
  t3758 = t3728*t3754;
  t3759 = t3648*t3723;
  t3821 = t3759 + t3805;
  t3825 = -0.0216*t3821;
  t3833 = t3620*t3723;
  t3841 = -1.*t3648*t3754;
  t3866 = t3833 + t3841;
  t3868 = -1.1135*t3866;
  t3922 = -0.09*t1406;
  t3926 = 0.049*t2154;
  t3927 = t2154*t3432;
  t3928 = t459*t3555;
  t3964 = t3728*t3958;
  t3970 = t3655*t3754;
  t3976 = -1.*t3648*t3958;
  t3978 = t3976 + t3805;
  t4027 = -1.1135*t3978;
  t4030 = t3620*t3958;
  t4049 = t3648*t3754;
  t4052 = t4030 + t4049;
  t4053 = -0.0216*t4052;
  t4056 = 0.09 + t3922 + t3926 + t3927 + t3928 + t3964 + t3970 + t4027 + t4053;
  t1634 = -0.049*t1406;
  t3879 = 0.049 + t1634 + t2431 + t3460 + t3556 + t3725 + t3758 + t3825 + t3868;
  t4118 = -1.*t459*t2646;
  t4119 = t2154*t3244;
  t4120 = t4118 + t4119;
  t3885 = Power(t3879,2);
  t4058 = Power(t4056,2);
  t4061 = t3885 + t4058;
  t4066 = 1/Sqrt(t4061);
  t4183 = 0.049*t2646;
  t4186 = t4183 + t3426;
  t4190 = -0.21*t2646;
  t4202 = -0.049*t3244;
  t4203 = t4190 + t4202;
  t4112 = t3728*t3723;
  t4231 = 0.0184*t3620;
  t4232 = 0.7055*t3648;
  t4233 = t4231 + t4232;
  t4208 = 0.7055*t3620;
  t4214 = t4208 + t3653;
  t4121 = t3655*t4120;
  t4123 = t3620*t4120;
  t4129 = t3648*t4120;
  p_output1[0]=0.5*t4066*(2.*t4056*(t2431 + t3460 + t3556 + t3725 + t3758 + t3825 + t3868 + 0.049*t459) + 2.*t3879*(-0.049*t2154 - 1.*t2154*t3432 + t4112 + t4121 - 1.1135*(-1.*t3648*t3723 + t4123) - 0.0216*(t3833 + t4129) - 0.09*t459 - 1.*t3555*t459))*var3[0] + 0.5*t4066*(2.*t4056*(t3725 + t3758 - 0.0216*(t3759 + t3648*t3958) - 1.1135*(t3833 + t4030) + t2154*t4203 + t3958*t4214 + t3754*t4233 + t4186*t459) + 2.*t3879*(t4112 + t4121 - 1.1135*(t3805 + t4123) - 0.0216*(t4049 + t4129) - 1.*t2154*t4186 + t3754*t4214 + t3723*t4233 + t4203*t459))*var4[0];
}

static void output2(double *p_output2,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4076;
  double t4094;
  double t4111;
  double t4122;
  double t4125;
  double t4130;
  double t4219;
  double t4236;
  double t4254;
  double t4255;
  double t4258;
  double t4261;
  double t4264;
  double t4265;
  double t4267;
  double t4273;
  double t4284;
  double t4287;
  double t4080;
  double t4081;
  double t4091;
  double t4106;
  double t4126;
  double t4131;
  double t4167;
  double t4176;
  double t4178;
  double t4181;
  double t4189;
  double t4206;
  double t4260;
  double t4262;
  double t4263;
  double t4268;
  double t4269;
  double t4271;
  double t4272;
  double t4288;
  double t4289;
  double t4297;
  double t4301;
  double t4305;
  double t4308;
  double t4316;
  double t4320;
  double t4321;
  double t4322;
  double t4324;
  double t4332;
  double t4333;
  double t4335;
  double t4383;
  double t4384;
  double t4386;
  double t4325;
  double t4326;
  double t4327;
  double t4330;
  double t4336;
  double t4339;
  double t4340;
  double t4341;
  double t4342;
  double t4354;
  double t4355;
  double t4356;
  double t4357;
  double t4358;
  double t4360;
  double t4369;
  double t4378;
  double t4379;
  double t4380;
  double t4381;
  double t4382;
  double t4387;
  double t4388;
  double t4389;
  double t4390;
  double t4391;
  double t4399;
  double t4402;
  double t4403;
  double t4405;
  double t4374;
  double t4375;
  double t4376;
  double t4377;
  double t4406;
  double t4408;
  double t4417;
  double t4444;
  double t4449;
  double t4450;
  double t4452;
  double t4480;
  double t4484;
  double t4461;
  double t4462;
  double t4463;
  double t4448;
  double t4460;
  double t4476;
  double t4485;
  double t4486;
  double t4487;
  double t4501;
  double t4502;
  double t4503;
  t4076 = Cos(var1[0]);
  t4094 = Sin(var1[0]);
  t4111 = Cos(var2[0]);
  t4122 = -1.*t4111;
  t4125 = 1. + t4122;
  t4130 = Sin(var2[0]);
  t4219 = -1.*var2[0];
  t4236 = 0.226893 + t4219;
  t4254 = Cos(t4236);
  t4255 = -1.*t4254;
  t4258 = 1. + t4255;
  t4261 = Sin(t4236);
  t4264 = -1.*t4111*t4094;
  t4265 = -1.*t4076*t4130;
  t4267 = t4264 + t4265;
  t4273 = t4076*t4111;
  t4284 = -1.*t4094*t4130;
  t4287 = t4273 + t4284;
  t4080 = -1.*t4076;
  t4081 = 1. + t4080;
  t4091 = -0.049*t4081;
  t4106 = -0.09*t4094;
  t4126 = -0.049*t4125;
  t4131 = -0.21*t4130;
  t4167 = 0. + t4126 + t4131;
  t4176 = t4076*t4167;
  t4178 = -0.21*t4125;
  t4181 = 0.049*t4130;
  t4189 = 0. + t4178 + t4181;
  t4206 = -1.*t4094*t4189;
  t4260 = -0.7055*t4258;
  t4262 = -0.0184*t4261;
  t4263 = 0. + t4260 + t4262;
  t4268 = t4263*t4267;
  t4269 = 0.0184*t4258;
  t4271 = -0.7055*t4261;
  t4272 = 0. + t4269 + t4271;
  t4288 = t4272*t4287;
  t4289 = t4261*t4267;
  t4297 = t4254*t4287;
  t4301 = t4289 + t4297;
  t4305 = -0.0216*t4301;
  t4308 = t4254*t4267;
  t4316 = -1.*t4261*t4287;
  t4320 = t4308 + t4316;
  t4321 = -1.1135*t4320;
  t4322 = 0.049 + t4091 + t4106 + t4176 + t4206 + t4268 + t4288 + t4305 + t4321;
  t4324 = Power(t4322,2);
  t4332 = t4111*t4094;
  t4333 = t4076*t4130;
  t4335 = t4332 + t4333;
  t4383 = -1.*t4076*t4111;
  t4384 = t4094*t4130;
  t4386 = t4383 + t4384;
  t4325 = -0.09*t4081;
  t4326 = 0.049*t4094;
  t4327 = t4094*t4167;
  t4330 = t4076*t4189;
  t4336 = t4272*t4335;
  t4339 = t4263*t4287;
  t4340 = -1.*t4261*t4335;
  t4341 = t4340 + t4297;
  t4342 = -1.1135*t4341;
  t4354 = t4254*t4335;
  t4355 = t4261*t4287;
  t4356 = t4354 + t4355;
  t4357 = -0.0216*t4356;
  t4358 = 0.09 + t4325 + t4326 + t4327 + t4330 + t4336 + t4339 + t4342 + t4357;
  t4360 = Power(t4358,2);
  t4369 = t4324 + t4360;
  t4378 = -0.09*t4076;
  t4379 = -0.049*t4094;
  t4380 = -1.*t4094*t4167;
  t4381 = -1.*t4076*t4189;
  t4382 = t4272*t4267;
  t4387 = t4263*t4386;
  t4388 = -1.*t4261*t4267;
  t4389 = t4254*t4386;
  t4390 = t4388 + t4389;
  t4391 = -1.1135*t4390;
  t4399 = t4261*t4386;
  t4402 = t4308 + t4399;
  t4403 = -0.0216*t4402;
  t4405 = t4378 + t4379 + t4380 + t4381 + t4382 + t4387 + t4391 + t4403;
  t4374 = 1/t4369;
  t4375 = -1.*t4324*t4374;
  t4376 = 1. + t4375;
  t4377 = 1/Sqrt(t4376);
  t4406 = 1/Sqrt(t4369);
  t4408 = Power(t4369,-1.5);
  t4417 = 0.049*t4111;
  t4444 = t4417 + t4131;
  t4449 = -0.21*t4111;
  t4450 = -0.049*t4130;
  t4452 = t4449 + t4450;
  t4480 = 0.7055*t4254;
  t4484 = t4480 + t4262;
  t4461 = 0.0184*t4254;
  t4462 = 0.7055*t4261;
  t4463 = t4461 + t4462;
  t4448 = -1.*t4094*t4444;
  t4460 = t4076*t4452;
  t4476 = t4463*t4267;
  t4485 = t4484*t4287;
  t4486 = t4297 + t4389;
  t4487 = -1.1135*t4486;
  t4501 = t4355 + t4399;
  t4502 = -0.0216*t4501;
  t4503 = t4448 + t4460 + t4382 + t4476 + t4485 + t4387 + t4487 + t4502;
  p_output2[0]=t4377*(t4405*t4406 - 0.5*t4322*(2.*(0.049*t4076 + t4106 + t4176 + t4206 + t4268 + t4288 + t4305 + t4321)*t4358 + 2.*t4322*t4405)*t4408)*var3[0] + t4377*(t4406*t4503 - 0.5*t4322*t4408*(2.*t4358*(t4268 + t4288 - 0.0216*(t4289 + t4261*t4335) - 1.1135*(t4308 + t4354) + t4076*t4444 + t4094*t4452 + t4287*t4463 + t4335*t4484) + 2.*t4322*t4503))*var4[0];
}



void dqLA_dqLL_FK(double *p_output1, double *p_output2, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);
  output2(p_output2, var1, var2, var3, var4);

}
