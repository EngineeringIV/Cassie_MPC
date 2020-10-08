/* Include files */

#include "FG_Simulator_cgxe.h"
#include "m_bGSVBK6fn1f5qyIWfGYIZG.h"

unsigned int cgxe_FG_Simulator_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 1343126742 &&
      ssGetChecksum1(S) == 2164344685 &&
      ssGetChecksum2(S) == 712585191 &&
      ssGetChecksum3(S) == 4047303071) {
    method_dispatcher_bGSVBK6fn1f5qyIWfGYIZG(S, method, data);
    return 1;
  }

  return 0;
}
