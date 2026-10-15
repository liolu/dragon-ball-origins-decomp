#include "m2c.h"

u32 func_0204cd64(s32);                             /* extern */
extern M2C_UNK data_0212a120;
extern M2C_UNK data_0212a954;
extern M2C_UNK data_0212ad28;

void func_0204d0fc(s32 arg0, u32 arg1) {
    s32 var_r0;
    s32 var_r0_3;
    u32 var_r0_2;
    u32 var_r5;
    u8 temp_r4;

    var_r5  = arg1;
    temp_r4 = ((s8 *) &data_0212ad28)[arg0];
    if ((arg0 >= 0) && (arg0 < 1)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        if (var_r5 <= func_0204cd64(arg0)) {
            var_r0_2 = var_r5;
        } else {
            var_r0_2 = func_0204cd64(arg0);
        }
        *((M2C_UNK *) ((s8 *) &data_0212a120 + (temp_r4 * 0x4C))) = var_r0_2;
    }
    if ((arg0 >= 1) && (arg0 < 3)) {
        var_r0_3 = 1;
    } else {
        var_r0_3 = 0;
    }
    if (var_r0_3 == 0) {
        return;
    }
    if (var_r5 > func_0204cd64(arg0)) {
        var_r5 = func_0204cd64(arg0);
    }
    *((M2C_UNK *) ((s8 *) &data_0212a954 + (temp_r4 * 0x90))) = var_r5;
}
