#include "m2c.h"

s32 func_02017f30(void *arg0, s32 arg1) {
    u32 var_r3;

    M2C_FIELD(arg0, s32 *, 0x7F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x7F0) | 8);
    var_r3                        = M2C_FIELD(arg0, u32 *, 0x648) + 1;
    if (var_r3 > -2U) {
        var_r3 = -2U;
    }
    M2C_FIELD(arg0, u32 *, 0x648) = var_r3;
    return arg1 + 4;
}
