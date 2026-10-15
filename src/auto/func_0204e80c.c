#include "m2c.h"

s32 func_0204e550();                                /* extern */
M2C_UNK func_0204f04c(M2C_UNK, M2C_UNK);            /* extern */

void func_0204e80c(M2C_UNK arg0) {
    s32 var_r0;

    if (func_0204e550() != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_0204f04c(arg0, -1);
}
