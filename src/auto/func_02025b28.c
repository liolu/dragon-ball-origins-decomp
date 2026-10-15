#include "m2c.h"

M2C_UNK func_02025b88(M2C_UNK, s32, s32);           /* extern */

void func_02025b28(M2C_UNK arg0, void *arg1) {
    s32 var_r6;
    s32 var_r7;

    var_r6 = M2C_FIELD(arg1, s32 *, 0);
    if (var_r6 >= (s32) M2C_FIELD(arg1, s32 *, 8)) {
        return;
    }
    do {
        var_r7 = M2C_FIELD(arg1, s32 *, 4);
        if (var_r7 < (s32) M2C_FIELD(arg1, s32 *, 0xC)) {
            do {
                func_02025b88(arg0, var_r6, var_r7);
                var_r7 += 0x1900;
            } while (var_r7 < (s32) M2C_FIELD(arg1, s32 *, 0xC));
        }
        var_r6 += 0x1900;
    } while (var_r6 < (s32) M2C_FIELD(arg1, s32 *, 8));
}
