#include "m2c.h"

M2C_UNK func_020016f4(s32);                         /* extern */
M2C_UNK func_0202ba98();                            /* extern */

void func_02060020(s32 arg0) {
    u32 var_r5;
    void *var_r6;

    var_r6 = arg0 + 0x120;
    var_r5 = 0;
    do {
        M2C_FIELD(var_r6, s32 *, 0) = -1;
        if (M2C_FIELD(var_r6, s32 *, 4) != 0) {
            func_0202ba98();
        }
        var_r5 += 1;
        var_r6 += 8;
    } while (var_r5 < 0x24U);
    func_020016f4(arg0 + 0xC8);
}
