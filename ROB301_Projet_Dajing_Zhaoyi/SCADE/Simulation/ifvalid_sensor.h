/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/study/3A/ROB301/projet_landing/projet_operators/Simulation/config.txt
** Generation date: 2021-03-28T15:35:29
*************************************************************$ */
#ifndef _ifvalid_sensor_H_
#define _ifvalid_sensor_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* sensor_1/ */ sensor_1;
  kcg_bool /* sensor_2/ */ sensor_2;
  kcg_bool /* sensor_3/ */ sensor_3;
} inC_ifvalid_sensor;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* output/ */ output;
  kcg_bool /* anomaly/ */ anomaly;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_test_valiid /* test_valiid: */ test_valiid_state_nxt;
  kcg_bool /* test_valiid: */ test_valiid_reset_act;
  kcg_bool /* test_valiid: */ test_valiid_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_test_valiid /* test_valiid: */ test_valiid_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* test_valiid:valid_all:_L1/ */ _L1_valid_all_test_valiid;
  kcg_bool /* test_valiid:Eliminate_1:_L2/ */ _L2_Eliminate_1_test_valiid;
  kcg_bool /* test_valiid:Eliminate_2:_L1/ */ _L1_Eliminate_2_test_valiid;
  kcg_bool /* test_valiid:Eliminate_3:_L1/ */ _L1_Eliminate_3_test_valiid;
  kcg_bool /* test_valiid:Invalid:_L1/ */ _L1_Invalid_test_valiid;
  SSM_ST_test_valiid /* test_valiid: */ test_valiid_state_sel;
  SSM_TR_test_valiid /* test_valiid: */ test_valiid_fired_strong;
  SSM_TR_test_valiid /* test_valiid: */ test_valiid_fired;
  kcg_bool /* diff_12/ */ diff_12;
  kcg_bool /* diff_23/ */ diff_23;
  kcg_bool /* diff_13/ */ diff_13;
  kcg_bool /* equal_12/ */ equal_12;
  kcg_bool /* equal_13/ */ equal_13;
  kcg_bool /* equal_23/ */ equal_23;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
} outC_ifvalid_sensor;

/* ===========  node initialization and cycle functions  =========== */
/* ifvalid_sensor/ */
extern void ifvalid_sensor(inC_ifvalid_sensor *inC, outC_ifvalid_sensor *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ifvalid_sensor_reset(outC_ifvalid_sensor *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ifvalid_sensor_init(outC_ifvalid_sensor *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ifvalid_sensor_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** ifvalid_sensor.h
** Generation date: 2021-03-28T15:35:29
*************************************************************$ */

