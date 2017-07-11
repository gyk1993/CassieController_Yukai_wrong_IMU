/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "qKnee_IK.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t874;
  t874 = Power(var1[0],2);
  p_output1[0]=-1.*ArcCos(2.5553329077757057e-46*(-3.9172204239607165e45 + 7.389631520540365e45*t874 - 1.*Sqrt(-6.096939283359201e85 + 7.196137048348655e88*t874 - 6.78756814823791e88*Power(var1[0],4))));
}



void qKnee_IK(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
