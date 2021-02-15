/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config E:/ROB301/TP3/TP3/Simulation/config.txt
** Generation date: 2021-02-15T18:43:32
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_bool_3
kcg_bool kcg_comp_array_bool_3(array_bool_3 *kcg_c1, array_bool_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_3 */

/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** kcg_types.c
** Generation date: 2021-02-15T18:43:32
*************************************************************$ */

