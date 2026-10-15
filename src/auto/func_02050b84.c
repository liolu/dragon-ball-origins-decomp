#include "m2c.h"

M2C_UNK func_02050c18(M2C_UNK, u32, s32);           /* extern */

void func_02050b84(M2C_UNK arg0) {
    u32 var_r5;

    var_r5 = 0;
    do {
        func_02050c18(arg0, var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 8U);
}
