#include "m2c.h"

s32 func_0204e550(s32);                             /* extern */

s32 func_0204e524(void) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;

    var_r4 = 0;
    var_r5 = 0xD8;
    do {
        temp_r0 = func_0204e550(var_r5);
        var_r5 += 1;
        var_r4 += temp_r0;
    } while (var_r5 < 0xE0);
    return var_r4;
}
