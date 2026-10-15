#include "m2c.h"

M2C_UNK func_02026f60(M2C_UNK);                     /* extern */
s32 func_0202e8dc(u32, M2C_UNK, s32, s32, s32);     /* extern */

s32 func_02026cec(s32 arg0, M2C_UNK arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 *arg6) {
    s32 var_r4;
    s32 var_r8;
    u32 var_r5;

    var_r8 = arg3;
    var_r4 = 1;
    var_r5 = 0;
    if (arg2 != 0) {
        do {
            if (*arg6 & var_r4) {
                var_r8 = func_0202e8dc(var_r5, arg1, var_r8, arg4, arg5);
            } else {
                func_02026f60(arg1);
            }
            var_r5 += 1;
            var_r4 *= 2;
        } while (var_r5 < arg2);
    }
    return var_r8;
}
