#include "m2c.h"

s32 func_02047cd8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_02047c88(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r4;

    var_r4 = 1;
    if (func_02047cd8(arg0, 1, arg1, arg2) == 0) {
        var_r4 = 0;
    }
    if (func_02047cd8(arg0, 0, arg1, arg2) == 0) {
        var_r4 = 0;
    }
    return var_r4;
}
