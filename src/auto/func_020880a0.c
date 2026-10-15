#include "m2c.h"

s32 func_020880a0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_ip;
    void *var_r0;

    var_r0 = arg0;
    var_ip = 0;
loop_1:
    if ((arg1 == M2C_FIELD(var_r0, s32 *, 0x27C)) && (arg2 == M2C_FIELD(var_r0, s32 *, 0x280))) {
        return var_ip;
    }
    var_ip += 1;
    var_r0 += 0x84;
    if (var_ip >= 0xE) {
        return -1;
    }
    goto loop_1;
}
