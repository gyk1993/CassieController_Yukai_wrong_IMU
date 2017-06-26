/*
 * Automatically Generated from Mathematica.
 * Fri 23 Jun 2017 12:39:41 GMT-04:00
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
  double t576;
  double t580;
  double t587;
  double t592;
  double t593;
  double t605;
  double t584;
  double t621;
  double t632;
  double t650;
  double t659;
  double t660;
  double t669;
  double t671;
  double t685;
  double t687;
  double t695;
  double t698;
  double t703;
  double t559;
  double t568;
  double t585;
  double t586;
  double t608;
  double t613;
  double t618;
  double t619;
  double t627;
  double t628;
  double t637;
  double t643;
  double t644;
  double t649;
  double t652;
  double t653;
  double t655;
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
  t576 = -6.529726269561443e-92*t563;
  t580 = 1. + t576;
  t587 = 2.5553329077757057e-46*t557;
  t592 = ArcCos(t587);
  t593 = 0.226893 + t592;
  t605 = Cos(t593);
  t584 = Sqrt(t580);
  t621 = Power(t605,2);
  t632 = Sin(t593);
  t650 = Power(t632,2);
  t659 = Sin(var1[0]);
  t660 = -3.444588759681651e-39*t557;
  t669 = 9.91e7*t584;
  t671 = 2.0442663262205644e-39*t557*t605;
  t685 = 8.16e7*t584*t605;
  t687 = -2.085151652744976e-38*t557*t632;
  t695 = 8.e6*t584*t632;
  t698 = t660 + t669 + t671 + t685 + t687 + t695;
  t703 = Power(t659,2);
  t559 = 3.038801893926869e-39*t557;
  t568 = 1.6328430054426058e-84*t563;
  t585 = 1.6176e6*t584;
  t586 = 2.5006301e7*t580;
  t608 = 2.502181983293971e-39*t557*t605;
  t613 = 2.6049428790737635e-84*t563*t605;
  t618 = -960000.*t584*t605;
  t619 = 3.98936e7*t580*t605;
  t627 = 1.0974119157675743e-84*t563*t621;
  t628 = 1.68064e7*t580*t621;
  t637 = 2.4531195914646776e-40*t557*t632;
  t643 = 6.179628465892636e-85*t563*t632;
  t644 = 9.792e6*t584*t632;
  t649 = 9.46384e6*t580*t632;
  t652 = 1.0974119157675743e-84*t563*t650;
  t653 = 1.68064e7*t580*t650;
  t655 = 1.44e6 + t559 + t568 + t585 + t586 + t608 + t613 + t618 + t619 + t627 + t628 + t637 + t643 + t644 + t649 + t652 + t653;
  p_output1[0]=ArcCos((0.5*(-1.*Sqrt(t412*Power(t698,2)*t703 - 4.*t655*(-1.44e6 - 3.038801893926869e-39*t557 - 1.6031800261342928e-84*t563 - 454276.*t580 - 1.6176e6*t584 - 1.706793730422258e-39*t557*t584 - 2.502181983293971e-39*t557*t605 - 2.640151163119239e-84*t563*t605 + 539200.*t580*t605 + 960000.*t584*t605 - 3.92458249307824e-40*t557*t584*t605 - 1.086964353736276e-84*t563*t621 - 160000.*t580*t621 + 8.340606610979903e-40*t557*t584*t621 - 2.4531195914646776e-40*t557*t632 - 2.5883834932541557e-85*t563*t632 - 5.49984e6*t580*t632 - 9.792e6*t584*t632 - 1.0469709989738621e-38*t557*t584*t632 - 2.131302654384855e-85*t563*t605*t632 + 3.264e6*t580*t605*t632 - 8.425648090150679e-39*t557*t584*t605*t632 - 1.0447562031298307e-86*t563*t650 - 1.66464e7*t580*t650 - 8.340606610979903e-40*t557*t584*t650 + 1.e8*t412*t703)) - 1.*t659*t698*var2[0]))/t655);
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
