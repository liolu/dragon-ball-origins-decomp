#include "m2c.h"

M2C_UNK func_02087170(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020627c0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
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
            func_02087170(var_r5, arg1, arg2);
        }
        var_r4 += 1;
        var_r5 += 0x2C;
    } while (var_r4 < 0x10U);
}
