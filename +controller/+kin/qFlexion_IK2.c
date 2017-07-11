/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:57 GMT-04:00
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
  double t2752;
  double t3071;
  double t3460;
  double t3513;
  double t3524;
  double t3608;
  double t3086;
  double t3725;
  double t3728;
  double t3821;
  double t3879;
  double t3885;
  double t3922;
  double t3926;
  double t3927;
  double t3928;
  double t3952;
  double t3956;
  double t3970;
  double t2148;
  double t2329;
  double t3408;
  double t3426;
  double t3611;
  double t3635;
  double t3653;
  double t3655;
  double t3726;
  double t3727;
  double t3732;
  double t3758;
  double t3759;
  double t3805;
  double t3825;
  double t3833;
  double t3866;
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
  t2752 = -6.529726269561443e-92*t2308;
  t3071 = 1. + t2752;
  t3460 = 2.5553329077757057e-46*t1742;
  t3513 = ArcCos(t3460);
  t3524 = 0.226893 + t3513;
  t3608 = Cos(t3524);
  t3086 = Sqrt(t3071);
  t3725 = Power(t3608,2);
  t3728 = Sin(t3524);
  t3821 = Power(t3728,2);
  t3879 = Sin(var1[0]);
  t3885 = -3.444588759681651e-39*t1742;
  t3922 = 9.91e7*t3086;
  t3926 = 2.0442663262205644e-39*t1742*t3608;
  t3927 = 8.16e7*t3086*t3608;
  t3928 = -2.085151652744976e-38*t1742*t3728;
  t3952 = 8.e6*t3086*t3728;
  t3956 = t3885 + t3922 + t3926 + t3927 + t3928 + t3952;
  t3970 = Power(t3879,2);
  t2148 = 3.038801893926869e-39*t1742;
  t2329 = 1.6328430054426058e-84*t2308;
  t3408 = 1.6176e6*t3086;
  t3426 = 2.5006301e7*t3071;
  t3611 = 2.502181983293971e-39*t1742*t3608;
  t3635 = 2.6049428790737635e-84*t2308*t3608;
  t3653 = -960000.*t3086*t3608;
  t3655 = 3.98936e7*t3071*t3608;
  t3726 = 1.0974119157675743e-84*t2308*t3725;
  t3727 = 1.68064e7*t3071*t3725;
  t3732 = 2.4531195914646776e-40*t1742*t3728;
  t3758 = 6.179628465892636e-85*t2308*t3728;
  t3759 = 9.792e6*t3086*t3728;
  t3805 = 9.46384e6*t3071*t3728;
  t3825 = 1.0974119157675743e-84*t2308*t3821;
  t3833 = 1.68064e7*t3071*t3821;
  t3866 = 1.44e6 + t2148 + t2329 + t3408 + t3426 + t3611 + t3635 + t3653 + t3655 + t3726 + t3727 + t3732 + t3758 + t3759 + t3805 + t3825 + t3833;
  p_output1[0]=ArcCos((0.5*(-1.*Sqrt(Power(t3956,2)*t3970*t423 - 4.*t3866*(-1.44e6 - 3.038801893926869e-39*t1742 - 1.6031800261342928e-84*t2308 - 454276.*t3071 - 1.6176e6*t3086 - 1.706793730422258e-39*t1742*t3086 - 2.502181983293971e-39*t1742*t3608 - 2.640151163119239e-84*t2308*t3608 + 539200.*t3071*t3608 + 960000.*t3086*t3608 - 3.92458249307824e-40*t1742*t3086*t3608 - 1.086964353736276e-84*t2308*t3725 - 160000.*t3071*t3725 + 8.340606610979903e-40*t1742*t3086*t3725 - 2.4531195914646776e-40*t1742*t3728 - 2.5883834932541557e-85*t2308*t3728 - 5.49984e6*t3071*t3728 - 9.792e6*t3086*t3728 - 1.0469709989738621e-38*t1742*t3086*t3728 - 2.131302654384855e-85*t2308*t3608*t3728 + 3.264e6*t3071*t3608*t3728 - 8.425648090150679e-39*t1742*t3086*t3608*t3728 - 1.0447562031298307e-86*t2308*t3821 - 1.66464e7*t3071*t3821 - 8.340606610979903e-40*t1742*t3086*t3821 + 1.e8*t3970*t423)) - 1.*t3879*t3956*var2[0]))/t3866);
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

#include "qFlexion_IK2.hh"

namespace SymExpression
{

void qFlexion_IK2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
