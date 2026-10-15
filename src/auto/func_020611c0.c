#include "m2c.h"

s32 func_020611c0(s32 arg0, s32 arg1) {
    u32 var_r2;
    void *var_r3;

    var_r3 = arg0 + 0x240;
    var_r2 = 0;
loop_1:
    if (M2C_FIELD(var_r3, s32 *, 0) == arg1) {
        return M2C_FIELD(var_r3, s32 *, 4);
    }
    var_r2 += 1;
    var_r3 += 8;
    if (var_r2 >= 0x10U) {
        return 0;
    }
    goto loop_1;
}
