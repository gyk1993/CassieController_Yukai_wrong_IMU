/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:14 GMT-04:00
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
  double t38;
  double t541;
  double t613;
  double t1510;
  double t1618;
  double t1700;
  double t1794;
  double t1795;
  double t1889;
  double t2080;
  double t3676;
  double t3724;
  double t3837;
  double t3850;
  double t3857;
  double t3859;
  double t3797;
  double t3963;
  double t3979;
  double t4034;
  double t4071;
  double t4077;
  double t4144;
  double t4145;
  double t4147;
  double t4158;
  double t4166;
  double t4169;
  double t4180;
  double t2068;
  double t2447;
  double t3810;
  double t3811;
  double t3860;
  double t3918;
  double t3920;
  double t3926;
  double t3965;
  double t3966;
  double t3985;
  double t3987;
  double t4031;
  double t4032;
  double t4035;
  double t4037;
  double t4041;
  double t4183;
  double t4223;
  double t4225;
  double t4226;
  double t4229;
  double t4238;
  double t4240;
  double t4280;
  double t4283;
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
  double t4047;
  double t4443;
  double t4459;
  double t4460;
  double t4462;
  double t4463;
  double t4464;
  double t4465;
  double t4470;
  double t4476;
  double t4475;
  double t4480;
  double t4481;
  double t4482;
  double t4405;
  double t4491;
  double t4500;
  double t4503;
  double t4504;
  double t4505;
  double t4506;
  double t4508;
  double t4509;
  double t4510;
  double t4425;
  double t4428;
  double t4429;
  double t4432;
  double t4433;
  double t4434;
  double t4436;
  double t4437;
  double t4439;
  t38 = Power(var2[0],2);
  t541 = 7.389631520540365e45*t38;
  t613 = 7.196137048348655e88*t38;
  t1510 = Power(var2[0],4);
  t1618 = -6.78756814823791e88*t1510;
  t1700 = -6.096939283359201e85 + t613 + t1618;
  t1794 = Sqrt(t1700);
  t1795 = -1.*t1794;
  t1889 = -3.9172204239607165e45 + t541 + t1795;
  t2080 = Power(t1889,2);
  t3676 = -6.529726269561443e-92*t2080;
  t3724 = 1. + t3676;
  t3837 = 2.5553329077757057e-46*t1889;
  t3850 = ArcCos(t3837);
  t3857 = 0.226893 + t3850;
  t3859 = Cos(t3857);
  t3797 = Sqrt(t3724);
  t3963 = Power(t3859,2);
  t3979 = Sin(t3857);
  t4034 = Power(t3979,2);
  t4071 = Cos(var1[0]);
  t4077 = -3.444588759681651e-39*t1889;
  t4144 = 9.91e7*t3797;
  t4145 = 2.0442663262205644e-39*t1889*t3859;
  t4147 = 8.16e7*t3797*t3859;
  t4158 = -2.085151652744976e-38*t1889*t3979;
  t4166 = 8.e6*t3797*t3979;
  t4169 = t4077 + t4144 + t4145 + t4147 + t4158 + t4166;
  t4180 = Sin(var1[0]);
  t2068 = 3.038801893926869e-39*t1889;
  t2447 = 1.6328430054426058e-84*t2080;
  t3810 = 1.6176e6*t3797;
  t3811 = 2.5006301e7*t3724;
  t3860 = 2.502181983293971e-39*t1889*t3859;
  t3918 = 2.6049428790737635e-84*t2080*t3859;
  t3920 = -960000.*t3797*t3859;
  t3926 = 3.98936e7*t3724*t3859;
  t3965 = 1.0974119157675743e-84*t2080*t3963;
  t3966 = 1.68064e7*t3724*t3963;
  t3985 = 2.4531195914646776e-40*t1889*t3979;
  t3987 = 6.179628465892636e-85*t2080*t3979;
  t4031 = 9.792e6*t3797*t3979;
  t4032 = 9.46384e6*t3724*t3979;
  t4035 = 1.0974119157675743e-84*t2080*t4034;
  t4037 = 1.68064e7*t3724*t4034;
  t4041 = 1.44e6 + t2068 + t2447 + t3810 + t3811 + t3860 + t3918 + t3920 + t3926 + t3965 + t3966 + t3985 + t3987 + t4031 + t4032 + t4035 + t4037;
  t4183 = Power(t4169,2);
  t4223 = Power(t4180,2);
  t4225 = t38*t4223*t4183;
  t4226 = -3.038801893926869e-39*t1889;
  t4229 = -1.6031800261342928e-84*t2080;
  t4238 = -1.6176e6*t3797;
  t4240 = -1.706793730422258e-39*t1889*t3797;
  t4280 = -454276.*t3724;
  t4283 = -2.502181983293971e-39*t1889*t3859;
  t4286 = -2.640151163119239e-84*t2080*t3859;
  t4287 = 960000.*t3797*t3859;
  t4289 = -3.92458249307824e-40*t1889*t3797*t3859;
  t4308 = 539200.*t3724*t3859;
  t4310 = -1.086964353736276e-84*t2080*t3963;
  t4311 = 8.340606610979903e-40*t1889*t3797*t3963;
  t4322 = -160000.*t3724*t3963;
  t4323 = 1.e8*t38*t4223;
  t4335 = -2.4531195914646776e-40*t1889*t3979;
  t4336 = -2.5883834932541557e-85*t2080*t3979;
  t4352 = -9.792e6*t3797*t3979;
  t4357 = -1.0469709989738621e-38*t1889*t3797*t3979;
  t4363 = -5.49984e6*t3724*t3979;
  t4366 = -2.131302654384855e-85*t2080*t3859*t3979;
  t4369 = -8.425648090150679e-39*t1889*t3797*t3859*t3979;
  t4374 = 3.264e6*t3724*t3859*t3979;
  t4375 = -1.0447562031298307e-86*t2080*t4034;
  t4376 = -8.340606610979903e-40*t1889*t3797*t4034;
  t4386 = -1.66464e7*t3724*t4034;
  t4391 = -1.44e6 + t4226 + t4229 + t4238 + t4240 + t4280 + t4283 + t4286 + t4287 + t4289 + t4308 + t4310 + t4311 + t4322 + t4323 + t4335 + t4336 + t4352 + t4357 + t4363 + t4366 + t4369 + t4374 + t4375 + t4376 + t4386;
  t4402 = -4.*t4391*t4041;
  t4404 = t4225 + t4402;
  t4047 = 1/t4041;
  t4443 = 1.477926304108073e46*var2[0];
  t4459 = 1.439227409669731e89*var2[0];
  t4460 = Power(var2[0],3);
  t4462 = -2.715027259295164e89*t4460;
  t4463 = t4459 + t4462;
  t4464 = 1/Sqrt(t1700);
  t4465 = -0.5*t4463*t4464;
  t4470 = t4443 + t4465;
  t4476 = 1/Sqrt(t3724);
  t4475 = -3.444588759681651e-39*t4470;
  t4480 = -6.47095873313539e-84*t4470*t1889*t4476;
  t4481 = 9.1438991302582e-100*t4470*t1889*t4476*t3859;
  t4482 = 0. + t4475 + t4480 + t4481;
  t4405 = 1/Sqrt(t4404);
  t4491 = 3.038801893926869e-39*t4470;
  t4500 = -1.056248521364259e-85*t4470*t1889*t4476;
  t4503 = -7.143671195514219e-102*t4470*t1889*t4476*t3859;
  t4504 = -1.5791007976722952e-130*t4470*t2080*t4476*t3859;
  t4505 = -2.4183261785924035e-39*t4470*t3797*t3859;
  t4506 = 1.142987391282275e-100*t4470*t1889*t4476*t3979;
  t4508 = 6.656496261773179e-130*t4470*t2080*t4476*t3979;
  t4509 = 1.0194142888964089e-38*t4470*t3797*t3979;
  t4510 = 0. + t4491 + t4500 + t4503 + t4504 + t4505 + t4506 + t4508 + t4509;
  t4425 = Power(t4041,-2);
  t4428 = -1.*var2[0]*t4180*t4169;
  t4429 = Sqrt(t4404);
  t4432 = -1.*t4429;
  t4433 = t4428 + t4432;
  t4434 = Power(t4433,2);
  t4436 = -0.25*t4425*t4434;
  t4437 = 1. + t4436;
  t4439 = 1/Sqrt(t4437);
  p_output1[0]=0.5*t4047*t4439*(-0.5*(-8.e8*t38*t4041*t4071*t4180 + 2.*t38*t4071*t4180*t4183)*t4405 - 1.*t4071*t4169*var2[0])*var3[0] + t4439*(-0.5*t4425*t4433*t4510 + 0.5*t4047*(-1.*t4169*t4180 - 1.*t4180*t4482*var2[0] - 0.5*t4405*(2.*t38*t4169*t4223*t4482 - 4.*t4391*t4510 + 2.*t4183*t4223*var2[0] - 4.*t4041*(0. - 3.038801893926869e-39*t4470 - 3.1470340936519598e-84*t1889*t4470 - 1.706793730422258e-39*t3797*t4470 - 2.6753594471647136e-84*t1889*t3859*t4470 + 1.0129339646422898e-39*t3797*t3859*t4470 + 1.0028614793843246e-85*t1889*t3979*t4470 - 1.0331926439351355e-38*t3797*t3979*t4470 + 1.056248521364259e-85*t1889*t4470*t4476 + 1.114489585826099e-130*t2080*t4470*t4476 + 7.143671195514219e-102*t1889*t3859*t4470*t4476 + 9.176826458467173e-131*t2080*t3859*t4470*t4476 - 1.142987391282275e-100*t1889*t3979*t4470*t4476 + 8.996888684771729e-132*t2080*t3979*t4470*t4476 - 8.008332380732404e-146*t2080*t3859*t3979*t4470*t4476 + 2.e8*t4223*var2[0]))))*var4[0];
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
