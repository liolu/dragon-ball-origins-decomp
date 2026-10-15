#include "m2c.h"

s32 func_020ac474(s32, M2C_UNK);                    /* extern */

s32 func_020a9e2c(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_r4;

    temp_r4 = func_020ac474(M2C_FIELD(arg0, s32 *, 8) + arg2, arg3);
    return func_020ac474(M2C_FIELD(arg0, s32 *, 8) + arg1, arg3) | (temp_r4 << 0x10);
}
