#include "m2c.h"

M2C_UNK func_02099f24(M2C_UNK, u32);                /* extern */

void func_02099ea4(M2C_UNK arg0) {
    u32 var_r4;

    var_r4 = 1;
    do {
        func_02099f24(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 < 6U);
    func_02099f24(arg0, 0U);
}
