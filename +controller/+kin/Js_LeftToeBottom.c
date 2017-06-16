/*
 * Automatically Generated from Mathematica.
 * Wed 14 Jun 2017 10:54:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftToeBottom.h"

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
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=3;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=1;
  p_output1[36]=5;
  p_output1[37]=6;
  p_output1[38]=7;
  p_output1[39]=8;
  p_output1[40]=9;
  p_output1[41]=10;
  p_output1[42]=11;
  p_output1[43]=12;
  p_output1[44]=13;
  p_output1[45]=14;
  p_output1[46]=2;
  p_output1[47]=4;
  p_output1[48]=5;
  p_output1[49]=6;
  p_output1[50]=7;
  p_output1[51]=8;
  p_output1[52]=9;
  p_output1[53]=10;
  p_output1[54]=11;
  p_output1[55]=12;
  p_output1[56]=13;
  p_output1[57]=14;
  p_output1[58]=3;
  p_output1[59]=4;
  p_output1[60]=5;
  p_output1[61]=6;
  p_output1[62]=7;
  p_output1[63]=8;
  p_output1[64]=9;
  p_output1[65]=10;
  p_output1[66]=11;
  p_output1[67]=12;
  p_output1[68]=13;
  p_output1[69]=14;
}



void Js_LeftToeBottom(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}