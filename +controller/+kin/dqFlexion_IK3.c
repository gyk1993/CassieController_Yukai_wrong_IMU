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
  double t946;
  double t1007;
  double t1010;
  double t1634;
  double t1665;
  double t1734;
  double t1742;
  double t2148;
  double t2308;
  double t3608;
  double t3655;
  double t3725;
  double t3732;
  double t3758;
  double t3759;
  double t3805;
  double t3726;
  double t3868;
  double t3922;
  double t3964;
  double t4058;
  double t4061;
  double t4066;
  double t4112;
  double t4121;
  double t4126;
  double t4129;
  double t4176;
  double t4181;
  double t2329;
  double t3653;
  double t3727;
  double t3728;
  double t3821;
  double t3825;
  double t3833;
  double t3866;
  double t3879;
  double t3885;
  double t3926;
  double t3927;
  double t3928;
  double t3956;
  double t3970;
  double t4027;
  double t4030;
  double t4183;
  double t4208;
  double t4214;
  double t4231;
  double t4232;
  double t4233;
  double t4236;
  double t4260;
  double t4262;
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
  double t4052;
  double t4390;
  double t4391;
  double t4399;
  double t4403;
  double t4406;
  double t4407;
  double t4408;
  double t4409;
  double t4411;
  double t4410;
  double t4412;
  double t4413;
  double t4414;
  double t4354;
  double t4450;
  double t4452;
  double t4460;
  double t4461;
  double t4462;
  double t4463;
  double t4476;
  double t4480;
  double t4484;
  double t4360;
  double t4369;
  double t4378;
  double t4379;
  double t4382;
  double t4384;
  double t4386;
  double t4387;
  t946 = Power(var2[0],2);
  t1007 = 7.389631520540365e45*t946;
  t1010 = 7.196137048348655e88*t946;
  t1634 = Power(var2[0],4);
  t1665 = -6.78756814823791e88*t1634;
  t1734 = -6.096939283359201e85 + t1010 + t1665;
  t1742 = Sqrt(t1734);
  t2148 = -1.*t1742;
  t2308 = -3.9172204239607165e45 + t1007 + t2148;
  t3608 = Power(t2308,2);
  t3655 = -6.529726269561443e-92*t3608;
  t3725 = 1. + t3655;
  t3732 = 2.5553329077757057e-46*t2308;
  t3758 = ArcCos(t3732);
  t3759 = 0.226893 + t3758;
  t3805 = Cos(t3759);
  t3726 = Sqrt(t3725);
  t3868 = Power(t3805,2);
  t3922 = Sin(t3759);
  t3964 = Power(t3922,2);
  t4058 = Cos(var1[0]);
  t4061 = -3.444588759681651e-39*t2308;
  t4066 = 9.91e7*t3726;
  t4112 = 2.0442663262205644e-39*t2308*t3805;
  t4121 = 8.16e7*t3726*t3805;
  t4126 = -2.085151652744976e-38*t2308*t3922;
  t4129 = 8.e6*t3726*t3922;
  t4176 = t4061 + t4066 + t4112 + t4121 + t4126 + t4129;
  t4181 = Sin(var1[0]);
  t2329 = 3.038801893926869e-39*t2308;
  t3653 = 1.6328430054426058e-84*t3608;
  t3727 = 1.6176e6*t3726;
  t3728 = 2.5006301e7*t3725;
  t3821 = 2.502181983293971e-39*t2308*t3805;
  t3825 = 2.6049428790737635e-84*t3608*t3805;
  t3833 = -960000.*t3726*t3805;
  t3866 = 3.98936e7*t3725*t3805;
  t3879 = 1.0974119157675743e-84*t3608*t3868;
  t3885 = 1.68064e7*t3725*t3868;
  t3926 = 2.4531195914646776e-40*t2308*t3922;
  t3927 = 6.179628465892636e-85*t3608*t3922;
  t3928 = 9.792e6*t3726*t3922;
  t3956 = 9.46384e6*t3725*t3922;
  t3970 = 1.0974119157675743e-84*t3608*t3964;
  t4027 = 1.68064e7*t3725*t3964;
  t4030 = 1.44e6 + t2329 + t3653 + t3727 + t3728 + t3821 + t3825 + t3833 + t3866 + t3879 + t3885 + t3926 + t3927 + t3928 + t3956 + t3970 + t4027;
  t4183 = Power(t4176,2);
  t4208 = Power(t4181,2);
  t4214 = t946*t4208*t4183;
  t4231 = -3.038801893926869e-39*t2308;
  t4232 = -1.6031800261342928e-84*t3608;
  t4233 = -1.6176e6*t3726;
  t4236 = -1.706793730422258e-39*t2308*t3726;
  t4260 = -454276.*t3725;
  t4262 = -2.502181983293971e-39*t2308*t3805;
  t4263 = -2.640151163119239e-84*t3608*t3805;
  t4268 = 960000.*t3726*t3805;
  t4269 = -3.92458249307824e-40*t2308*t3726*t3805;
  t4271 = 539200.*t3725*t3805;
  t4272 = -1.086964353736276e-84*t3608*t3868;
  t4273 = 8.340606610979903e-40*t2308*t3726*t3868;
  t4288 = -160000.*t3725*t3868;
  t4289 = 1.e8*t946*t4208;
  t4297 = -2.4531195914646776e-40*t2308*t3922;
  t4301 = -2.5883834932541557e-85*t3608*t3922;
  t4305 = -9.792e6*t3726*t3922;
  t4308 = -1.0469709989738621e-38*t2308*t3726*t3922;
  t4320 = -5.49984e6*t3725*t3922;
  t4321 = -2.131302654384855e-85*t3608*t3805*t3922;
  t4325 = -8.425648090150679e-39*t2308*t3726*t3805*t3922;
  t4330 = 3.264e6*t3725*t3805*t3922;
  t4332 = -1.0447562031298307e-86*t3608*t3964;
  t4333 = -8.340606610979903e-40*t2308*t3726*t3964;
  t4336 = -1.66464e7*t3725*t3964;
  t4339 = -1.44e6 + t4231 + t4232 + t4233 + t4236 + t4260 + t4262 + t4263 + t4268 + t4269 + t4271 + t4272 + t4273 + t4288 + t4289 + t4297 + t4301 + t4305 + t4308 + t4320 + t4321 + t4325 + t4330 + t4332 + t4333 + t4336;
  t4341 = -4.*t4339*t4030;
  t4342 = t4214 + t4341;
  t4052 = 1/t4030;
  t4390 = 1.477926304108073e46*var2[0];
  t4391 = 1.439227409669731e89*var2[0];
  t4399 = Power(var2[0],3);
  t4403 = -2.715027259295164e89*t4399;
  t4406 = t4391 + t4403;
  t4407 = 1/Sqrt(t1734);
  t4408 = -0.5*t4406*t4407;
  t4409 = t4390 + t4408;
  t4411 = 1/Sqrt(t3725);
  t4410 = -3.444588759681651e-39*t4409;
  t4412 = -6.47095873313539e-84*t4409*t2308*t4411;
  t4413 = 9.1438991302582e-100*t4409*t2308*t4411*t3805;
  t4414 = 0. + t4410 + t4412 + t4413;
  t4354 = 1/Sqrt(t4342);
  t4450 = 3.038801893926869e-39*t4409;
  t4452 = -1.056248521364259e-85*t4409*t2308*t4411;
  t4460 = -7.143671195514219e-102*t4409*t2308*t4411*t3805;
  t4461 = -1.5791007976722952e-130*t4409*t3608*t4411*t3805;
  t4462 = -2.4183261785924035e-39*t4409*t3726*t3805;
  t4463 = 1.142987391282275e-100*t4409*t2308*t4411*t3922;
  t4476 = 6.656496261773179e-130*t4409*t3608*t4411*t3922;
  t4480 = 1.0194142888964089e-38*t4409*t3726*t3922;
  t4484 = 0. + t4450 + t4452 + t4460 + t4461 + t4462 + t4463 + t4476 + t4480;
  t4360 = Power(t4030,-2);
  t4369 = -1.*var2[0]*t4181*t4176;
  t4378 = Sqrt(t4342);
  t4379 = t4369 + t4378;
  t4382 = Power(t4379,2);
  t4384 = -0.25*t4360*t4382;
  t4386 = 1. + t4384;
  t4387 = 1/Sqrt(t4386);
  p_output1[0]=0.5*t4052*t4387*(0.5*t4354*(-8.e8*t4030*t4058*t4181*t946 + 2.*t4058*t4181*t4183*t946) - 1.*t4058*t4176*var2[0])*var3[0] + t4387*(-0.5*t4360*t4379*t4484 + 0.5*t4052*(-1.*t4176*t4181 - 1.*t4181*t4414*var2[0] + 0.5*t4354*(-4.*t4339*t4484 + 2.*t4176*t4208*t4414*t946 + 2.*t4183*t4208*var2[0] - 4.*t4030*(0. - 3.038801893926869e-39*t4409 - 3.1470340936519598e-84*t2308*t4409 - 1.706793730422258e-39*t3726*t4409 - 2.6753594471647136e-84*t2308*t3805*t4409 + 1.0129339646422898e-39*t3726*t3805*t4409 + 1.0028614793843246e-85*t2308*t3922*t4409 - 1.0331926439351355e-38*t3726*t3922*t4409 + 1.056248521364259e-85*t2308*t4409*t4411 + 1.114489585826099e-130*t3608*t4409*t4411 + 7.143671195514219e-102*t2308*t3805*t4409*t4411 + 9.176826458467173e-131*t3608*t3805*t4409*t4411 - 1.142987391282275e-100*t2308*t3922*t4409*t4411 + 8.996888684771729e-132*t3608*t3922*t4409*t4411 - 8.008332380732404e-146*t3608*t3805*t3922*t4409*t4411 + 2.e8*t4208*var2[0]))))*var4[0];
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

#include "dqFlexion_IK3.hh"

namespace SymExpression
{

void dqFlexion_IK3_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
