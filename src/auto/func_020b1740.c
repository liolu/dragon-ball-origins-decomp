#include "m2c.h"

s32 func_020b09c0();                                /* extern */
s32 func_020b0e28();                                /* extern */
M2C_UNK func_020b0e50(M2C_UNK, s32);                /* extern */
s32 func_020b15c8(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020b19a0;

s32 func_020b1740(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_020b0e28();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_020b09c0();
        }
        var_r4 = func_020b15c8(arg0, &func_020b19a0, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_020b0e50(arg0, var_r4);
        }
    }
    return var_r4;
}
