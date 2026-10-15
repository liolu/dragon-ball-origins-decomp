#include "m2c.h"

M2C_UNK func_0205d0ac(s32);                         /* extern */

void func_0205e4cc(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        func_0205d0ac(var_r5);
        var_r4 += 1;
        var_r5 += 0xD4;
    } while (var_r4 < 0x10);
}
