/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:16 GMT-04:00
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
  double t1510;
  double t1618;
  double t1700;
  double t1794;
  double t1795;
  double t1889;
  double t2068;
  double t2080;
  double t2447;
  double t3837;
  double t3860;
  double t3918;
  double t3965;
  double t3966;
  double t3979;
  double t3985;
  double t3920;
  double t4035;
  double t4047;
  double t4166;
  double t4240;
  double t4280;
  double t4283;
  double t4289;
  double t4311;
  double t4322;
  double t4323;
  double t4336;
  double t4357;
  double t3797;
  double t3859;
  double t3926;
  double t3963;
  double t3987;
  double t4031;
  double t4032;
  double t4034;
  double t4037;
  double t4041;
  double t4077;
  double t4144;
  double t4145;
  double t4158;
  double t4179;
  double t4213;
  double t4218;
  double t4363;
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
  double t4434;
  double t4439;
  double t4442;
  double t4443;
  double t4459;
  double t4460;
  double t4462;
  double t4463;
  double t4464;
  double t4475;
  double t4476;
  double t4480;
  double t4481;
  double t4485;
  double t4487;
  double t4488;
  double t4226;
  double t4516;
  double t4517;
  double t4548;
  double t4552;
  double t4560;
  double t4561;
  double t4562;
  double t4563;
  double t4580;
  double t4576;
  double t4584;
  double t4585;
  double t4586;
  double t4500;
  double t4604;
  double t4609;
  double t4610;
  double t4611;
  double t4630;
  double t4634;
  double t4635;
  double t4636;
  double t4637;
  double t4505;
  double t4506;
  double t4509;
  double t4510;
  double t4511;
  double t4512;
  double t4513;
  double t4514;
  t1510 = Power(var2[0],2);
  t1618 = 7.389631520540365e45*t1510;
  t1700 = 7.196137048348655e88*t1510;
  t1794 = Power(var2[0],4);
  t1795 = -6.78756814823791e88*t1794;
  t1889 = -6.096939283359201e85 + t1700 + t1795;
  t2068 = Sqrt(t1889);
  t2080 = -1.*t2068;
  t2447 = -3.9172204239607165e45 + t1618 + t2080;
  t3837 = Power(t2447,2);
  t3860 = -6.529726269561443e-92*t3837;
  t3918 = 1. + t3860;
  t3965 = 2.5553329077757057e-46*t2447;
  t3966 = ArcCos(t3965);
  t3979 = 0.226893 + t3966;
  t3985 = Cos(t3979);
  t3920 = Sqrt(t3918);
  t4035 = Power(t3985,2);
  t4047 = Sin(t3979);
  t4166 = Power(t4047,2);
  t4240 = Cos(var1[0]);
  t4280 = -3.444588759681651e-39*t2447;
  t4283 = 9.91e7*t3920;
  t4289 = 2.0442663262205644e-39*t2447*t3985;
  t4311 = 8.16e7*t3920*t3985;
  t4322 = -2.085151652744976e-38*t2447*t4047;
  t4323 = 8.e6*t3920*t4047;
  t4336 = t4280 + t4283 + t4289 + t4311 + t4322 + t4323;
  t4357 = Sin(var1[0]);
  t3797 = 3.038801893926869e-39*t2447;
  t3859 = 1.6328430054426058e-84*t3837;
  t3926 = 1.6176e6*t3920;
  t3963 = 2.5006301e7*t3918;
  t3987 = 2.502181983293971e-39*t2447*t3985;
  t4031 = 2.6049428790737635e-84*t3837*t3985;
  t4032 = -960000.*t3920*t3985;
  t4034 = 3.98936e7*t3918*t3985;
  t4037 = 1.0974119157675743e-84*t3837*t4035;
  t4041 = 1.68064e7*t3918*t4035;
  t4077 = 2.4531195914646776e-40*t2447*t4047;
  t4144 = 6.179628465892636e-85*t3837*t4047;
  t4145 = 9.792e6*t3920*t4047;
  t4158 = 9.46384e6*t3918*t4047;
  t4179 = 1.0974119157675743e-84*t3837*t4166;
  t4213 = 1.68064e7*t3918*t4166;
  t4218 = 1.44e6 + t3797 + t3859 + t3926 + t3963 + t3987 + t4031 + t4032 + t4034 + t4037 + t4041 + t4077 + t4144 + t4145 + t4158 + t4179 + t4213;
  t4363 = Power(t4336,2);
  t4375 = Power(t4357,2);
  t4376 = t1510*t4375*t4363;
  t4386 = -3.038801893926869e-39*t2447;
  t4391 = -1.6031800261342928e-84*t3837;
  t4402 = -1.6176e6*t3920;
  t4404 = -1.706793730422258e-39*t2447*t3920;
  t4405 = -454276.*t3918;
  t4408 = -2.502181983293971e-39*t2447*t3985;
  t4419 = -2.640151163119239e-84*t3837*t3985;
  t4425 = 960000.*t3920*t3985;
  t4428 = -3.92458249307824e-40*t2447*t3920*t3985;
  t4429 = 539200.*t3918*t3985;
  t4432 = -1.086964353736276e-84*t3837*t4035;
  t4433 = 8.340606610979903e-40*t2447*t3920*t4035;
  t4434 = -160000.*t3918*t4035;
  t4439 = 1.e8*t1510*t4375;
  t4442 = -2.4531195914646776e-40*t2447*t4047;
  t4443 = -2.5883834932541557e-85*t3837*t4047;
  t4459 = -9.792e6*t3920*t4047;
  t4460 = -1.0469709989738621e-38*t2447*t3920*t4047;
  t4462 = -5.49984e6*t3918*t4047;
  t4463 = -2.131302654384855e-85*t3837*t3985*t4047;
  t4464 = -8.425648090150679e-39*t2447*t3920*t3985*t4047;
  t4475 = 3.264e6*t3918*t3985*t4047;
  t4476 = -1.0447562031298307e-86*t3837*t4166;
  t4480 = -8.340606610979903e-40*t2447*t3920*t4166;
  t4481 = -1.66464e7*t3918*t4166;
  t4485 = -1.44e6 + t4386 + t4391 + t4402 + t4404 + t4405 + t4408 + t4419 + t4425 + t4428 + t4429 + t4432 + t4433 + t4434 + t4439 + t4442 + t4443 + t4459 + t4460 + t4462 + t4463 + t4464 + t4475 + t4476 + t4480 + t4481;
  t4487 = -4.*t4485*t4218;
  t4488 = t4376 + t4487;
  t4226 = 1/t4218;
  t4516 = 1.477926304108073e46*var2[0];
  t4517 = 1.439227409669731e89*var2[0];
  t4548 = Power(var2[0],3);
  t4552 = -2.715027259295164e89*t4548;
  t4560 = t4517 + t4552;
  t4561 = 1/Sqrt(t1889);
  t4562 = -0.5*t4560*t4561;
  t4563 = t4516 + t4562;
  t4580 = 1/Sqrt(t3918);
  t4576 = -3.444588759681651e-39*t4563;
  t4584 = -6.47095873313539e-84*t4563*t2447*t4580;
  t4585 = 9.1438991302582e-100*t4563*t2447*t4580*t3985;
  t4586 = 0. + t4576 + t4584 + t4585;
  t4500 = 1/Sqrt(t4488);
  t4604 = 3.038801893926869e-39*t4563;
  t4609 = -1.056248521364259e-85*t4563*t2447*t4580;
  t4610 = -7.143671195514219e-102*t4563*t2447*t4580*t3985;
  t4611 = -1.5791007976722952e-130*t4563*t3837*t4580*t3985;
  t4630 = -2.4183261785924035e-39*t4563*t3920*t3985;
  t4634 = 1.142987391282275e-100*t4563*t2447*t4580*t4047;
  t4635 = 6.656496261773179e-130*t4563*t3837*t4580*t4047;
  t4636 = 1.0194142888964089e-38*t4563*t3920*t4047;
  t4637 = 0. + t4604 + t4609 + t4610 + t4611 + t4630 + t4634 + t4635 + t4636;
  t4505 = Power(t4218,-2);
  t4506 = -1.*var2[0]*t4357*t4336;
  t4509 = Sqrt(t4488);
  t4510 = t4506 + t4509;
  t4511 = Power(t4510,2);
  t4512 = -0.25*t4505*t4511;
  t4513 = 1. + t4512;
  t4514 = 1/Sqrt(t4513);
  p_output1[0]=-0.5*t4226*t4514*(0.5*(-8.e8*t1510*t4218*t4240*t4357 + 2.*t1510*t4240*t4357*t4363)*t4500 - 1.*t4240*t4336*var2[0])*var3[0] - 1.*t4514*(-0.5*t4505*t4510*t4637 + 0.5*t4226*(-1.*t4336*t4357 - 1.*t4357*t4586*var2[0] + 0.5*t4500*(2.*t1510*t4336*t4375*t4586 - 4.*t4485*t4637 + 2.*t4363*t4375*var2[0] - 4.*t4218*(0. - 3.038801893926869e-39*t4563 - 3.1470340936519598e-84*t2447*t4563 - 1.706793730422258e-39*t3920*t4563 - 2.6753594471647136e-84*t2447*t3985*t4563 + 1.0129339646422898e-39*t3920*t3985*t4563 + 1.0028614793843246e-85*t2447*t4047*t4563 - 1.0331926439351355e-38*t3920*t4047*t4563 + 1.056248521364259e-85*t2447*t4563*t4580 + 1.114489585826099e-130*t3837*t4563*t4580 + 7.143671195514219e-102*t2447*t3985*t4563*t4580 + 9.176826458467173e-131*t3837*t3985*t4563*t4580 - 1.142987391282275e-100*t2447*t4047*t4563*t4580 + 8.996888684771729e-132*t3837*t4047*t4563*t4580 - 8.008332380732404e-146*t3837*t3985*t4047*t4563*t4580 + 2.e8*t4375*var2[0]))))*var4[0];
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
