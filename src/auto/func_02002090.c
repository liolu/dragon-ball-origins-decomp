#include "m2c.h"

M2C_UNK func_0209a19c(M2C_UNK *, u32, s32, M2C_UNK); /* extern */
extern M2C_UNK data_020d5150;
extern M2C_UNK data_0215fcc8;

void func_02002090(s32 arg0, M2C_UNK arg1) {
    u32 var_r5;

    M2C_FIELD(&data_020d5150, s32 *, 8) = arg0;
    var_r5                              = 0;
    do {
        func_0209a19c(&data_0215fcc8, var_r5, arg0, arg1);
        var_r5 += 1;
    } while (var_r5 < 2U);
}
