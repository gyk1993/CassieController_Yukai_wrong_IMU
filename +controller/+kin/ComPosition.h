/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:51 GMT-04:00
 */

#ifndef COMPOSITION_HH
#define COMPOSITION_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void ComPosition_raw(double *p_output1, const double *var1);

  inline void ComPosition(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ComPosition_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // COMPOSITION_HH
