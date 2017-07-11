/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:13:00 GMT-04:00
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
  double t423;
  double t874;
  double t946;
  double t1007;
  double t1010;
  double t1634;
  double t1665;
  double t1734;
  double t1742;
  double t2308;
  double t3513;
  double t3524;
  double t3653;
  double t3655;
  double t3725;
  double t3726;
  double t3608;
  double t3759;
  double t3825;
  double t3885;
  double t3952;
  double t3956;
  double t3964;
  double t3970;
  double t3978;
  double t4027;
  double t4030;
  double t4049;
  double t4053;
  double t2148;
  double t2329;
  double t3611;
  double t3635;
  double t3727;
  double t3728;
  double t3732;
  double t3758;
  double t3805;
  double t3821;
  double t3833;
  double t3866;
  double t3868;
  double t3879;
  double t3922;
  double t3926;
  double t3927;
  double t4056;
  double t4091;
  double t4106;
  double t4112;
  double t4119;
  double t4120;
  double t4121;
  double t4126;
  double t4129;
  double t4131;
  double t4176;
  double t4178;
  double t4181;
  double t4183;
  double t4190;
  double t4202;
  double t4203;
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
  double t3928;
  double t4333;
  double t4336;
  double t4339;
  double t4341;
  double t4342;
  double t4354;
  double t4355;
  double t4356;
  double t4358;
  double t4357;
  double t4360;
  double t4369;
  double t4377;
  double t4288;
  double t4386;
  double t4387;
  double t4389;
  double t4390;
  double t4391;
  double t4399;
  double t4402;
  double t4403;
  double t4406;
  double t4301;
  double t4305;
  double t4308;
  double t4320;
  double t4321;
  double t4325;
  double t4326;
  double t4327;
  double t4330;
  t423 = Power(var2[0],2);
  t874 = 7.389631520540365e45*t423;
  t946 = 7.196137048348655e88*t423;
  t1007 = Power(var2[0],4);
  t1010 = -6.78756814823791e88*t1007;
  t1634 = -6.096939283359201e85 + t946 + t1010;
  t1665 = Sqrt(t1634);
  t1734 = -1.*t1665;
  t1742 = -3.9172204239607165e45 + t874 + t1734;
  t2308 = Power(t1742,2);
  t3513 = -6.529726269561443e-92*t2308;
  t3524 = 1. + t3513;
  t3653 = 2.5553329077757057e-46*t1742;
  t3655 = ArcCos(t3653);
  t3725 = 0.226893 + t3655;
  t3726 = Cos(t3725);
  t3608 = Sqrt(t3524);
  t3759 = Power(t3726,2);
  t3825 = Sin(t3725);
  t3885 = Power(t3825,2);
  t3952 = Cos(var1[0]);
  t3956 = -3.444588759681651e-39*t1742;
  t3964 = 9.91e7*t3608;
  t3970 = 2.0442663262205644e-39*t1742*t3726;
  t3978 = 8.16e7*t3608*t3726;
  t4027 = -2.085151652744976e-38*t1742*t3825;
  t4030 = 8.e6*t3608*t3825;
  t4049 = t3956 + t3964 + t3970 + t3978 + t4027 + t4030;
  t4053 = Sin(var1[0]);
  t2148 = 3.038801893926869e-39*t1742;
  t2329 = 1.6328430054426058e-84*t2308;
  t3611 = 1.6176e6*t3608;
  t3635 = 2.5006301e7*t3524;
  t3727 = 2.502181983293971e-39*t1742*t3726;
  t3728 = 2.6049428790737635e-84*t2308*t3726;
  t3732 = -960000.*t3608*t3726;
  t3758 = 3.98936e7*t3524*t3726;
  t3805 = 1.0974119157675743e-84*t2308*t3759;
  t3821 = 1.68064e7*t3524*t3759;
  t3833 = 2.4531195914646776e-40*t1742*t3825;
  t3866 = 6.179628465892636e-85*t2308*t3825;
  t3868 = 9.792e6*t3608*t3825;
  t3879 = 9.46384e6*t3524*t3825;
  t3922 = 1.0974119157675743e-84*t2308*t3885;
  t3926 = 1.68064e7*t3524*t3885;
  t3927 = 1.44e6 + t2148 + t2329 + t3611 + t3635 + t3727 + t3728 + t3732 + t3758 + t3805 + t3821 + t3833 + t3866 + t3868 + t3879 + t3922 + t3926;
  t4056 = Power(t4049,2);
  t4091 = Power(t4053,2);
  t4106 = t423*t4091*t4056;
  t4112 = -3.038801893926869e-39*t1742;
  t4119 = -1.6031800261342928e-84*t2308;
  t4120 = -1.6176e6*t3608;
  t4121 = -1.706793730422258e-39*t1742*t3608;
  t4126 = -454276.*t3524;
  t4129 = -2.502181983293971e-39*t1742*t3726;
  t4131 = -2.640151163119239e-84*t2308*t3726;
  t4176 = 960000.*t3608*t3726;
  t4178 = -3.92458249307824e-40*t1742*t3608*t3726;
  t4181 = 539200.*t3524*t3726;
  t4183 = -1.086964353736276e-84*t2308*t3759;
  t4190 = 8.340606610979903e-40*t1742*t3608*t3759;
  t4202 = -160000.*t3524*t3759;
  t4203 = 1.e8*t423*t4091;
  t4208 = -2.4531195914646776e-40*t1742*t3825;
  t4214 = -2.5883834932541557e-85*t2308*t3825;
  t4231 = -9.792e6*t3608*t3825;
  t4232 = -1.0469709989738621e-38*t1742*t3608*t3825;
  t4233 = -5.49984e6*t3524*t3825;
  t4236 = -2.131302654384855e-85*t2308*t3726*t3825;
  t4260 = -8.425648090150679e-39*t1742*t3608*t3726*t3825;
  t4262 = 3.264e6*t3524*t3726*t3825;
  t4263 = -1.0447562031298307e-86*t2308*t3885;
  t4268 = -8.340606610979903e-40*t1742*t3608*t3885;
  t4269 = -1.66464e7*t3524*t3885;
  t4271 = -1.44e6 + t4112 + t4119 + t4120 + t4121 + t4126 + t4129 + t4131 + t4176 + t4178 + t4181 + t4183 + t4190 + t4202 + t4203 + t4208 + t4214 + t4231 + t4232 + t4233 + t4236 + t4260 + t4262 + t4263 + t4268 + t4269;
  t4272 = -4.*t4271*t3927;
  t4273 = t4106 + t4272;
  t3928 = 1/t3927;
  t4333 = 1.477926304108073e46*var2[0];
  t4336 = 1.439227409669731e89*var2[0];
  t4339 = Power(var2[0],3);
  t4341 = -2.715027259295164e89*t4339;
  t4342 = t4336 + t4341;
  t4354 = 1/Sqrt(t1634);
  t4355 = -0.5*t4342*t4354;
  t4356 = t4333 + t4355;
  t4358 = 1/Sqrt(t3524);
  t4357 = -3.444588759681651e-39*t4356;
  t4360 = -6.47095873313539e-84*t4356*t1742*t4358;
  t4369 = 9.1438991302582e-100*t4356*t1742*t4358*t3726;
  t4377 = 0. + t4357 + t4360 + t4369;
  t4288 = 1/Sqrt(t4273);
  t4386 = 3.038801893926869e-39*t4356;
  t4387 = -1.056248521364259e-85*t4356*t1742*t4358;
  t4389 = -7.143671195514219e-102*t4356*t1742*t4358*t3726;
  t4390 = -1.5791007976722952e-130*t4356*t2308*t4358*t3726;
  t4391 = -2.4183261785924035e-39*t4356*t3608*t3726;
  t4399 = 1.142987391282275e-100*t4356*t1742*t4358*t3825;
  t4402 = 6.656496261773179e-130*t4356*t2308*t4358*t3825;
  t4403 = 1.0194142888964089e-38*t4356*t3608*t3825;
  t4406 = 0. + t4386 + t4387 + t4389 + t4390 + t4391 + t4399 + t4402 + t4403;
  t4301 = Power(t3927,-2);
  t4305 = -1.*var2[0]*t4053*t4049;
  t4308 = Sqrt(t4273);
  t4320 = -1.*t4308;
  t4321 = t4305 + t4320;
  t4325 = Power(t4321,2);
  t4326 = -0.25*t4301*t4325;
  t4327 = 1. + t4326;
  t4330 = 1/Sqrt(t4327);
  p_output1[0]=0.5*t3928*t4330*(-0.5*(-8.e8*t3927*t3952*t4053*t423 + 2.*t3952*t4053*t4056*t423)*t4288 - 1.*t3952*t4049*var2[0])*var3[0] + t4330*(-0.5*t4301*t4321*t4406 + 0.5*t3928*(-1.*t4049*t4053 - 1.*t4053*t4377*var2[0] - 0.5*t4288*(2.*t4049*t4091*t423*t4377 - 4.*t4271*t4406 + 2.*t4056*t4091*var2[0] - 4.*t3927*(0. - 3.038801893926869e-39*t4356 - 3.1470340936519598e-84*t1742*t4356 - 1.706793730422258e-39*t3608*t4356 - 2.6753594471647136e-84*t1742*t3726*t4356 + 1.0129339646422898e-39*t3608*t3726*t4356 + 1.0028614793843246e-85*t1742*t3825*t4356 - 1.0331926439351355e-38*t3608*t3825*t4356 + 1.056248521364259e-85*t1742*t4356*t4358 + 1.114489585826099e-130*t2308*t4356*t4358 + 7.143671195514219e-102*t1742*t3726*t4356*t4358 + 9.176826458467173e-131*t2308*t3726*t4356*t4358 - 1.142987391282275e-100*t1742*t3825*t4356*t4358 + 8.996888684771729e-132*t2308*t3825*t4356*t4358 - 8.008332380732404e-146*t2308*t3726*t3825*t4356*t4358 + 2.e8*t4091*var2[0]))))*var4[0];
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

#include "dqFlexion_IK1.hh"

namespace SymExpression
{

void dqFlexion_IK1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
