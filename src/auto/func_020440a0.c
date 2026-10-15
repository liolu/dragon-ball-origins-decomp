#include "m2c.h"

s32 func_020489c0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_021255a4;

void func_020440a0(void) {
    M2C_UNK *var_r5;
    u32 var_r6;

    var_r6 = 0;
    var_r5 = &data_021255a4;
    do {
        if ((M2C_FIELD(var_r5, s32 *, 4) != 0) && (func_020489c0(var_r5) != 0)) {
            M2C_FIELD(var_r5, s32 *, 0) = 0;
            M2C_FIELD(var_r5, s32 *, 4) = 0;
        }
        var_r6 += 1;
        var_r5 = (M2C_UNK *) ((s8 *) var_r5 + 0x24);
    } while (var_r6 < 0x10U);
}
