#include "m2c.h"

M2C_UNK func_02002c10(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02098468();                            /* extern */
M2C_UNK func_0209b59c(s32, s32);                    /* extern */

void func_02098424(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    func_02098468();
    func_02002c10(arg0 + 0x14, 0xCF, 0);
    var_r5 = arg0 + 0x3C;
    var_r4 = 1;
    do {
        func_0209b59c(var_r5, arg0 + 0x14);
        var_r4 += 1;
        var_r5 += 0x28;
    } while (var_r4 < 8);
}
