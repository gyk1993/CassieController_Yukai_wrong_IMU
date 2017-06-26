/* Include files */

#include "cassie_sim_sfun.h"
#include "c2_cassie_sim.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cassie_sim_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c2_debug_family_names[24] = { "qz", "qy", "qx", "qq", "qaR",
  "qjR", "qsR", "qaL", "qjL", "qsL", "dqq", "dqaR", "dqjR", "dqsR", "dqaL",
  "dqjL", "dqsL", "qp", "dqp", "nargin", "nargout", "outputs", "q", "dq" };

static const char * c2_b_debug_family_names[10] = { "qw", "qx", "qy", "qz",
  "nargin", "nargout", "q", "roll", "pitch", "yaw" };

/* Function Declarations */
static void initialize_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance);
static void initialize_params_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance);
static void enable_c2_cassie_sim(SFc2_cassie_simInstanceStruct *chartInstance);
static void disable_c2_cassie_sim(SFc2_cassie_simInstanceStruct *chartInstance);
static void c2_update_debugger_state_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_cassie_sim(SFc2_cassie_simInstanceStruct *
  chartInstance);
static void set_sim_state_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance, const mxArray *c2_st);
static void finalize_c2_cassie_sim(SFc2_cassie_simInstanceStruct *chartInstance);
static void sf_gateway_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance);
static void mdl_start_c2_cassie_sim(SFc2_cassie_simInstanceStruct *chartInstance);
static void initSimStructsc2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber);
static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData);
static void c2_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_b_dq, const char_T *c2_identifier, real_T c2_y[26]);
static void c2_b_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[26]);
static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static real_T c2_c_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static void c2_d_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[3]);
static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_e_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static void c2_e_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[2]);
static void c2_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_f_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static void c2_f_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[5]);
static void c2_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_g_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static void c2_g_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[4]);
static void c2_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static real_T c2_mpower(SFc2_cassie_simInstanceStruct *chartInstance, real_T
  c2_a);
static void c2_error(SFc2_cassie_simInstanceStruct *chartInstance);
static void c2_b_error(SFc2_cassie_simInstanceStruct *chartInstance);
static const mxArray *c2_h_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static int32_T c2_h_emlrt_marshallIn(SFc2_cassie_simInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_outputs_bus_io(void *chartInstanceVoid, void *c2_pData);
static uint8_T c2_i_emlrt_marshallIn(SFc2_cassie_simInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_cassie_sim, const char_T
  *c2_identifier);
static uint8_T c2_j_emlrt_marshallIn(SFc2_cassie_simInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void init_dsm_address_info(SFc2_cassie_simInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_cassie_simInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc2_cassie_sim(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_cassie_sim = 0U;
}

static void initialize_params_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_cassie_sim(SFc2_cassie_simInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_cassie_sim(SFc2_cassie_simInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_debugger_state_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_cassie_sim(SFc2_cassie_simInstanceStruct *
  chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  uint8_T c2_hoistedGlobal;
  const mxArray *c2_d_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(3, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", *chartInstance->c2_dq, 0, 0U, 1U, 0U,
    1, 26), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", *chartInstance->c2_q, 0, 0U, 1U, 0U,
    1, 26), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_hoistedGlobal = chartInstance->c2_is_active_c2_cassie_sim;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_hoistedGlobal, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T c2_dv0[26];
  int32_T c2_i0;
  real_T c2_dv1[26];
  int32_T c2_i1;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("dq", c2_u, 0)),
                      "dq", c2_dv0);
  for (c2_i0 = 0; c2_i0 < 26; c2_i0++) {
    (*chartInstance->c2_dq)[c2_i0] = c2_dv0[c2_i0];
  }

  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("q", c2_u, 1)),
                      "q", c2_dv1);
  for (c2_i1 = 0; c2_i1 < 26; c2_i1++) {
    (*chartInstance->c2_q)[c2_i1] = c2_dv1[c2_i1];
  }

  chartInstance->c2_is_active_c2_cassie_sim = c2_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c2_cassie_sim", c2_u, 2)),
     "is_active_c2_cassie_sim");
  sf_mex_destroy(&c2_u);
  c2_update_debugger_state_c2_cassie_sim(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_cassie_sim(SFc2_cassie_simInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance)
{
  int32_T c2_i2;
  int32_T c2_i3;
  c2_cassieOutputsBus c2_b_outputs;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i10;
  uint32_T c2_debug_family_var_map[24];
  real_T c2_qz;
  real_T c2_qy;
  real_T c2_qx;
  real_T c2_qq[3];
  real_T c2_qaR[5];
  real_T c2_qjR[3];
  real_T c2_qsR[2];
  real_T c2_qaL[5];
  real_T c2_qjL[3];
  real_T c2_qsL[2];
  real_T c2_dqq[3];
  real_T c2_dqaR[5];
  real_T c2_dqjR[3];
  real_T c2_dqsR[2];
  real_T c2_dqaL[5];
  real_T c2_dqjL[3];
  real_T c2_dqsL[2];
  real_T c2_qp[3];
  real_T c2_dqp[3];
  real_T c2_nargin = 1.0;
  real_T c2_nargout = 2.0;
  real_T c2_b_q[26];
  real_T c2_b_dq[26];
  c2_CassieOutputs *c2_obj;
  c2_CassieOutputs c2_cassieOutputs;
  c2_CassieOutputs *c2_b_obj;
  int32_T c2_i11;
  int32_T c2_i12;
  c2_swFd8ELbXRvNcIjxvdm1NkG c2_data;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  c2_CassieOutputs *c2_c_obj;
  c2_cassieOutputsBus c2_b_data;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  c2_CassieOutputs *c2_d_obj;
  int32_T c2_i29;
  int32_T c2_i30;
  real_T c2_c_q[4];
  uint32_T c2_b_debug_family_var_map[10];
  real_T c2_d_q[4];
  real_T c2_qw;
  real_T c2_b_qx;
  real_T c2_b_qy;
  real_T c2_b_qz;
  real_T c2_b_nargin = 1.0;
  real_T c2_b_nargout = 3.0;
  real_T c2_c_qz;
  real_T c2_c_qy;
  real_T c2_c_qx;
  real_T c2_y;
  real_T c2_x;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_y;
  real_T c2_c_x;
  real_T c2_d_x;
  real_T c2_e_x;
  boolean_T c2_b0;
  boolean_T c2_b1;
  boolean_T c2_p;
  boolean_T c2_b_p;
  real_T c2_f_x;
  real_T c2_g_x;
  real_T c2_d_y;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_e_y;
  real_T c2_f_y;
  real_T c2_j_x;
  c2_CassieOutputs *c2_e_obj;
  int32_T c2_i31;
  int32_T c2_i32;
  real_T c2_f_obj[5];
  c2_CassieOutputs *c2_g_obj;
  int32_T c2_i33;
  int32_T c2_i34;
  real_T c2_h_obj[3];
  c2_CassieOutputs *c2_i_obj;
  real_T c2_j_obj;
  real_T c2_k_obj;
  real_T c2_l_obj;
  real_T c2_m_obj;
  c2_CassieOutputs *c2_n_obj;
  int32_T c2_i35;
  int32_T c2_i36;
  real_T c2_o_obj[5];
  c2_CassieOutputs *c2_p_obj;
  int32_T c2_i37;
  int32_T c2_i38;
  real_T c2_q_obj[3];
  c2_CassieOutputs *c2_r_obj;
  real_T c2_s_obj;
  real_T c2_t_obj;
  real_T c2_u_obj;
  real_T c2_v_obj;
  c2_CassieOutputs *c2_w_obj;
  int32_T c2_i39;
  int32_T c2_i40;
  real_T c2_x_obj[3];
  c2_CassieOutputs *c2_y_obj;
  int32_T c2_i41;
  int32_T c2_i42;
  real_T c2_ab_obj[5];
  c2_CassieOutputs *c2_bb_obj;
  int32_T c2_i43;
  int32_T c2_i44;
  real_T c2_cb_obj[3];
  c2_CassieOutputs *c2_db_obj;
  real_T c2_eb_obj;
  real_T c2_fb_obj;
  real_T c2_gb_obj;
  real_T c2_hb_obj;
  c2_CassieOutputs *c2_ib_obj;
  int32_T c2_i45;
  int32_T c2_i46;
  real_T c2_jb_obj[5];
  c2_CassieOutputs *c2_kb_obj;
  int32_T c2_i47;
  int32_T c2_i48;
  real_T c2_lb_obj[3];
  c2_CassieOutputs *c2_mb_obj;
  real_T c2_nb_obj;
  real_T c2_ob_obj;
  real_T c2_pb_obj;
  real_T c2_qb_obj;
  int32_T c2_i49;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i64;
  int32_T c2_i65;
  int32_T c2_i66;
  int32_T c2_i67;
  int32_T c2_i68;
  int32_T c2_i69;
  int32_T c2_i70;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c2_sfEvent);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c2_sfEvent);
  for (c2_i2 = 0; c2_i2 < 4; c2_i2++) {
    c2_b_outputs.vectorNavOrientation[c2_i2] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[0])[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 3; c2_i3++) {
    c2_b_outputs.vectorNavAngularVelocity[c2_i3] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[32])[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 3; c2_i4++) {
    c2_b_outputs.vectorNavLinearAcceleration[c2_i4] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[56])[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 3; c2_i5++) {
    c2_b_outputs.vectorNavMagneticField[c2_i5] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[80])[c2_i5];
  }

  c2_b_outputs.vectorNavPressure = *(real_T *)&((char_T *)
    chartInstance->c2_outputs)[104];
  c2_b_outputs.vectorNavTemperature = *(real_T *)&((char_T *)
    chartInstance->c2_outputs)[112];
  for (c2_i6 = 0; c2_i6 < 10; c2_i6++) {
    c2_b_outputs.motorPosition[c2_i6] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[120])[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 10; c2_i7++) {
    c2_b_outputs.motorVelocity[c2_i7] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[200])[c2_i7];
  }

  for (c2_i8 = 0; c2_i8 < 6; c2_i8++) {
    c2_b_outputs.jointPosition[c2_i8] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[280])[c2_i8];
  }

  for (c2_i9 = 0; c2_i9 < 6; c2_i9++) {
    c2_b_outputs.jointVelocity[c2_i9] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[328])[c2_i9];
  }

  for (c2_i10 = 0; c2_i10 < 16; c2_i10++) {
    c2_b_outputs.radio[c2_i10] = ((real_T *)&((char_T *)
      chartInstance->c2_outputs)[376])[c2_i10];
  }

  c2_b_outputs.stateOfCharge = *(real_T *)&((char_T *)chartInstance->c2_outputs)
    [504];
  c2_b_outputs.status = *(real_T *)&((char_T *)chartInstance->c2_outputs)[512];
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 24U, 24U, c2_debug_family_names,
    c2_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_qz, 0U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_qy, 1U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_qx, 2U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qq, 3U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qaR, 4U, c2_f_sf_marshallOut,
    c2_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qjR, 5U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qsR, 6U, c2_e_sf_marshallOut,
    c2_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qaL, 7U, c2_f_sf_marshallOut,
    c2_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qjL, 8U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qsL, 9U, c2_e_sf_marshallOut,
    c2_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dqq, 10U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dqaR, 11U, c2_f_sf_marshallOut,
    c2_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dqjR, 12U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dqsR, 13U, c2_e_sf_marshallOut,
    c2_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dqaL, 14U, c2_f_sf_marshallOut,
    c2_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dqjL, 15U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dqsL, 16U, c2_e_sf_marshallOut,
    c2_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qp, 17U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dqp, 18U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargin, 19U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargout, 20U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c2_b_outputs, 21U, c2_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_b_q, 22U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_b_dq, 23U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 8);
  c2_obj = &c2_cassieOutputs;
  c2_b_obj = c2_obj;
  for (c2_i11 = 0; c2_i11 < 4; c2_i11++) {
    c2_data.vectorNavOrientation[c2_i11] = 0.0;
  }

  for (c2_i12 = 0; c2_i12 < 3; c2_i12++) {
    c2_data.vectorNavAngularVelocity[c2_i12] = 0.0;
  }

  for (c2_i13 = 0; c2_i13 < 3; c2_i13++) {
    c2_data.vectorNavLinearAcceleration[c2_i13] = 0.0;
  }

  for (c2_i14 = 0; c2_i14 < 3; c2_i14++) {
    c2_data.vectorNavMagneticField[c2_i14] = 0.0;
  }

  c2_data.vectorNavPressure = 0.0;
  c2_data.vectorNavTemperature = 0.0;
  for (c2_i15 = 0; c2_i15 < 10; c2_i15++) {
    c2_data.motorPosition[c2_i15] = 0.0;
  }

  for (c2_i16 = 0; c2_i16 < 10; c2_i16++) {
    c2_data.motorVelocity[c2_i16] = 0.0;
  }

  for (c2_i17 = 0; c2_i17 < 6; c2_i17++) {
    c2_data.jointPosition[c2_i17] = 0.0;
  }

  for (c2_i18 = 0; c2_i18 < 6; c2_i18++) {
    c2_data.jointVelocity[c2_i18] = 0.0;
  }

  for (c2_i19 = 0; c2_i19 < 16; c2_i19++) {
    c2_data.radio[c2_i19] = 0.0;
  }

  c2_data.stateOfCharge = 1.0;
  c2_data.status = 0.0;
  c2_b_obj->data = c2_data;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 9);
  c2_c_obj = &c2_cassieOutputs;
  c2_b_data = c2_b_outputs;
  for (c2_i20 = 0; c2_i20 < 4; c2_i20++) {
    c2_c_obj->data.vectorNavOrientation[c2_i20] =
      c2_b_data.vectorNavOrientation[c2_i20];
  }

  for (c2_i21 = 0; c2_i21 < 3; c2_i21++) {
    c2_c_obj->data.vectorNavAngularVelocity[c2_i21] =
      c2_b_data.vectorNavAngularVelocity[c2_i21];
  }

  for (c2_i22 = 0; c2_i22 < 3; c2_i22++) {
    c2_c_obj->data.vectorNavLinearAcceleration[c2_i22] =
      c2_b_data.vectorNavLinearAcceleration[c2_i22];
  }

  for (c2_i23 = 0; c2_i23 < 3; c2_i23++) {
    c2_c_obj->data.vectorNavMagneticField[c2_i23] =
      c2_b_data.vectorNavMagneticField[c2_i23];
  }

  c2_c_obj->data.vectorNavPressure = c2_b_data.vectorNavPressure;
  c2_c_obj->data.vectorNavTemperature = c2_b_data.vectorNavTemperature;
  for (c2_i24 = 0; c2_i24 < 10; c2_i24++) {
    c2_c_obj->data.motorPosition[c2_i24] = c2_b_data.motorPosition[c2_i24];
  }

  for (c2_i25 = 0; c2_i25 < 10; c2_i25++) {
    c2_c_obj->data.motorVelocity[c2_i25] = c2_b_data.motorVelocity[c2_i25];
  }

  for (c2_i26 = 0; c2_i26 < 6; c2_i26++) {
    c2_c_obj->data.jointPosition[c2_i26] = c2_b_data.jointPosition[c2_i26];
  }

  for (c2_i27 = 0; c2_i27 < 6; c2_i27++) {
    c2_c_obj->data.jointVelocity[c2_i27] = c2_b_data.jointVelocity[c2_i27];
  }

  for (c2_i28 = 0; c2_i28 < 16; c2_i28++) {
    c2_c_obj->data.radio[c2_i28] = c2_b_data.radio[c2_i28];
  }

  c2_c_obj->data.stateOfCharge = c2_b_data.stateOfCharge;
  c2_c_obj->data.status = c2_b_data.status;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 12);
  c2_d_obj = &c2_cassieOutputs;
  for (c2_i29 = 0; c2_i29 < 4; c2_i29++) {
    c2_c_q[c2_i29] = c2_d_obj->data.vectorNavOrientation[c2_i29];
  }

  for (c2_i30 = 0; c2_i30 < 4; c2_i30++) {
    c2_d_q[c2_i30] = c2_c_q[c2_i30];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 10U, 10U, c2_b_debug_family_names,
    c2_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_qw, 0U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_b_qx, 1U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_b_qy, 2U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_b_qz, 3U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_b_nargin, 4U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_b_nargout, 5U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_d_q, 6U, c2_g_sf_marshallOut,
    c2_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_c_qz, 7U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_c_qy, 8U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_c_qx, 9U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  CV_SCRIPT_FCN(0, 0);
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 4);
  c2_qw = c2_d_q[0];
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 4);
  c2_b_qx = c2_d_q[1];
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 4);
  c2_b_qy = c2_d_q[2];
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 4);
  c2_b_qz = c2_d_q[3];
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 5);
  c2_y = -2.0 * (c2_b_qx * c2_b_qz - c2_qw * c2_b_qy);
  c2_x = ((c2_mpower(chartInstance, c2_qw) - c2_mpower(chartInstance, c2_b_qx))
          - c2_mpower(chartInstance, c2_b_qy)) + c2_mpower(chartInstance,
    c2_b_qz);
  c2_b_x = c2_y;
  c2_b_y = c2_x;
  c2_c_y = c2_b_x;
  c2_c_x = c2_b_y;
  c2_c_qz = muDoubleScalarAtan2(c2_c_y, c2_c_x);
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 6);
  c2_d_x = 2.0 * (c2_b_qy * c2_b_qz + c2_qw * c2_b_qx);
  c2_c_qy = c2_d_x;
  c2_e_x = c2_c_qy;
  c2_b0 = (c2_e_x < -1.0);
  c2_b1 = (c2_e_x > 1.0);
  c2_p = (c2_b0 || c2_b1);
  c2_b_p = c2_p;
  if (c2_b_p) {
    c2_b_error(chartInstance);
  }

  c2_f_x = c2_c_qy;
  c2_c_qy = c2_f_x;
  c2_g_x = c2_c_qy;
  c2_c_qy = c2_g_x;
  c2_c_qy = muDoubleScalarAsin(c2_c_qy);
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 7);
  c2_d_y = -2.0 * (c2_b_qx * c2_b_qy - c2_qw * c2_b_qz);
  c2_h_x = ((c2_mpower(chartInstance, c2_qw) - c2_mpower(chartInstance, c2_b_qx))
            + c2_mpower(chartInstance, c2_b_qy)) - c2_mpower(chartInstance,
    c2_b_qz);
  c2_i_x = c2_d_y;
  c2_e_y = c2_h_x;
  c2_f_y = c2_i_x;
  c2_j_x = c2_e_y;
  c2_c_qx = muDoubleScalarAtan2(c2_f_y, c2_j_x);
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, -7);
  _SFD_SYMBOL_SCOPE_POP();
  c2_qz = c2_c_qz;
  c2_qy = c2_c_qy;
  c2_qx = c2_c_qx;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 13);
  c2_qq[0] = c2_qx;
  c2_qq[1] = c2_qy;
  c2_qq[2] = c2_qz;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 14);
  c2_e_obj = &c2_cassieOutputs;
  for (c2_i31 = 0; c2_i31 < 5; c2_i31++) {
    c2_f_obj[c2_i31] = c2_e_obj->data.motorPosition[c2_i31 + 5];
  }

  for (c2_i32 = 0; c2_i32 < 5; c2_i32++) {
    c2_qaR[c2_i32] = c2_f_obj[c2_i32];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 15);
  c2_g_obj = &c2_cassieOutputs;
  for (c2_i33 = 0; c2_i33 < 3; c2_i33++) {
    c2_h_obj[c2_i33] = c2_g_obj->data.jointPosition[c2_i33 + 3];
  }

  for (c2_i34 = 0; c2_i34 < 3; c2_i34++) {
    c2_qjR[c2_i34] = c2_h_obj[c2_i34];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 16);
  c2_i_obj = &c2_cassieOutputs;
  c2_j_obj = c2_i_obj->data.jointPosition[3];
  c2_k_obj = c2_i_obj->data.jointPosition[4];
  c2_l_obj = c2_i_obj->data.motorPosition[8];
  c2_m_obj = c2_i_obj->data.jointPosition[3];
  c2_qsR[0] = c2_j_obj;
  c2_qsR[1] = ((c2_k_obj + c2_l_obj) + c2_m_obj) - 0.22689280275926285;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 17);
  c2_n_obj = &c2_cassieOutputs;
  for (c2_i35 = 0; c2_i35 < 5; c2_i35++) {
    c2_o_obj[c2_i35] = c2_n_obj->data.motorPosition[c2_i35];
  }

  for (c2_i36 = 0; c2_i36 < 5; c2_i36++) {
    c2_qaL[c2_i36] = c2_o_obj[c2_i36];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 18);
  c2_p_obj = &c2_cassieOutputs;
  for (c2_i37 = 0; c2_i37 < 3; c2_i37++) {
    c2_q_obj[c2_i37] = c2_p_obj->data.jointPosition[c2_i37];
  }

  for (c2_i38 = 0; c2_i38 < 3; c2_i38++) {
    c2_qjL[c2_i38] = c2_q_obj[c2_i38];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 19);
  c2_r_obj = &c2_cassieOutputs;
  c2_s_obj = c2_r_obj->data.jointPosition[0];
  c2_t_obj = c2_r_obj->data.jointPosition[1];
  c2_u_obj = c2_r_obj->data.motorPosition[3];
  c2_v_obj = c2_r_obj->data.jointPosition[0];
  c2_qsL[0] = c2_s_obj;
  c2_qsL[1] = ((c2_t_obj + c2_u_obj) + c2_v_obj) - 0.22689280275926285;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 21);
  c2_w_obj = &c2_cassieOutputs;
  for (c2_i39 = 0; c2_i39 < 3; c2_i39++) {
    c2_x_obj[c2_i39] = c2_w_obj->data.vectorNavAngularVelocity[c2_i39];
  }

  for (c2_i40 = 0; c2_i40 < 3; c2_i40++) {
    c2_dqq[c2_i40] = c2_x_obj[c2_i40];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 22);
  c2_y_obj = &c2_cassieOutputs;
  for (c2_i41 = 0; c2_i41 < 5; c2_i41++) {
    c2_ab_obj[c2_i41] = c2_y_obj->data.motorVelocity[c2_i41 + 5];
  }

  for (c2_i42 = 0; c2_i42 < 5; c2_i42++) {
    c2_dqaR[c2_i42] = c2_ab_obj[c2_i42];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 23);
  c2_bb_obj = &c2_cassieOutputs;
  for (c2_i43 = 0; c2_i43 < 3; c2_i43++) {
    c2_cb_obj[c2_i43] = c2_bb_obj->data.jointVelocity[c2_i43 + 3];
  }

  for (c2_i44 = 0; c2_i44 < 3; c2_i44++) {
    c2_dqjR[c2_i44] = c2_cb_obj[c2_i44];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 24);
  c2_db_obj = &c2_cassieOutputs;
  c2_eb_obj = c2_db_obj->data.jointVelocity[3];
  c2_fb_obj = c2_db_obj->data.jointVelocity[4];
  c2_gb_obj = c2_db_obj->data.motorVelocity[8];
  c2_hb_obj = c2_db_obj->data.jointVelocity[3];
  c2_dqsR[0] = c2_eb_obj;
  c2_dqsR[1] = (c2_fb_obj + c2_gb_obj) + c2_hb_obj;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 25);
  c2_ib_obj = &c2_cassieOutputs;
  for (c2_i45 = 0; c2_i45 < 5; c2_i45++) {
    c2_jb_obj[c2_i45] = c2_ib_obj->data.motorVelocity[c2_i45];
  }

  for (c2_i46 = 0; c2_i46 < 5; c2_i46++) {
    c2_dqaL[c2_i46] = c2_jb_obj[c2_i46];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 26);
  c2_kb_obj = &c2_cassieOutputs;
  for (c2_i47 = 0; c2_i47 < 3; c2_i47++) {
    c2_lb_obj[c2_i47] = c2_kb_obj->data.jointVelocity[c2_i47];
  }

  for (c2_i48 = 0; c2_i48 < 3; c2_i48++) {
    c2_dqjL[c2_i48] = c2_lb_obj[c2_i48];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 27);
  c2_mb_obj = &c2_cassieOutputs;
  c2_nb_obj = c2_mb_obj->data.jointVelocity[0];
  c2_ob_obj = c2_mb_obj->data.jointVelocity[1];
  c2_pb_obj = c2_mb_obj->data.motorVelocity[3];
  c2_qb_obj = c2_mb_obj->data.jointVelocity[0];
  c2_dqsL[0] = c2_nb_obj;
  c2_dqsL[1] = (c2_ob_obj + c2_pb_obj) + c2_qb_obj;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 30);
  for (c2_i49 = 0; c2_i49 < 3; c2_i49++) {
    c2_qp[c2_i49] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 31);
  for (c2_i50 = 0; c2_i50 < 3; c2_i50++) {
    c2_dqp[c2_i50] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 32);
  for (c2_i51 = 0; c2_i51 < 3; c2_i51++) {
    c2_b_q[c2_i51] = c2_qp[c2_i51];
  }

  for (c2_i52 = 0; c2_i52 < 3; c2_i52++) {
    c2_b_q[c2_i52 + 3] = c2_qq[c2_i52];
  }

  for (c2_i53 = 0; c2_i53 < 5; c2_i53++) {
    c2_b_q[c2_i53 + 6] = c2_qaL[c2_i53];
  }

  for (c2_i54 = 0; c2_i54 < 3; c2_i54++) {
    c2_b_q[c2_i54 + 11] = c2_qjL[c2_i54];
  }

  for (c2_i55 = 0; c2_i55 < 2; c2_i55++) {
    c2_b_q[c2_i55 + 14] = c2_qsL[c2_i55];
  }

  for (c2_i56 = 0; c2_i56 < 5; c2_i56++) {
    c2_b_q[c2_i56 + 16] = c2_qaR[c2_i56];
  }

  for (c2_i57 = 0; c2_i57 < 3; c2_i57++) {
    c2_b_q[c2_i57 + 21] = c2_qjR[c2_i57];
  }

  for (c2_i58 = 0; c2_i58 < 2; c2_i58++) {
    c2_b_q[c2_i58 + 24] = c2_qsR[c2_i58];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 33);
  for (c2_i59 = 0; c2_i59 < 3; c2_i59++) {
    c2_b_dq[c2_i59] = c2_dqp[c2_i59];
  }

  for (c2_i60 = 0; c2_i60 < 3; c2_i60++) {
    c2_b_dq[c2_i60 + 3] = c2_dqq[c2_i60];
  }

  for (c2_i61 = 0; c2_i61 < 5; c2_i61++) {
    c2_b_dq[c2_i61 + 6] = c2_dqaL[c2_i61];
  }

  for (c2_i62 = 0; c2_i62 < 3; c2_i62++) {
    c2_b_dq[c2_i62 + 11] = c2_dqjL[c2_i62];
  }

  for (c2_i63 = 0; c2_i63 < 2; c2_i63++) {
    c2_b_dq[c2_i63 + 14] = c2_dqsL[c2_i63];
  }

  for (c2_i64 = 0; c2_i64 < 5; c2_i64++) {
    c2_b_dq[c2_i64 + 16] = c2_dqaR[c2_i64];
  }

  for (c2_i65 = 0; c2_i65 < 3; c2_i65++) {
    c2_b_dq[c2_i65 + 21] = c2_dqjR[c2_i65];
  }

  for (c2_i66 = 0; c2_i66 < 2; c2_i66++) {
    c2_b_dq[c2_i66 + 24] = c2_dqsR[c2_i66];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, -33);
  _SFD_SYMBOL_SCOPE_POP();
  for (c2_i67 = 0; c2_i67 < 26; c2_i67++) {
    (*chartInstance->c2_q)[c2_i67] = c2_b_q[c2_i67];
  }

  for (c2_i68 = 0; c2_i68 < 26; c2_i68++) {
    (*chartInstance->c2_dq)[c2_i68] = c2_b_dq[c2_i68];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c2_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_cassie_simMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c2_i69 = 0; c2_i69 < 26; c2_i69++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c2_q)[c2_i69], 1U, 1U, 0U,
                          chartInstance->c2_sfEvent, false);
  }

  for (c2_i70 = 0; c2_i70 < 26; c2_i70++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c2_dq)[c2_i70], 2U, 1U, 0U,
                          chartInstance->c2_sfEvent, false);
  }
}

static void mdl_start_c2_cassie_sim(SFc2_cassie_simInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc2_cassie_sim(SFc2_cassie_simInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber)
{
  (void)c2_machineNumber;
  _SFD_SCRIPT_TRANSLATION(c2_chartNumber, c2_instanceNumber, 0U,
    sf_debug_get_script_id(
    "D:\\Graduate\\robots\\GitHub\\CassieController_Yukai\\utils\\Quaternion_to_Euler.m"));
}

static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i71;
  const mxArray *c2_y = NULL;
  real_T c2_u[26];
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i71 = 0; c2_i71 < 26; c2_i71++) {
    c2_u[c2_i71] = (*(real_T (*)[26])c2_inData)[c2_i71];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 26), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static void c2_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_b_dq, const char_T *c2_identifier, real_T c2_y[26])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_dq), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_dq);
}

static void c2_b_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[26])
{
  real_T c2_dv2[26];
  int32_T c2_i72;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv2, 1, 0, 0U, 1, 0U, 1, 26);
  for (c2_i72 = 0; c2_i72 < 26; c2_i72++) {
    c2_y[c2_i72] = c2_dv2[c2_i72];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_dq;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[26];
  int32_T c2_i73;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_b_dq = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_dq), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_dq);
  for (c2_i73 = 0; c2_i73 < 26; c2_i73++) {
    (*(real_T (*)[26])c2_outData)[c2_i73] = c2_y[c2_i73];
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  c2_cassieOutputsBus c2_u;
  const mxArray *c2_y = NULL;
  int32_T c2_i74;
  const mxArray *c2_b_y = NULL;
  real_T c2_b_u[4];
  int32_T c2_i75;
  const mxArray *c2_c_y = NULL;
  real_T c2_c_u[3];
  int32_T c2_i76;
  const mxArray *c2_d_y = NULL;
  int32_T c2_i77;
  const mxArray *c2_e_y = NULL;
  real_T c2_d_u;
  const mxArray *c2_f_y = NULL;
  real_T c2_e_u;
  const mxArray *c2_g_y = NULL;
  int32_T c2_i78;
  const mxArray *c2_h_y = NULL;
  real_T c2_f_u[10];
  int32_T c2_i79;
  const mxArray *c2_i_y = NULL;
  int32_T c2_i80;
  const mxArray *c2_j_y = NULL;
  real_T c2_g_u[6];
  int32_T c2_i81;
  const mxArray *c2_k_y = NULL;
  int32_T c2_i82;
  const mxArray *c2_l_y = NULL;
  real_T c2_h_u[16];
  real_T c2_i_u;
  const mxArray *c2_m_y = NULL;
  real_T c2_j_u;
  const mxArray *c2_n_y = NULL;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_u = *(c2_cassieOutputsBus *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createstruct("structure", 2, 1, 1), false);
  for (c2_i74 = 0; c2_i74 < 4; c2_i74++) {
    c2_b_u[c2_i74] = c2_u.vectorNavOrientation[c2_i74];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_u, 0, 0U, 1U, 0U, 2, 4, 1),
                false);
  sf_mex_addfield(c2_y, c2_b_y, "vectorNavOrientation", "vectorNavOrientation",
                  0);
  for (c2_i75 = 0; c2_i75 < 3; c2_i75++) {
    c2_c_u[c2_i75] = c2_u.vectorNavAngularVelocity[c2_i75];
  }

  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_c_u, 0, 0U, 1U, 0U, 2, 3, 1),
                false);
  sf_mex_addfield(c2_y, c2_c_y, "vectorNavAngularVelocity",
                  "vectorNavAngularVelocity", 0);
  for (c2_i76 = 0; c2_i76 < 3; c2_i76++) {
    c2_c_u[c2_i76] = c2_u.vectorNavLinearAcceleration[c2_i76];
  }

  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_c_u, 0, 0U, 1U, 0U, 2, 3, 1),
                false);
  sf_mex_addfield(c2_y, c2_d_y, "vectorNavLinearAcceleration",
                  "vectorNavLinearAcceleration", 0);
  for (c2_i77 = 0; c2_i77 < 3; c2_i77++) {
    c2_c_u[c2_i77] = c2_u.vectorNavMagneticField[c2_i77];
  }

  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_c_u, 0, 0U, 1U, 0U, 2, 3, 1),
                false);
  sf_mex_addfield(c2_y, c2_e_y, "vectorNavMagneticField",
                  "vectorNavMagneticField", 0);
  c2_d_u = c2_u.vectorNavPressure;
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_addfield(c2_y, c2_f_y, "vectorNavPressure", "vectorNavPressure", 0);
  c2_e_u = c2_u.vectorNavTemperature;
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_e_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_addfield(c2_y, c2_g_y, "vectorNavTemperature", "vectorNavTemperature",
                  0);
  for (c2_i78 = 0; c2_i78 < 10; c2_i78++) {
    c2_f_u[c2_i78] = c2_u.motorPosition[c2_i78];
  }

  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_f_u, 0, 0U, 1U, 0U, 2, 10, 1),
                false);
  sf_mex_addfield(c2_y, c2_h_y, "motorPosition", "motorPosition", 0);
  for (c2_i79 = 0; c2_i79 < 10; c2_i79++) {
    c2_f_u[c2_i79] = c2_u.motorVelocity[c2_i79];
  }

  c2_i_y = NULL;
  sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_f_u, 0, 0U, 1U, 0U, 2, 10, 1),
                false);
  sf_mex_addfield(c2_y, c2_i_y, "motorVelocity", "motorVelocity", 0);
  for (c2_i80 = 0; c2_i80 < 6; c2_i80++) {
    c2_g_u[c2_i80] = c2_u.jointPosition[c2_i80];
  }

  c2_j_y = NULL;
  sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_g_u, 0, 0U, 1U, 0U, 2, 6, 1),
                false);
  sf_mex_addfield(c2_y, c2_j_y, "jointPosition", "jointPosition", 0);
  for (c2_i81 = 0; c2_i81 < 6; c2_i81++) {
    c2_g_u[c2_i81] = c2_u.jointVelocity[c2_i81];
  }

  c2_k_y = NULL;
  sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_g_u, 0, 0U, 1U, 0U, 2, 6, 1),
                false);
  sf_mex_addfield(c2_y, c2_k_y, "jointVelocity", "jointVelocity", 0);
  for (c2_i82 = 0; c2_i82 < 16; c2_i82++) {
    c2_h_u[c2_i82] = c2_u.radio[c2_i82];
  }

  c2_l_y = NULL;
  sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_h_u, 0, 0U, 1U, 0U, 2, 16, 1),
                false);
  sf_mex_addfield(c2_y, c2_l_y, "radio", "radio", 0);
  c2_i_u = c2_u.stateOfCharge;
  c2_m_y = NULL;
  sf_mex_assign(&c2_m_y, sf_mex_create("y", &c2_i_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_addfield(c2_y, c2_m_y, "stateOfCharge", "stateOfCharge", 0);
  c2_j_u = c2_u.status;
  c2_n_y = NULL;
  sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_j_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_addfield(c2_y, c2_n_y, "status", "status", 0);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  real_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_u = *(real_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static real_T c2_c_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d0;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d0, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_nargout;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_nargout = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nargout), &c2_thisId);
  sf_mex_destroy(&c2_nargout);
  *(real_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i83;
  const mxArray *c2_y = NULL;
  real_T c2_u[3];
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i83 = 0; c2_i83 < 3; c2_i83++) {
    c2_u[c2_i83] = (*(real_T (*)[3])c2_inData)[c2_i83];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static void c2_d_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[3])
{
  real_T c2_dv3[3];
  int32_T c2_i84;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv3, 1, 0, 0U, 1, 0U, 1, 3);
  for (c2_i84 = 0; c2_i84 < 3; c2_i84++) {
    c2_y[c2_i84] = c2_dv3[c2_i84];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_dqp;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[3];
  int32_T c2_i85;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_dqp = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_dqp), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_dqp);
  for (c2_i85 = 0; c2_i85 < 3; c2_i85++) {
    (*(real_T (*)[3])c2_outData)[c2_i85] = c2_y[c2_i85];
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_e_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i86;
  const mxArray *c2_y = NULL;
  real_T c2_u[2];
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i86 = 0; c2_i86 < 2; c2_i86++) {
    c2_u[c2_i86] = (*(real_T (*)[2])c2_inData)[c2_i86];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static void c2_e_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[2])
{
  real_T c2_dv4[2];
  int32_T c2_i87;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv4, 1, 0, 0U, 1, 0U, 1, 2);
  for (c2_i87 = 0; c2_i87 < 2; c2_i87++) {
    c2_y[c2_i87] = c2_dv4[c2_i87];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_dqsL;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[2];
  int32_T c2_i88;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_dqsL = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_dqsL), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_dqsL);
  for (c2_i88 = 0; c2_i88 < 2; c2_i88++) {
    (*(real_T (*)[2])c2_outData)[c2_i88] = c2_y[c2_i88];
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_f_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i89;
  const mxArray *c2_y = NULL;
  real_T c2_u[5];
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i89 = 0; c2_i89 < 5; c2_i89++) {
    c2_u[c2_i89] = (*(real_T (*)[5])c2_inData)[c2_i89];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 5), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static void c2_f_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[5])
{
  real_T c2_dv5[5];
  int32_T c2_i90;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv5, 1, 0, 0U, 1, 0U, 1, 5);
  for (c2_i90 = 0; c2_i90 < 5; c2_i90++) {
    c2_y[c2_i90] = c2_dv5[c2_i90];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_dqaL;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[5];
  int32_T c2_i91;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_dqaL = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_dqaL), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_dqaL);
  for (c2_i91 = 0; c2_i91 < 5; c2_i91++) {
    (*(real_T (*)[5])c2_outData)[c2_i91] = c2_y[c2_i91];
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_g_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i92;
  const mxArray *c2_y = NULL;
  real_T c2_u[4];
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i92 = 0; c2_i92 < 4; c2_i92++) {
    c2_u[c2_i92] = (*(real_T (*)[4])c2_inData)[c2_i92];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static void c2_g_emlrt_marshallIn(SFc2_cassie_simInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[4])
{
  real_T c2_dv6[4];
  int32_T c2_i93;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv6, 1, 0, 0U, 1, 0U, 1, 4);
  for (c2_i93 = 0; c2_i93 < 4; c2_i93++) {
    c2_y[c2_i93] = c2_dv6[c2_i93];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_q;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[4];
  int32_T c2_i94;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_b_q = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_q), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_q);
  for (c2_i94 = 0; c2_i94 < 4; c2_i94++) {
    (*(real_T (*)[4])c2_outData)[c2_i94] = c2_y[c2_i94];
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

const mxArray *sf_c2_cassie_sim_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  const char * c2_data[5] = {
    "789ce554d14ec23014ed0c127dc098187de6d127862406e21388c08c125488a0c490328a34b42b6e2d4af4c13ff0537cf54bf4775c618cb12c60983e79b3663b"
    "bd3df7de939e0c28a76560c796bd3ea200d80fd8b0d71a98c4ba8315674f71f72320e6e0377be9cce0e8894f9206a4084ca3c32836a0c16ba3010226b21819a2",
    "ce38d3c504d53045e7cc03346c035af4a45c2053f23bdf437abf2a28307b96db06102f18eb4982999e884fcf34a67ab63dbcec029e3c1ff3f124ce43cbc2a822"
    "f840702b64ffd725fdcf7c3c899bf9bb9323b564c28e801ca9266b336ea95546d105d4fbf01ea99309e3554c05819c99f154f2209d3c4ca5d4b9d91303778e8c",
    "678e68c01c8a678ecd99ae9767ed3317821fb6ffaff135b0f81e76c1fc3d487ca519fd879c48a3e361ba3ed4eb05bd6b8c9c7afb9e7a4a403de079af727e55bf"
    "2dd3b9e3e3497c296d661a98192dce5a054190e9d6cb2ca917f5d593b8c3449ba09ff9bfe2e34bdc2c04f9bf84b926da8ec1f3f62fca64c49eb47523fa10ab82",
    "6362a9014a1234847fb25fef95ffe1ff3ddf3d484c44a3d6c02457a5a8c16f1bb05b7ebc2e96fedeffdfe2328ffc",
    "" };

  c2_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c2_data, 1736U, &c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static real_T c2_mpower(SFc2_cassie_simInstanceStruct *chartInstance, real_T
  c2_a)
{
  real_T c2_c;
  real_T c2_b_a;
  real_T c2_c_a;
  real_T c2_x;
  real_T c2_d_a;
  boolean_T c2_p;
  c2_b_a = c2_a;
  c2_c_a = c2_b_a;
  c2_x = c2_c_a;
  c2_d_a = c2_x;
  c2_c = c2_d_a * c2_d_a;
  c2_p = false;
  if (c2_p) {
    c2_error(chartInstance);
  }

  return c2_c;
}

static void c2_error(SFc2_cassie_simInstanceStruct *chartInstance)
{
  const mxArray *c2_y = NULL;
  static char_T c2_cv0[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv0, 10, 0U, 1U, 0U, 2, 1, 31),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c2_y));
}

static void c2_b_error(SFc2_cassie_simInstanceStruct *chartInstance)
{
  const mxArray *c2_y = NULL;
  static char_T c2_cv1[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c2_b_y = NULL;
  static char_T c2_cv2[4] = { 'a', 's', 'i', 'n' };

  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 4),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    2U, 14, c2_y, 14, c2_b_y));
}

static const mxArray *c2_h_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_u = *(int32_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static int32_T c2_h_emlrt_marshallIn(SFc2_cassie_simInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  int32_T c2_y;
  int32_T c2_i95;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_i95, 1, 6, 0U, 0, 0U, 0);
  c2_y = c2_i95;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_sfEvent;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  int32_T c2_y;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_b_sfEvent = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_sfEvent),
    &c2_thisId);
  sf_mex_destroy(&c2_b_sfEvent);
  *(int32_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_outputs_bus_io(void *chartInstanceVoid, void *c2_pData)
{
  const mxArray *c2_mxVal;
  int32_T c2_i96;
  int32_T c2_i97;
  c2_cassieOutputsBus c2_tmp;
  int32_T c2_i98;
  int32_T c2_i99;
  int32_T c2_i100;
  int32_T c2_i101;
  int32_T c2_i102;
  int32_T c2_i103;
  int32_T c2_i104;
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)chartInstanceVoid;
  c2_mxVal = NULL;
  c2_mxVal = NULL;
  for (c2_i96 = 0; c2_i96 < 4; c2_i96++) {
    c2_tmp.vectorNavOrientation[c2_i96] = ((real_T *)&((char_T *)
      (c2_cassieOutputsBus *)c2_pData)[0])[c2_i96];
  }

  for (c2_i97 = 0; c2_i97 < 3; c2_i97++) {
    c2_tmp.vectorNavAngularVelocity[c2_i97] = ((real_T *)&((char_T *)
      (c2_cassieOutputsBus *)c2_pData)[32])[c2_i97];
  }

  for (c2_i98 = 0; c2_i98 < 3; c2_i98++) {
    c2_tmp.vectorNavLinearAcceleration[c2_i98] = ((real_T *)&((char_T *)
      (c2_cassieOutputsBus *)c2_pData)[56])[c2_i98];
  }

  for (c2_i99 = 0; c2_i99 < 3; c2_i99++) {
    c2_tmp.vectorNavMagneticField[c2_i99] = ((real_T *)&((char_T *)
      (c2_cassieOutputsBus *)c2_pData)[80])[c2_i99];
  }

  c2_tmp.vectorNavPressure = *(real_T *)&((char_T *)(c2_cassieOutputsBus *)
    c2_pData)[104];
  c2_tmp.vectorNavTemperature = *(real_T *)&((char_T *)(c2_cassieOutputsBus *)
    c2_pData)[112];
  for (c2_i100 = 0; c2_i100 < 10; c2_i100++) {
    c2_tmp.motorPosition[c2_i100] = ((real_T *)&((char_T *)(c2_cassieOutputsBus *)
      c2_pData)[120])[c2_i100];
  }

  for (c2_i101 = 0; c2_i101 < 10; c2_i101++) {
    c2_tmp.motorVelocity[c2_i101] = ((real_T *)&((char_T *)(c2_cassieOutputsBus *)
      c2_pData)[200])[c2_i101];
  }

  for (c2_i102 = 0; c2_i102 < 6; c2_i102++) {
    c2_tmp.jointPosition[c2_i102] = ((real_T *)&((char_T *)(c2_cassieOutputsBus *)
      c2_pData)[280])[c2_i102];
  }

  for (c2_i103 = 0; c2_i103 < 6; c2_i103++) {
    c2_tmp.jointVelocity[c2_i103] = ((real_T *)&((char_T *)(c2_cassieOutputsBus *)
      c2_pData)[328])[c2_i103];
  }

  for (c2_i104 = 0; c2_i104 < 16; c2_i104++) {
    c2_tmp.radio[c2_i104] = ((real_T *)&((char_T *)(c2_cassieOutputsBus *)
      c2_pData)[376])[c2_i104];
  }

  c2_tmp.stateOfCharge = *(real_T *)&((char_T *)(c2_cassieOutputsBus *)c2_pData)
    [504];
  c2_tmp.status = *(real_T *)&((char_T *)(c2_cassieOutputsBus *)c2_pData)[512];
  sf_mex_assign(&c2_mxVal, c2_b_sf_marshallOut(chartInstance, &c2_tmp), false);
  return c2_mxVal;
}

static uint8_T c2_i_emlrt_marshallIn(SFc2_cassie_simInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_cassie_sim, const char_T
  *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_cassie_sim), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_cassie_sim);
  return c2_y;
}

static uint8_T c2_j_emlrt_marshallIn(SFc2_cassie_simInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_u0;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_u0, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void init_dsm_address_info(SFc2_cassie_simInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_cassie_simInstanceStruct
  *chartInstance)
{
  chartInstance->c2_outputs = (c2_cassieOutputsBus *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c2_q = (real_T (*)[26])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_dq = (real_T (*)[26])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c2_cassie_sim_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3141320286U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1984756907U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3550631934U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1321969570U);
}

mxArray* sf_c2_cassie_sim_get_post_codegen_info(void);
mxArray *sf_c2_cassie_sim_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("3eJKngvXahckVl2Oge1P2D");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(13));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(26);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(26);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c2_cassie_sim_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c2_cassie_sim_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_cassie_sim_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("pre");
  mxArray *fallbackReason = mxCreateString("hasBreakpoints");
  mxArray *hiddenFallbackType = mxCreateString("none");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_cassie_sim_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c2_cassie_sim_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c2_cassie_sim(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[6],T\"dq\",},{M[1],M[5],T\"q\",},{M[8],M[0],T\"is_active_c2_cassie_sim\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_cassie_sim_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_cassie_simInstanceStruct *chartInstance =
      (SFc2_cassie_simInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _cassie_simMachineNumber_,
           2,
           1,
           1,
           0,
           3,
           0,
           0,
           0,
           0,
           1,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_cassie_simMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_cassie_simMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _cassie_simMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"outputs");
          _SFD_SET_DATA_PROPS(1,2,0,1,"q");
          _SFD_SET_DATA_PROPS(2,2,0,1,"dq");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,1148);
        _SFD_CV_INIT_SCRIPT(0,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"Quaternion_to_Euler",0,-1,407);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_STRUCT,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_outputs_bus_io,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 26U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)
            c2_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 26U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)
            c2_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _cassie_simMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_cassie_simInstanceStruct *chartInstance =
      (SFc2_cassie_simInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c2_outputs);
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c2_q);
        _SFD_SET_DATA_VALUE_PTR(2U, *chartInstance->c2_dq);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sz0IFZ7llEgpaVW6URmymPE";
}

static void sf_opaque_initialize_c2_cassie_sim(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_cassie_simInstanceStruct*) chartInstanceVar
    )->S,0);
  initialize_params_c2_cassie_sim((SFc2_cassie_simInstanceStruct*)
    chartInstanceVar);
  initialize_c2_cassie_sim((SFc2_cassie_simInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_cassie_sim(void *chartInstanceVar)
{
  enable_c2_cassie_sim((SFc2_cassie_simInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_cassie_sim(void *chartInstanceVar)
{
  disable_c2_cassie_sim((SFc2_cassie_simInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_cassie_sim(void *chartInstanceVar)
{
  sf_gateway_c2_cassie_sim((SFc2_cassie_simInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_cassie_sim(SimStruct* S)
{
  return get_sim_state_c2_cassie_sim((SFc2_cassie_simInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_cassie_sim(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c2_cassie_sim((SFc2_cassie_simInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c2_cassie_sim(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_cassie_simInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_cassie_sim_optimization_info();
    }

    finalize_c2_cassie_sim((SFc2_cassie_simInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_cassie_sim((SFc2_cassie_simInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_cassie_sim(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_cassie_sim((SFc2_cassie_simInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c2_cassie_sim(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_cassie_sim_optimization_info(sim_mode_is_rtw_gen
      (S), sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,2,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 2);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,2);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,2,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,2,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,2);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(88138302U));
  ssSetChecksum1(S,(935074077U));
  ssSetChecksum2(S,(383604947U));
  ssSetChecksum3(S,(743676703U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c2_cassie_sim(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_cassie_sim(SimStruct *S)
{
  SFc2_cassie_simInstanceStruct *chartInstance;
  chartInstance = (SFc2_cassie_simInstanceStruct *)utMalloc(sizeof
    (SFc2_cassie_simInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_cassie_simInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_cassie_sim;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_cassie_sim;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_cassie_sim;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_cassie_sim;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_cassie_sim;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_cassie_sim;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_cassie_sim;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_cassie_sim;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_cassie_sim;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_cassie_sim;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_cassie_sim;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c2_cassie_sim(chartInstance);
}

void c2_cassie_sim_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_cassie_sim(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_cassie_sim(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_cassie_sim(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_cassie_sim_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
