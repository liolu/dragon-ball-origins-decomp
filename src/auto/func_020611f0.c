#include "m2c.h"

s32 func_020611c0();                                /* extern */
s32 func_020a2d5c(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

s32 func_020611f0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020611c0();
    if (temp_r0 == 0) {
        return -1;
    }
    return func_020a2d5c(temp_r0, arg2, -1, 0);
}
