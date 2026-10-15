#include "m2c.h"

s32 func_0202ec8c(M2C_UNK, s32, s32, s32);          /* extern */

s32 func_02026e4c(s32 arg0, M2C_UNK arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_r3;
    u32 var_r4;

    var_r3 = arg3;
    for (var_r4 = 0; var_r4 < arg2; var_r4 += 1) {
        var_r3 = func_0202ec8c(arg1, var_r3, arg4, arg5);
    }
    return var_r3;
}
