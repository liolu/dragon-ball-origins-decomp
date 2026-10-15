#include "m2c.h"

void func_0200d7b4(void *arg0) {
    u32 var_ip;
    void *var_lr;
    void *var_r4;

    var_ip = 0;
    var_lr = arg0 + 0x510;
    do {
        if (var_ip < 0xCU) {
            var_r4 = var_lr;
        } else {
            var_r4 = NULL;
        }
        M2C_FIELD(var_r4, s32 *, 8) = -1;
        M2C_FIELD(var_r4, s32 *, 0) = 0;
        var_ip += 1;
        M2C_FIELD(var_r4, s32 *, 4) = 0;
        var_lr += 0xC;
    } while (var_ip < 0xCU);
    M2C_FIELD(arg0, s32 *, 0x50C) = 0;
}
