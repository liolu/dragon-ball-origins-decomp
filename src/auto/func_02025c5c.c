#include "m2c.h"

M2C_UNK func_02028b24(M2C_UNK, s32, s32, M2C_UNK, s32, s32, s32); /* extern */

void func_02025c5c(M2C_UNK arg0, void *arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_r4;
    s32 var_r5;

    var_r4 = M2C_FIELD(arg1, s32 *, 0);
    if (var_r4 >= (s32) M2C_FIELD(arg1, s32 *, 8)) {
        return;
    }
    do {
        var_r5 = M2C_FIELD(arg1, s32 *, 4);
        if (var_r5 < (s32) M2C_FIELD(arg1, s32 *, 0xC)) {
            do {
                func_02028b24(arg0, var_r4, var_r5, arg2, arg3, arg4, arg5);
                var_r5 += 0x3200;
            } while (var_r5 < (s32) M2C_FIELD(arg1, s32 *, 0xC));
        }
        var_r4 += 0x3200;
    } while (var_r4 < (s32) M2C_FIELD(arg1, s32 *, 8));
}
