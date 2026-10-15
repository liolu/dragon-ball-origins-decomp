#include "m2c.h"

s32 func_0202c83c(M2C_UNK);                         /* extern */
s32 func_020b5278(s32, s32);                        /* extern */

s32 func_02054d00(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, volatile s32 *, 0x1C);
    temp_r0 = func_020b5278(func_0202c83c(arg1), temp_r4);
    if ((temp_r0 >= arg2) && (temp_r0 < arg3)) {
        *arg4 = temp_r0;
        return 1;
    }
    return 0;
}
