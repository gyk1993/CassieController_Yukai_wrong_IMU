/*
 * Automatically Generated from Mathematica.
 * Fri 23 Jun 2017 12:39:42 GMT-04:00
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
  double t412;
  double t430;
  double t497;
  double t515;
  double t522;
  double t528;
  double t529;
  double t548;
  double t557;
  double t563;
  double t584;
  double t585;
  double t593;
  double t605;
  double t608;
  double t613;
  double t586;
  double t628;
  double t643;
  double t653;
  double t669;
  double t671;
  double t685;
  double t687;
  double t695;
  double t698;
  double t701;
  double t703;
  double t715;
  double t559;
  double t568;
  double t587;
  double t592;
  double t618;
  double t619;
  double t621;
  double t627;
  double t632;
  double t637;
  double t644;
  double t649;
  double t650;
  double t652;
  double t655;
  double t658;
  double t659;
  t412 = Power(var2[0],2);
  t430 = 7.389631520540365e45*t412;
  t497 = 7.196137048348655e88*t412;
  t515 = Power(var2[0],4);
  t522 = -6.78756814823791e88*t515;
  t528 = -6.096939283359201e85 + t497 + t522;
  t529 = Sqrt(t528);
  t548 = -1.*t529;
  t557 = -3.9172204239607165e45 + t430 + t548;
  t563 = Power(t557,2);
  t584 = -6.529726269561443e-92*t563;
  t585 = 1. + t584;
  t593 = 2.5553329077757057e-46*t557;
  t605 = ArcCos(t593);
  t608 = 0.226893 + t605;
  t613 = Cos(t608);
  t586 = Sqrt(t585);
  t628 = Power(t613,2);
  t643 = Sin(t608);
  t653 = Power(t643,2);
  t669 = Sin(var1[0]);
  t671 = -3.444588759681651e-39*t557;
  t685 = 9.91e7*t586;
  t687 = 2.0442663262205644e-39*t557*t613;
  t695 = 8.16e7*t586*t613;
  t698 = -2.085151652744976e-38*t557*t643;
  t701 = 8.e6*t586*t643;
  t703 = t671 + t685 + t687 + t695 + t698 + t701;
  t715 = Power(t669,2);
  t559 = 3.038801893926869e-39*t557;
  t568 = 1.6328430054426058e-84*t563;
  t587 = 1.6176e6*t586;
  t592 = 2.5006301e7*t585;
  t618 = 2.502181983293971e-39*t557*t613;
  t619 = 2.6049428790737635e-84*t563*t613;
  t621 = -960000.*t586*t613;
  t627 = 3.98936e7*t585*t613;
  t632 = 1.0974119157675743e-84*t563*t628;
  t637 = 1.68064e7*t585*t628;
  t644 = 2.4531195914646776e-40*t557*t643;
  t649 = 6.179628465892636e-85*t563*t643;
  t650 = 9.792e6*t586*t643;
  t652 = 9.46384e6*t585*t643;
  t655 = 1.0974119157675743e-84*t563*t653;
  t658 = 1.68064e7*t585*t653;
  t659 = 1.44e6 + t559 + t568 + t587 + t592 + t618 + t619 + t621 + t627 + t632 + t637 + t644 + t649 + t650 + t652 + t655 + t658;
  p_output1[0]=-1.*ArcCos((0.5*(Sqrt(t412*Power(t703,2)*t715 - 4.*t659*(-1.44e6 - 3.038801893926869e-39*t557 - 1.6031800261342928e-84*t563 - 454276.*t585 - 1.6176e6*t586 - 1.706793730422258e-39*t557*t586 - 2.502181983293971e-39*t557*t613 - 2.640151163119239e-84*t563*t613 + 539200.*t585*t613 + 960000.*t586*t613 - 3.92458249307824e-40*t557*t586*t613 - 1.086964353736276e-84*t563*t628 - 160000.*t585*t628 + 8.340606610979903e-40*t557*t586*t628 - 2.4531195914646776e-40*t557*t643 - 2.5883834932541557e-85*t563*t643 - 5.49984e6*t585*t643 - 9.792e6*t586*t643 - 1.0469709989738621e-38*t557*t586*t643 - 2.131302654384855e-85*t563*t613*t643 + 3.264e6*t585*t613*t643 - 8.425648090150679e-39*t557*t586*t613*t643 - 1.0447562031298307e-86*t563*t653 - 1.66464e7*t585*t653 - 8.340606610979903e-40*t557*t586*t653 + 1.e8*t412*t715)) - 1.*t669*t703*var2[0]))/t659);
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
