#include "m2c.h"

s32 func_020092e8(void *arg0) {
    s32 var_r2;
    void *var_r3;

    var_r3 = arg0;
    var_r2 = 0;
loop_1:
    if (M2C_FIELD(var_r3, s32 *, 0x1508) & 4) {
        return 1;
    }
    var_r2 += 1;
    var_r3 += 0x68;
    if (var_r2 >= 3) {
        if (M2C_FIELD(arg0, s32 *, 0x1668) & 4) {
            return 1;
        }
        return 0;
    }
    goto loop_1;
}
