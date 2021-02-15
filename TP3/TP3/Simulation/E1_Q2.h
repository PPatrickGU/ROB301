/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config E:/ROB301/TP3/TP3/Simulation/config.txt
** Generation date: 2021-02-15T18:43:32
*************************************************************$ */
#ifndef _E1_Q2_H_
#define _E1_Q2_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct { array_bool_3 /* x/ */ x; } inC_E1_Q2;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* y/ */ y;
  kcg_bool /* error/ */ error;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:OK:_L6/ */ _L6_OK_SM1;
  kcg_bool /* SM1:OK:_L5/ */ _L5_OK_SM1;
  kcg_bool /* SM1:x1_ko:_L3/ */ _L3_x1_ko_SM1;
  kcg_bool /* SM1:x1_ko:_L2/ */ _L2_x1_ko_SM1;
  kcg_bool /* SM1:x2_ko:_L4/ */ _L4_x2_ko_SM1;
  kcg_bool /* SM1:x2_ko:_L2/ */ _L2_x2_ko_SM1;
  kcg_bool /* SM1:KO:_L2/ */ _L2_KO_SM1;
  kcg_bool /* SM1:x0_ko:_L3/ */ _L3_x0_ko_SM1;
  kcg_bool /* SM1:x0_ko:_L2/ */ _L2_x0_ko_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_E1_Q2;

/* ===========  node initialization and cycle functions  =========== */
/* E1_Q2/ */
extern void E1_Q2(inC_E1_Q2 *inC, outC_E1_Q2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void E1_Q2_reset(outC_E1_Q2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void E1_Q2_init(outC_E1_Q2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _E1_Q2_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** E1_Q2.h
** Generation date: 2021-02-15T18:43:32
*************************************************************$ */

