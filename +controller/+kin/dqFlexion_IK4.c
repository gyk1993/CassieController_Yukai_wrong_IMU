/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:13:02 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1007;
  double t1010;
  double t1634;
  double t1665;
  double t1734;
  double t1742;
  double t2148;
  double t2308;
  double t2329;
  double t3653;
  double t3727;
  double t3728;
  double t3805;
  double t3821;
  double t3825;
  double t3833;
  double t3732;
  double t3922;
  double t3928;
  double t4030;
  double t4121;
  double t4126;
  double t4129;
  double t4178;
  double t4190;
  double t4202;
  double t4203;
  double t4214;
  double t4232;
  double t3608;
  double t3726;
  double t3758;
  double t3759;
  double t3866;
  double t3868;
  double t3879;
  double t3885;
  double t3926;
  double t3927;
  double t3956;
  double t3964;
  double t3970;
  double t4027;
  double t4052;
  double t4061;
  double t4066;
  double t4233;
  double t4263;
  double t4268;
  double t4269;
  double t4271;
  double t4272;
  double t4273;
  double t4288;
  double t4289;
  double t4297;
  double t4301;
  double t4305;
  double t4308;
  double t4320;
  double t4321;
  double t4325;
  double t4330;
  double t4332;
  double t4333;
  double t4336;
  double t4339;
  double t4341;
  double t4342;
  double t4354;
  double t4357;
  double t4358;
  double t4360;
  double t4369;
  double t4378;
  double t4379;
  double t4382;
  double t4112;
  double t4412;
  double t4413;
  double t4415;
  double t4416;
  double t4417;
  double t4449;
  double t4450;
  double t4452;
  double t4461;
  double t4460;
  double t4462;
  double t4463;
  double t4476;
  double t4387;
  double t4487;
  double t4501;
  double t4502;
  double t4504;
  double t4508;
  double t4509;
  double t4510;
  double t4511;
  double t4530;
  double t4391;
  double t4399;
  double t4403;
  double t4406;
  double t4407;
  double t4408;
  double t4409;
  double t4410;
  t1007 = Power(var2[0],2);
  t1010 = 7.389631520540365e45*t1007;
  t1634 = 7.196137048348655e88*t1007;
  t1665 = Power(var2[0],4);
  t1734 = -6.78756814823791e88*t1665;
  t1742 = -6.096939283359201e85 + t1634 + t1734;
  t2148 = Sqrt(t1742);
  t2308 = -1.*t2148;
  t2329 = -3.9172204239607165e45 + t1010 + t2308;
  t3653 = Power(t2329,2);
  t3727 = -6.529726269561443e-92*t3653;
  t3728 = 1. + t3727;
  t3805 = 2.5553329077757057e-46*t2329;
  t3821 = ArcCos(t3805);
  t3825 = 0.226893 + t3821;
  t3833 = Cos(t3825);
  t3732 = Sqrt(t3728);
  t3922 = Power(t3833,2);
  t3928 = Sin(t3825);
  t4030 = Power(t3928,2);
  t4121 = Cos(var1[0]);
  t4126 = -3.444588759681651e-39*t2329;
  t4129 = 9.91e7*t3732;
  t4178 = 2.0442663262205644e-39*t2329*t3833;
  t4190 = 8.16e7*t3732*t3833;
  t4202 = -2.085151652744976e-38*t2329*t3928;
  t4203 = 8.e6*t3732*t3928;
  t4214 = t4126 + t4129 + t4178 + t4190 + t4202 + t4203;
  t4232 = Sin(var1[0]);
  t3608 = 3.038801893926869e-39*t2329;
  t3726 = 1.6328430054426058e-84*t3653;
  t3758 = 1.6176e6*t3732;
  t3759 = 2.5006301e7*t3728;
  t3866 = 2.502181983293971e-39*t2329*t3833;
  t3868 = 2.6049428790737635e-84*t3653*t3833;
  t3879 = -960000.*t3732*t3833;
  t3885 = 3.98936e7*t3728*t3833;
  t3926 = 1.0974119157675743e-84*t3653*t3922;
  t3927 = 1.68064e7*t3728*t3922;
  t3956 = 2.4531195914646776e-40*t2329*t3928;
  t3964 = 6.179628465892636e-85*t3653*t3928;
  t3970 = 9.792e6*t3732*t3928;
  t4027 = 9.46384e6*t3728*t3928;
  t4052 = 1.0974119157675743e-84*t3653*t4030;
  t4061 = 1.68064e7*t3728*t4030;
  t4066 = 1.44e6 + t3608 + t3726 + t3758 + t3759 + t3866 + t3868 + t3879 + t3885 + t3926 + t3927 + t3956 + t3964 + t3970 + t4027 + t4052 + t4061;
  t4233 = Power(t4214,2);
  t4263 = Power(t4232,2);
  t4268 = t1007*t4263*t4233;
  t4269 = -3.038801893926869e-39*t2329;
  t4271 = -1.6031800261342928e-84*t3653;
  t4272 = -1.6176e6*t3732;
  t4273 = -1.706793730422258e-39*t2329*t3732;
  t4288 = -454276.*t3728;
  t4289 = -2.502181983293971e-39*t2329*t3833;
  t4297 = -2.640151163119239e-84*t3653*t3833;
  t4301 = 960000.*t3732*t3833;
  t4305 = -3.92458249307824e-40*t2329*t3732*t3833;
  t4308 = 539200.*t3728*t3833;
  t4320 = -1.086964353736276e-84*t3653*t3922;
  t4321 = 8.340606610979903e-40*t2329*t3732*t3922;
  t4325 = -160000.*t3728*t3922;
  t4330 = 1.e8*t1007*t4263;
  t4332 = -2.4531195914646776e-40*t2329*t3928;
  t4333 = -2.5883834932541557e-85*t3653*t3928;
  t4336 = -9.792e6*t3732*t3928;
  t4339 = -1.0469709989738621e-38*t2329*t3732*t3928;
  t4341 = -5.49984e6*t3728*t3928;
  t4342 = -2.131302654384855e-85*t3653*t3833*t3928;
  t4354 = -8.425648090150679e-39*t2329*t3732*t3833*t3928;
  t4357 = 3.264e6*t3728*t3833*t3928;
  t4358 = -1.0447562031298307e-86*t3653*t4030;
  t4360 = -8.340606610979903e-40*t2329*t3732*t4030;
  t4369 = -1.66464e7*t3728*t4030;
  t4378 = -1.44e6 + t4269 + t4271 + t4272 + t4273 + t4288 + t4289 + t4297 + t4301 + t4305 + t4308 + t4320 + t4321 + t4325 + t4330 + t4332 + t4333 + t4336 + t4339 + t4341 + t4342 + t4354 + t4357 + t4358 + t4360 + t4369;
  t4379 = -4.*t4378*t4066;
  t4382 = t4268 + t4379;
  t4112 = 1/t4066;
  t4412 = 1.477926304108073e46*var2[0];
  t4413 = 1.439227409669731e89*var2[0];
  t4415 = Power(var2[0],3);
  t4416 = -2.715027259295164e89*t4415;
  t4417 = t4413 + t4416;
  t4449 = 1/Sqrt(t1742);
  t4450 = -0.5*t4417*t4449;
  t4452 = t4412 + t4450;
  t4461 = 1/Sqrt(t3728);
  t4460 = -3.444588759681651e-39*t4452;
  t4462 = -6.47095873313539e-84*t4452*t2329*t4461;
  t4463 = 9.1438991302582e-100*t4452*t2329*t4461*t3833;
  t4476 = 0. + t4460 + t4462 + t4463;
  t4387 = 1/Sqrt(t4382);
  t4487 = 3.038801893926869e-39*t4452;
  t4501 = -1.056248521364259e-85*t4452*t2329*t4461;
  t4502 = -7.143671195514219e-102*t4452*t2329*t4461*t3833;
  t4504 = -1.5791007976722952e-130*t4452*t3653*t4461*t3833;
  t4508 = -2.4183261785924035e-39*t4452*t3732*t3833;
  t4509 = 1.142987391282275e-100*t4452*t2329*t4461*t3928;
  t4510 = 6.656496261773179e-130*t4452*t3653*t4461*t3928;
  t4511 = 1.0194142888964089e-38*t4452*t3732*t3928;
  t4530 = 0. + t4487 + t4501 + t4502 + t4504 + t4508 + t4509 + t4510 + t4511;
  t4391 = Power(t4066,-2);
  t4399 = -1.*var2[0]*t4232*t4214;
  t4403 = Sqrt(t4382);
  t4406 = t4399 + t4403;
  t4407 = Power(t4406,2);
  t4408 = -0.25*t4391*t4407;
  t4409 = 1. + t4408;
  t4410 = 1/Sqrt(t4409);
  p_output1[0]=-0.5*t4112*t4410*(0.5*(-8.e8*t1007*t4066*t4121*t4232 + 2.*t1007*t4121*t4232*t4233)*t4387 - 1.*t4121*t4214*var2[0])*var3[0] - 1.*t4410*(-0.5*t4391*t4406*t4530 + 0.5*t4112*(-1.*t4214*t4232 - 1.*t4232*t4476*var2[0] + 0.5*t4387*(2.*t1007*t4214*t4263*t4476 - 4.*t4378*t4530 + 2.*t4233*t4263*var2[0] - 4.*t4066*(0. - 3.038801893926869e-39*t4452 - 3.1470340936519598e-84*t2329*t4452 - 1.706793730422258e-39*t3732*t4452 - 2.6753594471647136e-84*t2329*t3833*t4452 + 1.0129339646422898e-39*t3732*t3833*t4452 + 1.0028614793843246e-85*t2329*t3928*t4452 - 1.0331926439351355e-38*t3732*t3928*t4452 + 1.056248521364259e-85*t2329*t4452*t4461 + 1.114489585826099e-130*t3653*t4452*t4461 + 7.143671195514219e-102*t2329*t3833*t4452*t4461 + 9.176826458467173e-131*t3653*t3833*t4452*t4461 - 1.142987391282275e-100*t2329*t3928*t4452*t4461 + 8.996888684771729e-132*t3653*t3928*t4452*t4461 - 8.008332380732404e-146*t3653*t3833*t3928*t4452*t4461 + 2.e8*t4263*var2[0]))))*var4[0];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dqFlexion_IK4.hh"

namespace SymExpression
{

void dqFlexion_IK4_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
