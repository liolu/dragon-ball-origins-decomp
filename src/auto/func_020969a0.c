#include "m2c.h"

M2C_UNK func_02097be4(s32);                         /* extern */

void func_020969a0(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0x9C;
    var_r4 = 0;
    do {
        func_02097be4(var_r5);
        var_r4 += 1;
        var_r5 += 0x90;
    } while (var_r4 < 0xB);
}
