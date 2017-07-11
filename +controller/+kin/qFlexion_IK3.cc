/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:12 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
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
  double t3398;
  double t3503;
  double t3724;
  double t3797;
  double t3810;
  double t3811;
  double t3642;
  double t3860;
  double t3926;
  double t3985;
  double t4035;
  double t4037;
  double t4041;
  double t4047;
  double t4071;
  double t4077;
  double t4144;
  double t4145;
  double t4158;
  double t2068;
  double t2447;
  double t3643;
  double t3676;
  double t3837;
  double t3850;
  double t3857;
  double t3859;
  double t3918;
  double t3920;
  double t3963;
  double t3965;
  double t3966;
  double t3979;
  double t3987;
  double t4031;
  double t4032;
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
  t3398 = -6.529726269561443e-92*t2080;
  t3503 = 1. + t3398;
  t3724 = 2.5553329077757057e-46*t1889;
  t3797 = ArcCos(t3724);
  t3810 = 0.226893 + t3797;
  t3811 = Cos(t3810);
  t3642 = Sqrt(t3503);
  t3860 = Power(t3811,2);
  t3926 = Sin(t3810);
  t3985 = Power(t3926,2);
  t4035 = Sin(var1[0]);
  t4037 = -3.444588759681651e-39*t1889;
  t4041 = 9.91e7*t3642;
  t4047 = 2.0442663262205644e-39*t1889*t3811;
  t4071 = 8.16e7*t3642*t3811;
  t4077 = -2.085151652744976e-38*t1889*t3926;
  t4144 = 8.e6*t3642*t3926;
  t4145 = t4037 + t4041 + t4047 + t4071 + t4077 + t4144;
  t4158 = Power(t4035,2);
  t2068 = 3.038801893926869e-39*t1889;
  t2447 = 1.6328430054426058e-84*t2080;
  t3643 = 1.6176e6*t3642;
  t3676 = 2.5006301e7*t3503;
  t3837 = 2.502181983293971e-39*t1889*t3811;
  t3850 = 2.6049428790737635e-84*t2080*t3811;
  t3857 = -960000.*t3642*t3811;
  t3859 = 3.98936e7*t3503*t3811;
  t3918 = 1.0974119157675743e-84*t2080*t3860;
  t3920 = 1.68064e7*t3503*t3860;
  t3963 = 2.4531195914646776e-40*t1889*t3926;
  t3965 = 6.179628465892636e-85*t2080*t3926;
  t3966 = 9.792e6*t3642*t3926;
  t3979 = 9.46384e6*t3503*t3926;
  t3987 = 1.0974119157675743e-84*t2080*t3985;
  t4031 = 1.68064e7*t3503*t3985;
  t4032 = 1.44e6 + t2068 + t2447 + t3643 + t3676 + t3837 + t3850 + t3857 + t3859 + t3918 + t3920 + t3963 + t3965 + t3966 + t3979 + t3987 + t4031;
  p_output1[0]=-1.*ArcCos((0.5*(Sqrt(t38*Power(t4145,2)*t4158 - 4.*t4032*(-1.44e6 - 3.038801893926869e-39*t1889 - 1.6031800261342928e-84*t2080 - 454276.*t3503 - 1.6176e6*t3642 - 1.706793730422258e-39*t1889*t3642 - 2.502181983293971e-39*t1889*t3811 - 2.640151163119239e-84*t2080*t3811 + 539200.*t3503*t3811 + 960000.*t3642*t3811 - 3.92458249307824e-40*t1889*t3642*t3811 - 1.086964353736276e-84*t2080*t3860 - 160000.*t3503*t3860 + 8.340606610979903e-40*t1889*t3642*t3860 - 2.4531195914646776e-40*t1889*t3926 - 2.5883834932541557e-85*t2080*t3926 - 5.49984e6*t3503*t3926 - 9.792e6*t3642*t3926 - 1.0469709989738621e-38*t1889*t3642*t3926 - 2.131302654384855e-85*t2080*t3811*t3926 + 3.264e6*t3503*t3811*t3926 - 8.425648090150679e-39*t1889*t3642*t3811*t3926 - 1.0447562031298307e-86*t2080*t3985 - 1.66464e7*t3503*t3985 - 8.340606610979903e-40*t1889*t3642*t3985 + 1.e8*t38*t4158)) - 1.*t4035*t4145*var2[0]))/t4032);
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "qFlexion_IK3.hh"

namespace SymExpression
{

void qFlexion_IK3_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
