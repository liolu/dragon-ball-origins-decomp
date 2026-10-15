#include "m2c.h"

M2C_UNK func_0200f01c(s32, s32);                    /* extern */

void func_0201c0c4(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0x860;
    var_r4 = 0;
    do {
        func_0200f01c(arg0, var_r5);
        var_r4 += 1;
        var_r5 += 0x24;
    } while (var_r4 < 4);
}
