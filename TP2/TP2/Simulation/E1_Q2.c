/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config E:/ROB301/ROB301/TP2/Simulation/config.txt
** Generation date: 2021-02-09T16:24:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "E1_Q2.h"

/* E1_Q2/ */
void E1_Q2(inC_E1_Q2 *inC, outC_E1_Q2 *outC)
{
  /* _L8= */
  if (outC->init) {
    outC->_L8 = kcg_true;
  }
  else {
    outC->_L8 = outC->_L6;
  }
  outC->_L6 = inC->Input1;
  outC->_L4 = !outC->_L6;
  outC->_L1 = outC->_L8 & outC->_L4;
  outC->Output1 = outC->_L1;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void E1_Q2_init(outC_E1_Q2 *outC)
{
  outC->_L1 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_true;
  outC->init = kcg_true;
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void E1_Q2_reset(outC_E1_Q2 *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** E1_Q2.c
** Generation date: 2021-02-09T16:24:58
*************************************************************$ */

