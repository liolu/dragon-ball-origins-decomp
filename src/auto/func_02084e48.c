#include "m2c.h"

void func_02084e48(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r5;
    u32 var_r6;
    void *var_r7;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) >= 0xAU) {
        return;
    }
    var_r6 = 0;
    var_r7 = arg0 + 0x14;
loop_3:
    if (M2C_FIELD(var_r7, s32 *, 0x10) != -1) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r5 == 0) {
        M2C_FIELD(var_r7, s32 *, 0)    = arg1;
        M2C_FIELD(var_r7, s32 *, 4)    = arg2;
        M2C_FIELD(var_r7, s32 *, 8)    = arg3;
        M2C_FIELD(var_r7, s32 *, 0xC)  = 0;
        M2C_FIELD(var_r7, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, u32 *, 0x10)   = (u32) (M2C_FIELD(arg0, u32 *, 0x10) + 1);
        return;
    }
    var_r6 += 1;
    var_r7 += 0x14;
    if (var_r6 >= 0xAU) {
        return;
    }
    goto loop_3;
}
