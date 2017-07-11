/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:00 GMT-04:00
 */

#ifndef LEFTTOEJOINT_HH
#define LEFTTOEJOINT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void LeftToeJoint_raw(double *p_output1, const double *var1);

  inline void LeftToeJoint(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    LeftToeJoint_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LEFTTOEJOINT_HH
