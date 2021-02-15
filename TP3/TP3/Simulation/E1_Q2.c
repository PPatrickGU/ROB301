/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config E:/ROB301/TP3/TP3/Simulation/config.txt
** Generation date: 2021-02-15T18:43:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "E1_Q2.h"

/* E1_Q2/ */
void E1_Q2(inC_E1_Q2 *inC, outC_E1_Q2 *outC)
{
  /* y/ */
  kcg_bool y_partial;
  /* error/ */
  kcg_bool error_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* y/ */
  kcg_bool _1_y_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* SM1: */
  SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _5_SM1_fired_partial;
  /* y/ */
  kcg_bool _6_y_partial;
  /* error/ */
  kcg_bool _7_error_partial;
  /* SM1: */
  SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _10_SM1_fired_partial;
  /* y/ */
  kcg_bool _11_y_partial;
  /* error/ */
  kcg_bool _12_error_partial;
  /* SM1: */
  SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _15_SM1_fired_partial;
  /* y/ */
  kcg_bool _16_y_partial;
  /* error/ */
  kcg_bool _17_error_partial;
  /* SM1: */
  SSM_ST_SM1 _18_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _20_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:OK:<3> */
  kcg_bool tr_3_guard_OK_SM1;
  /* SM1:OK:<2> */
  kcg_bool tr_2_guard_OK_SM1;
  /* SM1:OK:<1> */
  kcg_bool tr_1_guard_OK_SM1;
  /* SM1: */
  SSM_ST_SM1 _21_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _22_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _23_SM1_fired_strong_partial;
  /* SM1:x1_ko:<1> */
  kcg_bool tr_1_guard_x1_ko_SM1;
  /* SM1: */
  SSM_ST_SM1 _24_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _25_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _26_SM1_fired_strong_partial;
  /* SM1:x2_ko:<1> */
  kcg_bool tr_1_guard_x2_ko_SM1;
  /* SM1: */
  SSM_ST_SM1 _27_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _28_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _29_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _30_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _31_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _32_SM1_fired_strong_partial;
  /* SM1:x0_ko:<1> */
  kcg_bool tr_1_guard_x0_ko_SM1;
  /* y/ */
  kcg_bool last_y;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_y = outC->y;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_x0_ko_SM1 :
      tr_1_guard_x0_ko_SM1 = inC->x[1] != inC->x[2];
      if (tr_1_guard_x0_ko_SM1) {
        _30_SM1_state_act_partial = SSM_st_KO_SM1;
      }
      else {
        _30_SM1_state_act_partial = SSM_st_x0_ko_SM1;
      }
      outC->SM1_state_act = _30_SM1_state_act_partial;
      if (tr_1_guard_x0_ko_SM1) {
        _32_SM1_fired_strong_partial = SSM_TR_x0_ko_KO_1_x0_ko_SM1;
      }
      else {
        _32_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _32_SM1_fired_strong_partial;
      break;
    case SSM_st_KO_SM1 :
      _27_SM1_state_act_partial = SSM_st_KO_SM1;
      outC->SM1_state_act = _27_SM1_state_act_partial;
      _29_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _29_SM1_fired_strong_partial;
      break;
    case SSM_st_x2_ko_SM1 :
      tr_1_guard_x2_ko_SM1 = inC->x[1] != inC->x[0];
      if (tr_1_guard_x2_ko_SM1) {
        _24_SM1_state_act_partial = SSM_st_KO_SM1;
      }
      else {
        _24_SM1_state_act_partial = SSM_st_x2_ko_SM1;
      }
      outC->SM1_state_act = _24_SM1_state_act_partial;
      if (tr_1_guard_x2_ko_SM1) {
        _26_SM1_fired_strong_partial = SSM_TR_x2_ko_KO_1_x2_ko_SM1;
      }
      else {
        _26_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _26_SM1_fired_strong_partial;
      break;
    case SSM_st_x1_ko_SM1 :
      tr_1_guard_x1_ko_SM1 = inC->x[0] != inC->x[2];
      if (tr_1_guard_x1_ko_SM1) {
        _21_SM1_state_act_partial = SSM_st_KO_SM1;
      }
      else {
        _21_SM1_state_act_partial = SSM_st_x1_ko_SM1;
      }
      outC->SM1_state_act = _21_SM1_state_act_partial;
      if (tr_1_guard_x1_ko_SM1) {
        _23_SM1_fired_strong_partial = SSM_TR_x1_ko_KO_1_x1_ko_SM1;
      }
      else {
        _23_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _23_SM1_fired_strong_partial;
      break;
    case SSM_st_OK_SM1 :
      tr_3_guard_OK_SM1 = (inC->x[0] != inC->x[1]) & (inC->x[1] == inC->x[2]);
      tr_2_guard_OK_SM1 = (inC->x[0] != inC->x[2]) & (inC->x[0] == inC->x[1]);
      tr_1_guard_OK_SM1 = (inC->x[0] != inC->x[1]) & (inC->x[0] == inC->x[2]);
      if (tr_1_guard_OK_SM1) {
        SM1_state_act_partial = SSM_st_x1_ko_SM1;
      }
      else if (tr_2_guard_OK_SM1) {
        SM1_state_act_partial = SSM_st_x2_ko_SM1;
      }
      else if (tr_3_guard_OK_SM1) {
        SM1_state_act_partial = SSM_st_x0_ko_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_OK_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_OK_SM1) {
        SM1_fired_strong_partial = SSM_TR_OK_x1_ko_1_OK_SM1;
      }
      else if (tr_2_guard_OK_SM1) {
        SM1_fired_strong_partial = SSM_TR_OK_x2_ko_2_OK_SM1;
      }
      else if (tr_3_guard_OK_SM1) {
        SM1_fired_strong_partial = SSM_TR_OK_x0_ko_3_OK_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_x0_ko_SM1 :
      _20_SM1_fired_partial = outC->SM1_fired_strong;
      _19_SM1_reset_nxt_partial = kcg_false;
      _18_SM1_state_nxt_partial = SSM_st_x0_ko_SM1;
      outC->_L3_x0_ko_SM1 = inC->x[1];
      outC->_L2_x0_ko_SM1 = kcg_false;
      _17_error_partial = outC->_L2_x0_ko_SM1;
      _16_y_partial = outC->_L3_x0_ko_SM1;
      outC->y = _16_y_partial;
      outC->error = _17_error_partial;
      outC->SM1_state_nxt = _18_SM1_state_nxt_partial;
      break;
    case SSM_st_KO_SM1 :
      _11_y_partial = last_y;
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_KO_SM1;
      outC->_L2_KO_SM1 = kcg_true;
      _12_error_partial = outC->_L2_KO_SM1;
      outC->y = _11_y_partial;
      outC->error = _12_error_partial;
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_x2_ko_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_x2_ko_SM1;
      outC->_L4_x2_ko_SM1 = inC->x[0];
      outC->_L2_x2_ko_SM1 = kcg_false;
      _7_error_partial = outC->_L2_x2_ko_SM1;
      _6_y_partial = outC->_L4_x2_ko_SM1;
      outC->y = _6_y_partial;
      outC->error = _7_error_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_x1_ko_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_x1_ko_SM1;
      outC->_L3_x1_ko_SM1 = inC->x[0];
      outC->_L2_x1_ko_SM1 = kcg_false;
      _2_error_partial = outC->_L2_x1_ko_SM1;
      _1_y_partial = outC->_L3_x1_ko_SM1;
      outC->y = _1_y_partial;
      outC->error = _2_error_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_OK_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_OK_SM1;
      outC->_L6_OK_SM1 = inC->x[0];
      outC->_L5_OK_SM1 = kcg_false;
      error_partial = outC->_L5_OK_SM1;
      y_partial = outC->_L6_OK_SM1;
      outC->y = y_partial;
      outC->error = error_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_x0_ko_SM1 :
      outC->SM1_reset_nxt = _19_SM1_reset_nxt_partial;
      outC->SM1_fired = _20_SM1_fired_partial;
      break;
    case SSM_st_KO_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_x2_ko_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_x1_ko_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_OK_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_x0_ko_SM1 :
      _31_SM1_reset_act_partial = tr_1_guard_x0_ko_SM1;
      break;
    case SSM_st_KO_SM1 :
      _28_SM1_reset_act_partial = kcg_false;
      break;
    case SSM_st_x2_ko_SM1 :
      _25_SM1_reset_act_partial = tr_1_guard_x2_ko_SM1;
      break;
    case SSM_st_x1_ko_SM1 :
      _22_SM1_reset_act_partial = tr_1_guard_x1_ko_SM1;
      break;
    case SSM_st_OK_SM1 :
      if (tr_1_guard_OK_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_OK_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_3_guard_OK_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_x0_ko_SM1 :
      outC->SM1_reset_act = _31_SM1_reset_act_partial;
      break;
    case SSM_st_KO_SM1 :
      outC->SM1_reset_act = _28_SM1_reset_act_partial;
      break;
    case SSM_st_x2_ko_SM1 :
      outC->SM1_reset_act = _25_SM1_reset_act_partial;
      break;
    case SSM_st_x1_ko_SM1 :
      outC->SM1_reset_act = _22_SM1_reset_act_partial;
      break;
    case SSM_st_OK_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void E1_Q2_init(outC_E1_Q2 *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_OK_SM1;
  outC->SM1_state_sel = SSM_st_OK_SM1;
  outC->_L2_x0_ko_SM1 = kcg_true;
  outC->_L3_x0_ko_SM1 = kcg_true;
  outC->_L2_KO_SM1 = kcg_true;
  outC->_L2_x2_ko_SM1 = kcg_true;
  outC->_L4_x2_ko_SM1 = kcg_true;
  outC->_L2_x1_ko_SM1 = kcg_true;
  outC->_L3_x1_ko_SM1 = kcg_true;
  outC->_L5_OK_SM1 = kcg_true;
  outC->_L6_OK_SM1 = kcg_true;
  outC->error = kcg_true;
  outC->y = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_OK_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void E1_Q2_reset(outC_E1_Q2 *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_OK_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** E1_Q2.c
** Generation date: 2021-02-15T18:43:32
*************************************************************$ */

