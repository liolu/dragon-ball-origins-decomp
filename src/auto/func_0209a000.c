/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_0209a000(s32 arg0, s32 arg1, s32 arg2) {
    u32 var_lr;
    void *temp_ip;

    var_lr = 0;
loop_1:
    temp_ip = arg0 + (var_lr * 0x10);
    if (M2C_FIELD(temp_ip, s32 *, 0xE0) == 0) {
        M2C_FIELD(temp_ip, s32 *, 0xE0) = 1;
        M2C_FIELD(temp_ip, s32 *, 0xE8) = arg1;
        M2C_FIELD(temp_ip, s32 *, 0xE4) = arg2;
        return arg0 + 0xDC + (var_lr * 0x10);
    }
    var_lr += 1;
    if (var_lr >= 0x10U) {
        return 0;
    }
    goto loop_1;
}
