/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:15 GMT-04:00
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
  double t541;
  double t613;
  double t1510;
  double t1618;
  double t1700;
  double t1794;
  double t1795;
  double t1889;
  double t2068;
  double t2447;
  double t3810;
  double t3811;
  double t3859;
  double t3860;
  double t3918;
  double t3920;
  double t3837;
  double t3979;
  double t4031;
  double t4041;
  double t4147;
  double t4158;
  double t4166;
  double t4179;
  double t4188;
  double t4213;
  double t4218;
  double t4225;
  double t4229;
  double t2080;
  double t3797;
  double t3850;
  double t3857;
  double t3926;
  double t3963;
  double t3965;
  double t3966;
  double t3985;
  double t3987;
  double t4032;
  double t4034;
  double t4035;
  double t4037;
  double t4047;
  double t4077;
  double t4144;
  double t4238;
  double t4286;
  double t4287;
  double t4289;
  double t4308;
  double t4310;
  double t4311;
  double t4322;
  double t4323;
  double t4335;
  double t4336;
  double t4352;
  double t4357;
  double t4363;
  double t4366;
  double t4369;
  double t4374;
  double t4375;
  double t4376;
  double t4386;
  double t4391;
  double t4402;
  double t4404;
  double t4405;
  double t4408;
  double t4419;
  double t4425;
  double t4428;
  double t4429;
  double t4432;
  double t4433;
  double t4145;
  double t4480;
  double t4481;
  double t4485;
  double t4487;
  double t4488;
  double t4489;
  double t4491;
  double t4500;
  double t4504;
  double t4503;
  double t4505;
  double t4506;
  double t4508;
  double t4434;
  double t4513;
  double t4514;
  double t4515;
  double t4516;
  double t4517;
  double t4544;
  double t4548;
  double t4552;
  double t4560;
  double t4443;
  double t4459;
  double t4460;
  double t4462;
  double t4463;
  double t4464;
  double t4465;
  double t4470;
  double t4475;
  t541 = Power(var2[0],2);
  t613 = 7.389631520540365e45*t541;
  t1510 = 7.196137048348655e88*t541;
  t1618 = Power(var2[0],4);
  t1700 = -6.78756814823791e88*t1618;
  t1794 = -6.096939283359201e85 + t1510 + t1700;
  t1795 = Sqrt(t1794);
  t1889 = -1.*t1795;
  t2068 = -3.9172204239607165e45 + t613 + t1889;
  t2447 = Power(t2068,2);
  t3810 = -6.529726269561443e-92*t2447;
  t3811 = 1. + t3810;
  t3859 = 2.5553329077757057e-46*t2068;
  t3860 = ArcCos(t3859);
  t3918 = 0.226893 + t3860;
  t3920 = Cos(t3918);
  t3837 = Sqrt(t3811);
  t3979 = Power(t3920,2);
  t4031 = Sin(t3918);
  t4041 = Power(t4031,2);
  t4147 = Cos(var1[0]);
  t4158 = -3.444588759681651e-39*t2068;
  t4166 = 9.91e7*t3837;
  t4179 = 2.0442663262205644e-39*t2068*t3920;
  t4188 = 8.16e7*t3837*t3920;
  t4213 = -2.085151652744976e-38*t2068*t4031;
  t4218 = 8.e6*t3837*t4031;
  t4225 = t4158 + t4166 + t4179 + t4188 + t4213 + t4218;
  t4229 = Sin(var1[0]);
  t2080 = 3.038801893926869e-39*t2068;
  t3797 = 1.6328430054426058e-84*t2447;
  t3850 = 1.6176e6*t3837;
  t3857 = 2.5006301e7*t3811;
  t3926 = 2.502181983293971e-39*t2068*t3920;
  t3963 = 2.6049428790737635e-84*t2447*t3920;
  t3965 = -960000.*t3837*t3920;
  t3966 = 3.98936e7*t3811*t3920;
  t3985 = 1.0974119157675743e-84*t2447*t3979;
  t3987 = 1.68064e7*t3811*t3979;
  t4032 = 2.4531195914646776e-40*t2068*t4031;
  t4034 = 6.179628465892636e-85*t2447*t4031;
  t4035 = 9.792e6*t3837*t4031;
  t4037 = 9.46384e6*t3811*t4031;
  t4047 = 1.0974119157675743e-84*t2447*t4041;
  t4077 = 1.68064e7*t3811*t4041;
  t4144 = 1.44e6 + t2080 + t3797 + t3850 + t3857 + t3926 + t3963 + t3965 + t3966 + t3985 + t3987 + t4032 + t4034 + t4035 + t4037 + t4047 + t4077;
  t4238 = Power(t4225,2);
  t4286 = Power(t4229,2);
  t4287 = t541*t4286*t4238;
  t4289 = -3.038801893926869e-39*t2068;
  t4308 = -1.6031800261342928e-84*t2447;
  t4310 = -1.6176e6*t3837;
  t4311 = -1.706793730422258e-39*t2068*t3837;
  t4322 = -454276.*t3811;
  t4323 = -2.502181983293971e-39*t2068*t3920;
  t4335 = -2.640151163119239e-84*t2447*t3920;
  t4336 = 960000.*t3837*t3920;
  t4352 = -3.92458249307824e-40*t2068*t3837*t3920;
  t4357 = 539200.*t3811*t3920;
  t4363 = -1.086964353736276e-84*t2447*t3979;
  t4366 = 8.340606610979903e-40*t2068*t3837*t3979;
  t4369 = -160000.*t3811*t3979;
  t4374 = 1.e8*t541*t4286;
  t4375 = -2.4531195914646776e-40*t2068*t4031;
  t4376 = -2.5883834932541557e-85*t2447*t4031;
  t4386 = -9.792e6*t3837*t4031;
  t4391 = -1.0469709989738621e-38*t2068*t3837*t4031;
  t4402 = -5.49984e6*t3811*t4031;
  t4404 = -2.131302654384855e-85*t2447*t3920*t4031;
  t4405 = -8.425648090150679e-39*t2068*t3837*t3920*t4031;
  t4408 = 3.264e6*t3811*t3920*t4031;
  t4419 = -1.0447562031298307e-86*t2447*t4041;
  t4425 = -8.340606610979903e-40*t2068*t3837*t4041;
  t4428 = -1.66464e7*t3811*t4041;
  t4429 = -1.44e6 + t4289 + t4308 + t4310 + t4311 + t4322 + t4323 + t4335 + t4336 + t4352 + t4357 + t4363 + t4366 + t4369 + t4374 + t4375 + t4376 + t4386 + t4391 + t4402 + t4404 + t4405 + t4408 + t4419 + t4425 + t4428;
  t4432 = -4.*t4429*t4144;
  t4433 = t4287 + t4432;
  t4145 = 1/t4144;
  t4480 = 1.477926304108073e46*var2[0];
  t4481 = 1.439227409669731e89*var2[0];
  t4485 = Power(var2[0],3);
  t4487 = -2.715027259295164e89*t4485;
  t4488 = t4481 + t4487;
  t4489 = 1/Sqrt(t1794);
  t4491 = -0.5*t4488*t4489;
  t4500 = t4480 + t4491;
  t4504 = 1/Sqrt(t3811);
  t4503 = -3.444588759681651e-39*t4500;
  t4505 = -6.47095873313539e-84*t4500*t2068*t4504;
  t4506 = 9.1438991302582e-100*t4500*t2068*t4504*t3920;
  t4508 = 0. + t4503 + t4505 + t4506;
  t4434 = 1/Sqrt(t4433);
  t4513 = 3.038801893926869e-39*t4500;
  t4514 = -1.056248521364259e-85*t4500*t2068*t4504;
  t4515 = -7.143671195514219e-102*t4500*t2068*t4504*t3920;
  t4516 = -1.5791007976722952e-130*t4500*t2447*t4504*t3920;
  t4517 = -2.4183261785924035e-39*t4500*t3837*t3920;
  t4544 = 1.142987391282275e-100*t4500*t2068*t4504*t4031;
  t4548 = 6.656496261773179e-130*t4500*t2447*t4504*t4031;
  t4552 = 1.0194142888964089e-38*t4500*t3837*t4031;
  t4560 = 0. + t4513 + t4514 + t4515 + t4516 + t4517 + t4544 + t4548 + t4552;
  t4443 = Power(t4144,-2);
  t4459 = -1.*var2[0]*t4229*t4225;
  t4460 = Sqrt(t4433);
  t4462 = -1.*t4460;
  t4463 = t4459 + t4462;
  t4464 = Power(t4463,2);
  t4465 = -0.25*t4443*t4464;
  t4470 = 1. + t4465;
  t4475 = 1/Sqrt(t4470);
  p_output1[0]=-0.5*t4145*t4475*(-0.5*t4434*(-8.e8*t4144*t4147*t4229*t541 + 2.*t4147*t4229*t4238*t541) - 1.*t4147*t4225*var2[0])*var3[0] - 1.*t4475*(-0.5*t4443*t4463*t4560 + 0.5*t4145*(-1.*t4225*t4229 - 1.*t4229*t4508*var2[0] - 0.5*t4434*(-4.*t4429*t4560 + 2.*t4225*t4286*t4508*t541 + 2.*t4238*t4286*var2[0] - 4.*t4144*(0. - 3.038801893926869e-39*t4500 - 3.1470340936519598e-84*t2068*t4500 - 1.706793730422258e-39*t3837*t4500 - 2.6753594471647136e-84*t2068*t3920*t4500 + 1.0129339646422898e-39*t3837*t3920*t4500 + 1.0028614793843246e-85*t2068*t4031*t4500 - 1.0331926439351355e-38*t3837*t4031*t4500 + 1.056248521364259e-85*t2068*t4500*t4504 + 1.114489585826099e-130*t2447*t4500*t4504 + 7.143671195514219e-102*t2068*t3920*t4500*t4504 + 9.176826458467173e-131*t2447*t3920*t4500*t4504 - 1.142987391282275e-100*t2068*t4031*t4500*t4504 + 8.996888684771729e-132*t2447*t4031*t4500*t4504 - 8.008332380732404e-146*t2447*t3920*t4031*t4500*t4504 + 2.e8*t4286*var2[0]))))*var4[0];
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

#include "dqFlexion_IK2.hh"

namespace SymExpression
{

void dqFlexion_IK2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
