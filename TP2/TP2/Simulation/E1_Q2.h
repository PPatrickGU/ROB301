/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config E:/ROB301/ROB301/TP2/Simulation/config.txt
** Generation date: 2021-02-09T16:24:58
*************************************************************$ */
#ifndef _E1_Q2_H_
#define _E1_Q2_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct { kcg_bool /* Input1/ */ Input1; } inC_E1_Q2;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L6/ */ _L6;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L1/ */ _L1;
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
** Generation date: 2021-02-09T16:24:58
*************************************************************$ */

