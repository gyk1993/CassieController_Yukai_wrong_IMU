/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:09 GMT-04:00
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
  double t1436;
  double t2812;
  double t2930;
  double t2948;
  double t3191;
  double t3491;
  double t3723;
  double t3724;
  double t3726;
  double t3741;
  double t3746;
  double t3802;
  double t3813;
  double t3816;
  double t3836;
  double t3860;
  double t3875;
  double t3917;
  double t1778;
  double t2075;
  double t3398;
  double t3503;
  double t3641;
  double t3643;
  double t3676;
  double t3682;
  double t3850;
  double t3857;
  double t3859;
  double t3797;
  double t3810;
  double t3811;
  double t4041;
  double t4047;
  double t4048;
  double t3926;
  double t2927;
  double t3642;
  double t3719;
  double t3837;
  double t3918;
  double t3920;
  double t3963;
  double t3965;
  double t3966;
  double t3969;
  double t3979;
  double t3985;
  double t4032;
  double t4034;
  double t4035;
  double t4037;
  double t4071;
  double t4077;
  double t4133;
  double t4144;
  double t4145;
  double t4147;
  double t4158;
  double t4166;
  double t4169;
  double t4179;
  double t2447;
  double t3987;
  double t4224;
  double t4225;
  double t4226;
  double t4031;
  double t4180;
  double t4183;
  double t4188;
  double t4289;
  double t4291;
  double t4308;
  double t4310;
  double t4311;
  double t4223;
  double t4335;
  double t4336;
  double t4352;
  double t4322;
  double t4323;
  double t4229;
  double t4234;
  double t4240;
  t1436 = Cos(var1[0]);
  t2812 = Sin(var1[0]);
  t2930 = Cos(var2[0]);
  t2948 = -1.*t2930;
  t3191 = 1. + t2948;
  t3491 = Sin(var2[0]);
  t3723 = -1.*var2[0];
  t3724 = 0.226893 + t3723;
  t3726 = Cos(t3724);
  t3741 = -1.*t3726;
  t3746 = 1. + t3741;
  t3802 = Sin(t3724);
  t3813 = -1.*t2930*t2812;
  t3816 = -1.*t1436*t3491;
  t3836 = t3813 + t3816;
  t3860 = t1436*t2930;
  t3875 = -1.*t2812*t3491;
  t3917 = t3860 + t3875;
  t1778 = -1.*t1436;
  t2075 = 1. + t1778;
  t3398 = -0.049*t3191;
  t3503 = -0.21*t3491;
  t3641 = 0. + t3398 + t3503;
  t3643 = -0.21*t3191;
  t3676 = 0.049*t3491;
  t3682 = 0. + t3643 + t3676;
  t3850 = 0.0184*t3746;
  t3857 = -0.7055*t3802;
  t3859 = 0. + t3850 + t3857;
  t3797 = -0.7055*t3746;
  t3810 = -0.0184*t3802;
  t3811 = 0. + t3797 + t3810;
  t4041 = t2930*t2812;
  t4047 = t1436*t3491;
  t4048 = t4041 + t4047;
  t3926 = t3726*t3917;
  t2927 = -0.09*t2812;
  t3642 = t1436*t3641;
  t3719 = -1.*t2812*t3682;
  t3837 = t3811*t3836;
  t3918 = t3859*t3917;
  t3920 = t3802*t3836;
  t3963 = t3920 + t3926;
  t3965 = -0.0216*t3963;
  t3966 = t3726*t3836;
  t3969 = -1.*t3802*t3917;
  t3979 = t3966 + t3969;
  t3985 = -1.1135*t3979;
  t4032 = -0.09*t2075;
  t4034 = 0.049*t2812;
  t4035 = t2812*t3641;
  t4037 = t1436*t3682;
  t4071 = t3859*t4048;
  t4077 = t3811*t3917;
  t4133 = -1.*t3802*t4048;
  t4144 = t4133 + t3926;
  t4145 = -1.1135*t4144;
  t4147 = t3726*t4048;
  t4158 = t3802*t3917;
  t4166 = t4147 + t4158;
  t4169 = -0.0216*t4166;
  t4179 = 0.09 + t4032 + t4034 + t4035 + t4037 + t4071 + t4077 + t4145 + t4169;
  t2447 = -0.049*t2075;
  t3987 = 0.049 + t2447 + t2927 + t3642 + t3719 + t3837 + t3918 + t3965 + t3985;
  t4224 = -1.*t1436*t2930;
  t4225 = t2812*t3491;
  t4226 = t4224 + t4225;
  t4031 = Power(t3987,2);
  t4180 = Power(t4179,2);
  t4183 = t4031 + t4180;
  t4188 = 1/Sqrt(t4183);
  t4289 = 0.049*t2930;
  t4291 = t4289 + t3503;
  t4308 = -0.21*t2930;
  t4310 = -0.049*t3491;
  t4311 = t4308 + t4310;
  t4223 = t3859*t3836;
  t4335 = 0.0184*t3726;
  t4336 = 0.7055*t3802;
  t4352 = t4335 + t4336;
  t4322 = 0.7055*t3726;
  t4323 = t4322 + t3810;
  t4229 = t3811*t4226;
  t4234 = t3726*t4226;
  t4240 = t3802*t4226;
  p_output1[0]=0.5*t4188*(2.*(0.049*t1436 + t2927 + t3642 + t3719 + t3837 + t3918 + t3965 + t3985)*t4179 + 2.*t3987*(-0.09*t1436 - 0.049*t2812 - 1.*t2812*t3641 - 1.*t1436*t3682 + t4223 + t4229 - 1.1135*(-1.*t3802*t3836 + t4234) - 0.0216*(t3966 + t4240)))*var3[0] + 0.5*t4188*(2.*t3987*(t4223 + t4229 - 1.1135*(t3926 + t4234) - 0.0216*(t4158 + t4240) - 1.*t2812*t4291 + t1436*t4311 + t3917*t4323 + t3836*t4352) + 2.*t4179*(t3837 + t3918 - 0.0216*(t3920 + t3802*t4048) - 1.1135*(t3966 + t4147) + t1436*t4291 + t2812*t4311 + t4048*t4323 + t3917*t4352))*var4[0];
}

static void output2(double *p_output2,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4191;
  double t4217;
  double t4219;
  double t4231;
  double t4235;
  double t4270;
  double t4333;
  double t4357;
  double t4358;
  double t4360;
  double t4362;
  double t4365;
  double t4370;
  double t4372;
  double t4373;
  double t4391;
  double t4393;
  double t4394;
  double t4193;
  double t4201;
  double t4213;
  double t4218;
  double t4238;
  double t4280;
  double t4282;
  double t4283;
  double t4286;
  double t4287;
  double t4307;
  double t4318;
  double t4363;
  double t4366;
  double t4369;
  double t4374;
  double t4375;
  double t4376;
  double t4386;
  double t4402;
  double t4404;
  double t4405;
  double t4408;
  double t4419;
  double t4425;
  double t4426;
  double t4428;
  double t4429;
  double t4430;
  double t4431;
  double t4437;
  double t4439;
  double t4440;
  double t4486;
  double t4487;
  double t4488;
  double t4432;
  double t4433;
  double t4434;
  double t4436;
  double t4442;
  double t4443;
  double t4444;
  double t4459;
  double t4460;
  double t4462;
  double t4463;
  double t4464;
  double t4465;
  double t4470;
  double t4475;
  double t4476;
  double t4481;
  double t4482;
  double t4483;
  double t4484;
  double t4485;
  double t4489;
  double t4490;
  double t4491;
  double t4500;
  double t4503;
  double t4504;
  double t4505;
  double t4506;
  double t4507;
  double t4477;
  double t4478;
  double t4479;
  double t4480;
  double t4508;
  double t4510;
  double t4548;
  double t4549;
  double t4552;
  double t4560;
  double t4561;
  double t4585;
  double t4586;
  double t4563;
  double t4576;
  double t4580;
  double t4550;
  double t4562;
  double t4584;
  double t4587;
  double t4601;
  double t4602;
  double t4603;
  double t4604;
  double t4608;
  t4191 = Cos(var1[0]);
  t4217 = Sin(var1[0]);
  t4219 = Cos(var2[0]);
  t4231 = -1.*t4219;
  t4235 = 1. + t4231;
  t4270 = Sin(var2[0]);
  t4333 = -1.*var2[0];
  t4357 = 0.226893 + t4333;
  t4358 = Cos(t4357);
  t4360 = -1.*t4358;
  t4362 = 1. + t4360;
  t4365 = Sin(t4357);
  t4370 = -1.*t4219*t4217;
  t4372 = -1.*t4191*t4270;
  t4373 = t4370 + t4372;
  t4391 = t4191*t4219;
  t4393 = -1.*t4217*t4270;
  t4394 = t4391 + t4393;
  t4193 = -1.*t4191;
  t4201 = 1. + t4193;
  t4213 = -0.049*t4201;
  t4218 = -0.09*t4217;
  t4238 = -0.049*t4235;
  t4280 = -0.21*t4270;
  t4282 = 0. + t4238 + t4280;
  t4283 = t4191*t4282;
  t4286 = -0.21*t4235;
  t4287 = 0.049*t4270;
  t4307 = 0. + t4286 + t4287;
  t4318 = -1.*t4217*t4307;
  t4363 = -0.7055*t4362;
  t4366 = -0.0184*t4365;
  t4369 = 0. + t4363 + t4366;
  t4374 = t4369*t4373;
  t4375 = 0.0184*t4362;
  t4376 = -0.7055*t4365;
  t4386 = 0. + t4375 + t4376;
  t4402 = t4386*t4394;
  t4404 = t4365*t4373;
  t4405 = t4358*t4394;
  t4408 = t4404 + t4405;
  t4419 = -0.0216*t4408;
  t4425 = t4358*t4373;
  t4426 = -1.*t4365*t4394;
  t4428 = t4425 + t4426;
  t4429 = -1.1135*t4428;
  t4430 = 0.049 + t4213 + t4218 + t4283 + t4318 + t4374 + t4402 + t4419 + t4429;
  t4431 = Power(t4430,2);
  t4437 = t4219*t4217;
  t4439 = t4191*t4270;
  t4440 = t4437 + t4439;
  t4486 = -1.*t4191*t4219;
  t4487 = t4217*t4270;
  t4488 = t4486 + t4487;
  t4432 = -0.09*t4201;
  t4433 = 0.049*t4217;
  t4434 = t4217*t4282;
  t4436 = t4191*t4307;
  t4442 = t4386*t4440;
  t4443 = t4369*t4394;
  t4444 = -1.*t4365*t4440;
  t4459 = t4444 + t4405;
  t4460 = -1.1135*t4459;
  t4462 = t4358*t4440;
  t4463 = t4365*t4394;
  t4464 = t4462 + t4463;
  t4465 = -0.0216*t4464;
  t4470 = 0.09 + t4432 + t4433 + t4434 + t4436 + t4442 + t4443 + t4460 + t4465;
  t4475 = Power(t4470,2);
  t4476 = t4431 + t4475;
  t4481 = -0.09*t4191;
  t4482 = -0.049*t4217;
  t4483 = -1.*t4217*t4282;
  t4484 = -1.*t4191*t4307;
  t4485 = t4386*t4373;
  t4489 = t4369*t4488;
  t4490 = -1.*t4365*t4373;
  t4491 = t4358*t4488;
  t4500 = t4490 + t4491;
  t4503 = -1.1135*t4500;
  t4504 = t4365*t4488;
  t4505 = t4425 + t4504;
  t4506 = -0.0216*t4505;
  t4507 = t4481 + t4482 + t4483 + t4484 + t4485 + t4489 + t4503 + t4506;
  t4477 = 1/t4476;
  t4478 = -1.*t4431*t4477;
  t4479 = 1. + t4478;
  t4480 = 1/Sqrt(t4479);
  t4508 = 1/Sqrt(t4476);
  t4510 = Power(t4476,-1.5);
  t4548 = 0.049*t4219;
  t4549 = t4548 + t4280;
  t4552 = -0.21*t4219;
  t4560 = -0.049*t4270;
  t4561 = t4552 + t4560;
  t4585 = 0.7055*t4358;
  t4586 = t4585 + t4366;
  t4563 = 0.0184*t4358;
  t4576 = 0.7055*t4365;
  t4580 = t4563 + t4576;
  t4550 = -1.*t4217*t4549;
  t4562 = t4191*t4561;
  t4584 = t4580*t4373;
  t4587 = t4586*t4394;
  t4601 = t4405 + t4491;
  t4602 = -1.1135*t4601;
  t4603 = t4463 + t4504;
  t4604 = -0.0216*t4603;
  t4608 = t4550 + t4562 + t4485 + t4584 + t4587 + t4489 + t4602 + t4604;
  p_output2[0]=t4480*(t4507*t4508 - 0.5*t4430*(2.*(0.049*t4191 + t4218 + t4283 + t4318 + t4374 + t4402 + t4419 + t4429)*t4470 + 2.*t4430*t4507)*t4510)*var3[0] + t4480*(t4508*t4608 - 0.5*t4430*t4510*(2.*t4470*(t4374 + t4402 - 0.0216*(t4404 + t4365*t4440) - 1.1135*(t4425 + t4462) + t4191*t4549 + t4217*t4561 + t4394*t4580 + t4440*t4586) + 2.*t4430*t4608))*var4[0];
}



void dqLA_dqLL_FK(double *p_output1, double *p_output2, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);
  output2(p_output2, var1, var2, var3, var4);

}
