/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/study/3A/ROB301/projet_landing/projet_operators/Simulation/config.txt
** Generation date: 2021-03-28T15:35:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ifvalid_sensor.h"

/* ifvalid_sensor/ */
void ifvalid_sensor(inC_ifvalid_sensor *inC, outC_ifvalid_sensor *outC)
{
  /* output/ */
  kcg_bool output_partial;
  /* anomaly/ */
  kcg_bool anomaly_partial;
  /* test_valiid: */
  SSM_ST_test_valiid test_valiid_state_nxt_partial;
  /* test_valiid: */
  kcg_bool test_valiid_reset_nxt_partial;
  /* test_valiid: */
  SSM_TR_test_valiid test_valiid_fired_partial;
  /* output/ */
  kcg_bool _1_output_partial;
  /* anomaly/ */
  kcg_bool _2_anomaly_partial;
  /* test_valiid: */
  SSM_ST_test_valiid _3_test_valiid_state_nxt_partial;
  /* test_valiid: */
  kcg_bool _4_test_valiid_reset_nxt_partial;
  /* test_valiid: */
  SSM_TR_test_valiid _5_test_valiid_fired_partial;
  /* output/ */
  kcg_bool _6_output_partial;
  /* anomaly/ */
  kcg_bool _7_anomaly_partial;
  /* test_valiid: */
  SSM_ST_test_valiid _8_test_valiid_state_nxt_partial;
  /* test_valiid: */
  kcg_bool _9_test_valiid_reset_nxt_partial;
  /* test_valiid: */
  SSM_TR_test_valiid _10_test_valiid_fired_partial;
  /* output/ */
  kcg_bool _11_output_partial;
  /* anomaly/ */
  kcg_bool _12_anomaly_partial;
  /* test_valiid: */
  SSM_ST_test_valiid _13_test_valiid_state_nxt_partial;
  /* test_valiid: */
  kcg_bool _14_test_valiid_reset_nxt_partial;
  /* test_valiid: */
  SSM_TR_test_valiid _15_test_valiid_fired_partial;
  /* output/ */
  kcg_bool _16_output_partial;
  /* anomaly/ */
  kcg_bool _17_anomaly_partial;
  /* test_valiid: */
  SSM_ST_test_valiid _18_test_valiid_state_nxt_partial;
  /* test_valiid: */
  kcg_bool _19_test_valiid_reset_nxt_partial;
  /* test_valiid: */
  SSM_TR_test_valiid _20_test_valiid_fired_partial;
  /* test_valiid: */
  SSM_ST_test_valiid test_valiid_state_act_partial;
  /* test_valiid: */
  kcg_bool test_valiid_reset_act_partial;
  /* test_valiid: */
  SSM_TR_test_valiid test_valiid_fired_strong_partial;
  /* test_valiid:valid_all:<3> */
  kcg_bool tr_3_guard_valid_all_test_valiid;
  /* test_valiid:valid_all:<2> */
  kcg_bool tr_2_guard_valid_all_test_valiid;
  /* test_valiid:valid_all:<1> */
  kcg_bool tr_1_guard_valid_all_test_valiid;
  /* test_valiid: */
  SSM_ST_test_valiid _21_test_valiid_state_act_partial;
  /* test_valiid: */
  kcg_bool _22_test_valiid_reset_act_partial;
  /* test_valiid: */
  SSM_TR_test_valiid _23_test_valiid_fired_strong_partial;
  /* test_valiid:Eliminate_1:<1> */
  kcg_bool tr_1_guard_Eliminate_1_test_valiid;
  /* test_valiid: */
  SSM_ST_test_valiid _24_test_valiid_state_act_partial;
  /* test_valiid: */
  kcg_bool _25_test_valiid_reset_act_partial;
  /* test_valiid: */
  SSM_TR_test_valiid _26_test_valiid_fired_strong_partial;
  /* test_valiid:Eliminate_2:<1> */
  kcg_bool tr_1_guard_Eliminate_2_test_valiid;
  /* test_valiid: */
  SSM_ST_test_valiid _27_test_valiid_state_act_partial;
  /* test_valiid: */
  kcg_bool _28_test_valiid_reset_act_partial;
  /* test_valiid: */
  SSM_TR_test_valiid _29_test_valiid_fired_strong_partial;
  /* test_valiid:Eliminate_3:<1> */
  kcg_bool tr_1_guard_Eliminate_3_test_valiid;
  /* test_valiid: */
  SSM_ST_test_valiid _30_test_valiid_state_act_partial;
  /* test_valiid: */
  kcg_bool _31_test_valiid_reset_act_partial;
  /* test_valiid: */
  SSM_TR_test_valiid _32_test_valiid_fired_strong_partial;
  /* output/ */
  kcg_bool last_output;
  /* test_valiid: */
  kcg_bool test_valiid_reset_sel;
  /* test_valiid: */
  kcg_bool test_valiid_reset_prv;

  last_output = outC->output;
  outC->_L34 = inC->sensor_3;
  outC->_L33 = inC->sensor_2;
  outC->_L30 = outC->_L33 == outC->_L34;
  outC->equal_23 = outC->_L30;
  outC->_L29 = inC->sensor_3;
  outC->_L28 = inC->sensor_1;
  outC->_L26 = outC->_L28 == outC->_L29;
  outC->equal_13 = outC->_L26;
  outC->_L24 = inC->sensor_2;
  outC->_L23 = inC->sensor_1;
  outC->_L22 = outC->_L23 == outC->_L24;
  outC->equal_12 = outC->_L22;
  outC->_L20 = inC->sensor_3;
  outC->_L19 = inC->sensor_2;
  outC->_L18 = outC->_L19 != outC->_L20;
  outC->diff_23 = outC->_L18;
  outC->_L16 = inC->sensor_3;
  outC->_L15 = inC->sensor_1;
  outC->_L14 = outC->_L15 != outC->_L16;
  outC->diff_13 = outC->_L14;
  outC->_L2 = inC->sensor_2;
  outC->_L1 = inC->sensor_1;
  outC->_L4 = outC->_L1 != outC->_L2;
  outC->diff_12 = outC->_L4;
  outC->test_valiid_state_sel = outC->test_valiid_state_nxt;
  /* test_valiid: */
  switch (outC->test_valiid_state_sel) {
    case SSM_st_Invalid_test_valiid :
      _30_test_valiid_state_act_partial = SSM_st_Invalid_test_valiid;
      outC->test_valiid_state_act = _30_test_valiid_state_act_partial;
      break;
    case SSM_st_Eliminate_3_test_valiid :
      tr_1_guard_Eliminate_3_test_valiid = outC->diff_12;
      if (tr_1_guard_Eliminate_3_test_valiid) {
        _27_test_valiid_state_act_partial = SSM_st_Invalid_test_valiid;
      }
      else {
        _27_test_valiid_state_act_partial = SSM_st_Eliminate_3_test_valiid;
      }
      outC->test_valiid_state_act = _27_test_valiid_state_act_partial;
      break;
    case SSM_st_Eliminate_2_test_valiid :
      tr_1_guard_Eliminate_2_test_valiid = outC->diff_13;
      if (tr_1_guard_Eliminate_2_test_valiid) {
        _24_test_valiid_state_act_partial = SSM_st_Invalid_test_valiid;
      }
      else {
        _24_test_valiid_state_act_partial = SSM_st_Eliminate_2_test_valiid;
      }
      outC->test_valiid_state_act = _24_test_valiid_state_act_partial;
      break;
    case SSM_st_Eliminate_1_test_valiid :
      tr_1_guard_Eliminate_1_test_valiid = outC->diff_23;
      if (tr_1_guard_Eliminate_1_test_valiid) {
        _21_test_valiid_state_act_partial = SSM_st_Invalid_test_valiid;
      }
      else {
        _21_test_valiid_state_act_partial = SSM_st_Eliminate_1_test_valiid;
      }
      outC->test_valiid_state_act = _21_test_valiid_state_act_partial;
      break;
    case SSM_st_valid_all_test_valiid :
      tr_3_guard_valid_all_test_valiid = outC->diff_23 & outC->equal_12;
      tr_2_guard_valid_all_test_valiid = outC->diff_12 & outC->equal_13;
      tr_1_guard_valid_all_test_valiid = outC->diff_12 & outC->equal_23;
      if (tr_1_guard_valid_all_test_valiid) {
        test_valiid_state_act_partial = SSM_st_Eliminate_1_test_valiid;
      }
      else if (tr_2_guard_valid_all_test_valiid) {
        test_valiid_state_act_partial = SSM_st_Eliminate_2_test_valiid;
      }
      else if (tr_3_guard_valid_all_test_valiid) {
        test_valiid_state_act_partial = SSM_st_Eliminate_3_test_valiid;
      }
      else {
        test_valiid_state_act_partial = SSM_st_valid_all_test_valiid;
      }
      outC->test_valiid_state_act = test_valiid_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->test_valiid_state_act) {
    case SSM_st_Invalid_test_valiid :
      _16_output_partial = last_output;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* test_valiid: */
  switch (outC->test_valiid_state_sel) {
    case SSM_st_Invalid_test_valiid :
      _32_test_valiid_fired_strong_partial = SSM_TR_no_trans_test_valiid;
      outC->test_valiid_fired_strong = _32_test_valiid_fired_strong_partial;
      break;
    case SSM_st_Eliminate_3_test_valiid :
      if (tr_1_guard_Eliminate_3_test_valiid) {
        _29_test_valiid_fired_strong_partial =
          SSM_TR_Eliminate_3_Invalid_1_Eliminate_3_test_valiid;
      }
      else {
        _29_test_valiid_fired_strong_partial = SSM_TR_no_trans_test_valiid;
      }
      outC->test_valiid_fired_strong = _29_test_valiid_fired_strong_partial;
      break;
    case SSM_st_Eliminate_2_test_valiid :
      if (tr_1_guard_Eliminate_2_test_valiid) {
        _26_test_valiid_fired_strong_partial =
          SSM_TR_Eliminate_2_Invalid_1_Eliminate_2_test_valiid;
      }
      else {
        _26_test_valiid_fired_strong_partial = SSM_TR_no_trans_test_valiid;
      }
      outC->test_valiid_fired_strong = _26_test_valiid_fired_strong_partial;
      break;
    case SSM_st_Eliminate_1_test_valiid :
      if (tr_1_guard_Eliminate_1_test_valiid) {
        _23_test_valiid_fired_strong_partial =
          SSM_TR_Eliminate_1_Invalid_1_Eliminate_1_test_valiid;
      }
      else {
        _23_test_valiid_fired_strong_partial = SSM_TR_no_trans_test_valiid;
      }
      outC->test_valiid_fired_strong = _23_test_valiid_fired_strong_partial;
      break;
    case SSM_st_valid_all_test_valiid :
      if (tr_1_guard_valid_all_test_valiid) {
        test_valiid_fired_strong_partial =
          SSM_TR_valid_all_Eliminate_1_1_valid_all_test_valiid;
      }
      else if (tr_2_guard_valid_all_test_valiid) {
        test_valiid_fired_strong_partial =
          SSM_TR_valid_all_Eliminate_2_2_valid_all_test_valiid;
      }
      else if (tr_3_guard_valid_all_test_valiid) {
        test_valiid_fired_strong_partial =
          SSM_TR_valid_all_Eliminate_3_3_valid_all_test_valiid;
      }
      else {
        test_valiid_fired_strong_partial = SSM_TR_no_trans_test_valiid;
      }
      outC->test_valiid_fired_strong = test_valiid_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* test_valiid: */
  switch (outC->test_valiid_state_act) {
    case SSM_st_Invalid_test_valiid :
      _20_test_valiid_fired_partial = outC->test_valiid_fired_strong;
      _19_test_valiid_reset_nxt_partial = kcg_false;
      _18_test_valiid_state_nxt_partial = SSM_st_Invalid_test_valiid;
      outC->_L1_Invalid_test_valiid = kcg_true;
      _17_anomaly_partial = outC->_L1_Invalid_test_valiid;
      outC->output = _16_output_partial;
      outC->anomaly = _17_anomaly_partial;
      outC->test_valiid_state_nxt = _18_test_valiid_state_nxt_partial;
      break;
    case SSM_st_Eliminate_3_test_valiid :
      _12_anomaly_partial = kcg_false;
      _15_test_valiid_fired_partial = outC->test_valiid_fired_strong;
      _14_test_valiid_reset_nxt_partial = kcg_false;
      _13_test_valiid_state_nxt_partial = SSM_st_Eliminate_3_test_valiid;
      outC->_L1_Eliminate_3_test_valiid = inC->sensor_1;
      _11_output_partial = outC->_L1_Eliminate_3_test_valiid;
      outC->output = _11_output_partial;
      outC->anomaly = _12_anomaly_partial;
      outC->test_valiid_state_nxt = _13_test_valiid_state_nxt_partial;
      break;
    case SSM_st_Eliminate_2_test_valiid :
      _7_anomaly_partial = kcg_false;
      _10_test_valiid_fired_partial = outC->test_valiid_fired_strong;
      _9_test_valiid_reset_nxt_partial = kcg_false;
      _8_test_valiid_state_nxt_partial = SSM_st_Eliminate_2_test_valiid;
      outC->_L1_Eliminate_2_test_valiid = inC->sensor_1;
      _6_output_partial = outC->_L1_Eliminate_2_test_valiid;
      outC->output = _6_output_partial;
      outC->anomaly = _7_anomaly_partial;
      outC->test_valiid_state_nxt = _8_test_valiid_state_nxt_partial;
      break;
    case SSM_st_Eliminate_1_test_valiid :
      _2_anomaly_partial = kcg_false;
      _5_test_valiid_fired_partial = outC->test_valiid_fired_strong;
      _4_test_valiid_reset_nxt_partial = kcg_false;
      _3_test_valiid_state_nxt_partial = SSM_st_Eliminate_1_test_valiid;
      outC->_L2_Eliminate_1_test_valiid = inC->sensor_2;
      _1_output_partial = outC->_L2_Eliminate_1_test_valiid;
      outC->output = _1_output_partial;
      outC->anomaly = _2_anomaly_partial;
      outC->test_valiid_state_nxt = _3_test_valiid_state_nxt_partial;
      break;
    case SSM_st_valid_all_test_valiid :
      anomaly_partial = kcg_false;
      test_valiid_fired_partial = outC->test_valiid_fired_strong;
      test_valiid_reset_nxt_partial = kcg_false;
      test_valiid_state_nxt_partial = SSM_st_valid_all_test_valiid;
      outC->_L1_valid_all_test_valiid = inC->sensor_1;
      output_partial = outC->_L1_valid_all_test_valiid;
      outC->output = output_partial;
      outC->anomaly = anomaly_partial;
      outC->test_valiid_state_nxt = test_valiid_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  test_valiid_reset_sel = outC->test_valiid_reset_nxt;
  /* test_valiid: */
  switch (outC->test_valiid_state_act) {
    case SSM_st_Invalid_test_valiid :
      outC->test_valiid_reset_nxt = _19_test_valiid_reset_nxt_partial;
      outC->test_valiid_fired = _20_test_valiid_fired_partial;
      break;
    case SSM_st_Eliminate_3_test_valiid :
      outC->test_valiid_reset_nxt = _14_test_valiid_reset_nxt_partial;
      outC->test_valiid_fired = _15_test_valiid_fired_partial;
      break;
    case SSM_st_Eliminate_2_test_valiid :
      outC->test_valiid_reset_nxt = _9_test_valiid_reset_nxt_partial;
      outC->test_valiid_fired = _10_test_valiid_fired_partial;
      break;
    case SSM_st_Eliminate_1_test_valiid :
      outC->test_valiid_reset_nxt = _4_test_valiid_reset_nxt_partial;
      outC->test_valiid_fired = _5_test_valiid_fired_partial;
      break;
    case SSM_st_valid_all_test_valiid :
      outC->test_valiid_reset_nxt = test_valiid_reset_nxt_partial;
      outC->test_valiid_fired = test_valiid_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->test_valiid_state_sel) {
    case SSM_st_Invalid_test_valiid :
      _31_test_valiid_reset_act_partial = kcg_false;
      break;
    case SSM_st_Eliminate_3_test_valiid :
      _28_test_valiid_reset_act_partial = tr_1_guard_Eliminate_3_test_valiid;
      break;
    case SSM_st_Eliminate_2_test_valiid :
      _25_test_valiid_reset_act_partial = tr_1_guard_Eliminate_2_test_valiid;
      break;
    case SSM_st_Eliminate_1_test_valiid :
      _22_test_valiid_reset_act_partial = tr_1_guard_Eliminate_1_test_valiid;
      break;
    case SSM_st_valid_all_test_valiid :
      if (tr_1_guard_valid_all_test_valiid) {
        test_valiid_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_valid_all_test_valiid) {
        test_valiid_reset_act_partial = kcg_true;
      }
      else {
        test_valiid_reset_act_partial = tr_3_guard_valid_all_test_valiid;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  test_valiid_reset_prv = outC->test_valiid_reset_act;
  /* test_valiid: */
  switch (outC->test_valiid_state_sel) {
    case SSM_st_Invalid_test_valiid :
      outC->test_valiid_reset_act = _31_test_valiid_reset_act_partial;
      break;
    case SSM_st_Eliminate_3_test_valiid :
      outC->test_valiid_reset_act = _28_test_valiid_reset_act_partial;
      break;
    case SSM_st_Eliminate_2_test_valiid :
      outC->test_valiid_reset_act = _25_test_valiid_reset_act_partial;
      break;
    case SSM_st_Eliminate_1_test_valiid :
      outC->test_valiid_reset_act = _22_test_valiid_reset_act_partial;
      break;
    case SSM_st_valid_all_test_valiid :
      outC->test_valiid_reset_act = test_valiid_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ifvalid_sensor_init(outC_ifvalid_sensor *outC)
{
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->equal_23 = kcg_true;
  outC->equal_13 = kcg_true;
  outC->equal_12 = kcg_true;
  outC->diff_13 = kcg_true;
  outC->diff_23 = kcg_true;
  outC->diff_12 = kcg_true;
  outC->test_valiid_fired = SSM_TR_no_trans_test_valiid;
  outC->test_valiid_fired_strong = SSM_TR_no_trans_test_valiid;
  outC->test_valiid_state_act = SSM_st_valid_all_test_valiid;
  outC->test_valiid_state_sel = SSM_st_valid_all_test_valiid;
  outC->_L1_Invalid_test_valiid = kcg_true;
  outC->_L1_Eliminate_3_test_valiid = kcg_true;
  outC->_L1_Eliminate_2_test_valiid = kcg_true;
  outC->_L2_Eliminate_1_test_valiid = kcg_true;
  outC->_L1_valid_all_test_valiid = kcg_true;
  outC->anomaly = kcg_true;
  outC->output = kcg_true;
  outC->test_valiid_reset_act = kcg_false;
  outC->test_valiid_reset_nxt = kcg_false;
  outC->test_valiid_state_nxt = SSM_st_valid_all_test_valiid;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ifvalid_sensor_reset(outC_ifvalid_sensor *outC)
{
  outC->test_valiid_reset_act = kcg_false;
  outC->test_valiid_reset_nxt = kcg_false;
  outC->test_valiid_state_nxt = SSM_st_valid_all_test_valiid;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** ifvalid_sensor.c
** Generation date: 2021-03-28T15:35:29
*************************************************************$ */

