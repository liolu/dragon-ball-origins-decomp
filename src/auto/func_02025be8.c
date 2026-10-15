#include "m2c.h"

M2C_UNK func_020289b4(M2C_UNK, s32, s32, M2C_UNK);  /* extern */

void func_02025be8(M2C_UNK arg0, void *arg1, M2C_UNK arg2) {
    s32 var_r4;
    s32 var_r8;

    var_r4 = M2C_FIELD(arg1, s32 *, 0);
    if (var_r4 >= (s32) M2C_FIELD(arg1, s32 *, 8)) {
        return;
    }
    do {
        var_r8 = M2C_FIELD(arg1, s32 *, 4);
        if (var_r8 < (s32) M2C_FIELD(arg1, s32 *, 0xC)) {
            do {
                func_020289b4(arg0, var_r4, var_r8, arg2);
                var_r8 += 0x3200;
            } while (var_r8 < (s32) M2C_FIELD(arg1, s32 *, 0xC));
        }
        var_r4 += 0x3200;
    } while (var_r4 < (s32) M2C_FIELD(arg1, s32 *, 8));
}
