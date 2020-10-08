/* Include files */

#include "FG_Simulator_cgxe.h"
#include "m_ckjBABowLK3WzjqwY5cIT.h"

unsigned int cgxe_FG_Simulator_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 1242309901 &&
      ssGetChecksum1(S) == 813152192 &&
      ssGetChecksum2(S) == 449071664 &&
      ssGetChecksum3(S) == 1233488361) {
    method_dispatcher_ckjBABowLK3WzjqwY5cIT(S, method, data);
    return 1;
  }

  return 0;
}
