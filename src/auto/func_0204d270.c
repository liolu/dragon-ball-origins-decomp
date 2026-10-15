#include "m2c.h"

u32 func_0204d024();                             /* extern */
extern M2C_UNK data_0212a9bc;
extern M2C_UNK data_0212ad28;

void func_0204d270(s32 arg0, u32 arg1) {
    u32 var_r5;
    u8 temp_r4;

    var_r5  = arg1;
    temp_r4 = ((s8 *) &data_0212ad28)[arg0];
    if (var_r5 > func_0204d024()) {
        var_r5 = func_0204d024(arg0);
    }
    *((M2C_UNK *) ((s8 *) &data_0212a9bc + (temp_r4 * 0x90))) = var_r5;
}
