/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:12:57 GMT-04:00
 */

#ifndef LEFTTOEBOTTOM_HH
#define LEFTTOEBOTTOM_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void LeftToeBottom_raw(double *p_output1, const double *var1);

  inline void LeftToeBottom(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    LeftToeBottom_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LEFTTOEBOTTOM_HH
