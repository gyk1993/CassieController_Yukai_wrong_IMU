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
  double t613;
  double t1510;
  double t1618;
  double t1700;
  double t1794;
  double t1795;
  double t1889;
  double t2068;
  double t2080;
  double t3797;
  double t3850;
  double t3857;
  double t3920;
  double t3926;
  double t3963;
  double t3965;
  double t3859;
  double t4031;
  double t4035;
  double t4144;
  double t4188;
  double t4213;
  double t4218;
  double t4226;
  double t4240;
  double t4280;
  double t4283;
  double t4287;
  double t4308;
  double t2447;
  double t3837;
  double t3860;
  double t3918;
  double t3966;
  double t3979;
  double t3985;
  double t3987;
  double t4032;
  double t4034;
  double t4037;
  double t4041;
  double t4047;
  double t4077;
  double t4145;
  double t4158;
  double t4166;
  double t4310;
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
  double t4434;
  double t4439;
  double t4442;
  double t4443;
  double t4459;
  double t4460;
  double t4462;
  double t4463;
  double t4179;
  double t4504;
  double t4505;
  double t4506;
  double t4509;
  double t4510;
  double t4511;
  double t4512;
  double t4513;
  double t4515;
  double t4514;
  double t4516;
  double t4517;
  double t4544;
  double t4464;
  double t4562;
  double t4563;
  double t4576;
  double t4580;
  double t4584;
  double t4585;
  double t4586;
  double t4587;
  double t4601;
  double t4480;
  double t4481;
  double t4485;
  double t4487;
  double t4488;
  double t4489;
  double t4491;
  double t4500;
  t613 = Power(var2[0],2);
  t1510 = 7.389631520540365e45*t613;
  t1618 = 7.196137048348655e88*t613;
  t1700 = Power(var2[0],4);
  t1794 = -6.78756814823791e88*t1700;
  t1795 = -6.096939283359201e85 + t1618 + t1794;
  t1889 = Sqrt(t1795);
  t2068 = -1.*t1889;
  t2080 = -3.9172204239607165e45 + t1510 + t2068;
  t3797 = Power(t2080,2);
  t3850 = -6.529726269561443e-92*t3797;
  t3857 = 1. + t3850;
  t3920 = 2.5553329077757057e-46*t2080;
  t3926 = ArcCos(t3920);
  t3963 = 0.226893 + t3926;
  t3965 = Cos(t3963);
  t3859 = Sqrt(t3857);
  t4031 = Power(t3965,2);
  t4035 = Sin(t3963);
  t4144 = Power(t4035,2);
  t4188 = Cos(var1[0]);
  t4213 = -3.444588759681651e-39*t2080;
  t4218 = 9.91e7*t3859;
  t4226 = 2.0442663262205644e-39*t2080*t3965;
  t4240 = 8.16e7*t3859*t3965;
  t4280 = -2.085151652744976e-38*t2080*t4035;
  t4283 = 8.e6*t3859*t4035;
  t4287 = t4213 + t4218 + t4226 + t4240 + t4280 + t4283;
  t4308 = Sin(var1[0]);
  t2447 = 3.038801893926869e-39*t2080;
  t3837 = 1.6328430054426058e-84*t3797;
  t3860 = 1.6176e6*t3859;
  t3918 = 2.5006301e7*t3857;
  t3966 = 2.502181983293971e-39*t2080*t3965;
  t3979 = 2.6049428790737635e-84*t3797*t3965;
  t3985 = -960000.*t3859*t3965;
  t3987 = 3.98936e7*t3857*t3965;
  t4032 = 1.0974119157675743e-84*t3797*t4031;
  t4034 = 1.68064e7*t3857*t4031;
  t4037 = 2.4531195914646776e-40*t2080*t4035;
  t4041 = 6.179628465892636e-85*t3797*t4035;
  t4047 = 9.792e6*t3859*t4035;
  t4077 = 9.46384e6*t3857*t4035;
  t4145 = 1.0974119157675743e-84*t3797*t4144;
  t4158 = 1.68064e7*t3857*t4144;
  t4166 = 1.44e6 + t2447 + t3837 + t3860 + t3918 + t3966 + t3979 + t3985 + t3987 + t4032 + t4034 + t4037 + t4041 + t4047 + t4077 + t4145 + t4158;
  t4310 = Power(t4287,2);
  t4335 = Power(t4308,2);
  t4336 = t613*t4335*t4310;
  t4352 = -3.038801893926869e-39*t2080;
  t4357 = -1.6031800261342928e-84*t3797;
  t4363 = -1.6176e6*t3859;
  t4366 = -1.706793730422258e-39*t2080*t3859;
  t4369 = -454276.*t3857;
  t4374 = -2.502181983293971e-39*t2080*t3965;
  t4375 = -2.640151163119239e-84*t3797*t3965;
  t4376 = 960000.*t3859*t3965;
  t4386 = -3.92458249307824e-40*t2080*t3859*t3965;
  t4391 = 539200.*t3857*t3965;
  t4402 = -1.086964353736276e-84*t3797*t4031;
  t4404 = 8.340606610979903e-40*t2080*t3859*t4031;
  t4405 = -160000.*t3857*t4031;
  t4408 = 1.e8*t613*t4335;
  t4419 = -2.4531195914646776e-40*t2080*t4035;
  t4425 = -2.5883834932541557e-85*t3797*t4035;
  t4428 = -9.792e6*t3859*t4035;
  t4429 = -1.0469709989738621e-38*t2080*t3859*t4035;
  t4432 = -5.49984e6*t3857*t4035;
  t4433 = -2.131302654384855e-85*t3797*t3965*t4035;
  t4434 = -8.425648090150679e-39*t2080*t3859*t3965*t4035;
  t4439 = 3.264e6*t3857*t3965*t4035;
  t4442 = -1.0447562031298307e-86*t3797*t4144;
  t4443 = -8.340606610979903e-40*t2080*t3859*t4144;
  t4459 = -1.66464e7*t3857*t4144;
  t4460 = -1.44e6 + t4352 + t4357 + t4363 + t4366 + t4369 + t4374 + t4375 + t4376 + t4386 + t4391 + t4402 + t4404 + t4405 + t4408 + t4419 + t4425 + t4428 + t4429 + t4432 + t4433 + t4434 + t4439 + t4442 + t4443 + t4459;
  t4462 = -4.*t4460*t4166;
  t4463 = t4336 + t4462;
  t4179 = 1/t4166;
  t4504 = 1.477926304108073e46*var2[0];
  t4505 = 1.439227409669731e89*var2[0];
  t4506 = Power(var2[0],3);
  t4509 = -2.715027259295164e89*t4506;
  t4510 = t4505 + t4509;
  t4511 = 1/Sqrt(t1795);
  t4512 = -0.5*t4510*t4511;
  t4513 = t4504 + t4512;
  t4515 = 1/Sqrt(t3857);
  t4514 = -3.444588759681651e-39*t4513;
  t4516 = -6.47095873313539e-84*t4513*t2080*t4515;
  t4517 = 9.1438991302582e-100*t4513*t2080*t4515*t3965;
  t4544 = 0. + t4514 + t4516 + t4517;
  t4464 = 1/Sqrt(t4463);
  t4562 = 3.038801893926869e-39*t4513;
  t4563 = -1.056248521364259e-85*t4513*t2080*t4515;
  t4576 = -7.143671195514219e-102*t4513*t2080*t4515*t3965;
  t4580 = -1.5791007976722952e-130*t4513*t3797*t4515*t3965;
  t4584 = -2.4183261785924035e-39*t4513*t3859*t3965;
  t4585 = 1.142987391282275e-100*t4513*t2080*t4515*t4035;
  t4586 = 6.656496261773179e-130*t4513*t3797*t4515*t4035;
  t4587 = 1.0194142888964089e-38*t4513*t3859*t4035;
  t4601 = 0. + t4562 + t4563 + t4576 + t4580 + t4584 + t4585 + t4586 + t4587;
  t4480 = Power(t4166,-2);
  t4481 = -1.*var2[0]*t4308*t4287;
  t4485 = Sqrt(t4463);
  t4487 = t4481 + t4485;
  t4488 = Power(t4487,2);
  t4489 = -0.25*t4480*t4488;
  t4491 = 1. + t4489;
  t4500 = 1/Sqrt(t4491);
  p_output1[0]=0.5*t4179*t4500*(0.5*t4464*(-8.e8*t4166*t4188*t4308*t613 + 2.*t4188*t4308*t4310*t613) - 1.*t4188*t4287*var2[0])*var3[0] + t4500*(-0.5*t4480*t4487*t4601 + 0.5*t4179*(-1.*t4287*t4308 - 1.*t4308*t4544*var2[0] + 0.5*t4464*(-4.*t4460*t4601 + 2.*t4287*t4335*t4544*t613 + 2.*t4310*t4335*var2[0] - 4.*t4166*(0. - 3.038801893926869e-39*t4513 - 3.1470340936519598e-84*t2080*t4513 - 1.706793730422258e-39*t3859*t4513 - 2.6753594471647136e-84*t2080*t3965*t4513 + 1.0129339646422898e-39*t3859*t3965*t4513 + 1.0028614793843246e-85*t2080*t4035*t4513 - 1.0331926439351355e-38*t3859*t4035*t4513 + 1.056248521364259e-85*t2080*t4513*t4515 + 1.114489585826099e-130*t3797*t4513*t4515 + 7.143671195514219e-102*t2080*t3965*t4513*t4515 + 9.176826458467173e-131*t3797*t3965*t4513*t4515 - 1.142987391282275e-100*t2080*t4035*t4513*t4515 + 8.996888684771729e-132*t3797*t4035*t4513*t4515 - 8.008332380732404e-146*t3797*t3965*t4035*t4513*t4515 + 2.e8*t4335*var2[0]))))*var4[0];
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
