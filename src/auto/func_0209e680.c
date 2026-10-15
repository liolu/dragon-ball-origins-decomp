#include "m2c.h"

s32 func_0209e6bc(s32);                             /* extern */
extern s32 data_02162c78;

void func_0209e680(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;

    var_r4        = arg1;
    var_r5        = arg0;
    data_02162c78 = arg2;
    if (var_r4 == 0) {
        return;
    }
loop_2:
    temp_r0 = func_0209e6bc(var_r5);
    if (temp_r0 == 0) {
        return;
    }
    var_r4 -= temp_r0;
    var_r5 += temp_r0;
    if (var_r4 == 0) {
        return;
    }
    goto loop_2;
}
