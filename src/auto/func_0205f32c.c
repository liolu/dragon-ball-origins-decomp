#include "m2c.h"

M2C_UNK func_0205e6dc(s32);                         /* extern */

void func_0205f32c(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        func_0205e6dc(var_r5);
        var_r4 += 1;
        var_r5 += 0x60;
    } while (var_r4 < 0x10);
}
