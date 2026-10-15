#include "m2c.h"

M2C_UNK func_02086fb8(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02062758(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r0;
    u32 var_r4;
    void *var_r5;

    var_r4 = 0;
    var_r5 = arg0 + 0xF3FC;
    do {
        if ((M2C_FIELD(var_r5, s32 *, 4) & 1) == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            func_02086fb8(var_r5, arg1, arg2, arg3);
        }
        var_r4 += 1;
        var_r5 += 0x2C;
    } while (var_r4 < 0x10U);
}
