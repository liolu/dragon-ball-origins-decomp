#include "m2c.h"

s32 func_0202ec24(s32, s32);                        /* extern */

s32 func_020252d0(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg1, s32 *, 4);
    if (arg2 < 0) {
        if (var_r0 != 0) {
            var_r0 += 4;
        }
        return var_r0;
    }
    return func_0202ec24(var_r0, arg2);
}
