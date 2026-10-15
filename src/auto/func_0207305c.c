#include "m2c.h"

s32 func_0207305c(s32 arg0, void *arg1, void *arg2) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg1, s16 *, 0x408) - M2C_FIELD(arg2, s16 *, 0x40A);
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    return var_r0;
}
