/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dqKnee_IK.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1700;
  double t1794;
  double t1795;
  double t1889;
  double t2068;
  t1700 = Power(var1[0],2);
  t1794 = 7.196137048348655e88*t1700;
  t1795 = Power(var1[0],4);
  t1889 = -6.78756814823791e88*t1795;
  t2068 = -6.096939283359201e85 + t1794 + t1889;
  p_output1[0]=(2.5553329077757057e-46*(1.477926304108073e46*var1[0] - (0.5*(1.439227409669731e89*var1[0] - 2.715027259295164e89*Power(var1[0],3)))/Sqrt(t2068))*var2[0])/Sqrt(1. - 6.529726269561443e-92*Power(-3.9172204239607165e45 + 7.389631520540365e45*t1700 - 1.*Sqrt(t2068),2));
}



void dqKnee_IK(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
