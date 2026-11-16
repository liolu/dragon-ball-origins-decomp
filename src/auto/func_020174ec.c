/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

void func_020174ec(void *arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;

    var_r3 = M2C_FIELD(arg0, s32 *, 0x784);
    var_r2 = arg1 + M2C_FIELD(arg0, s32 *, 0x780);
    if (var_r2 <= 0) {
        var_r1 = 0;
    } else {
        var_r1 = var_r2;
    }
    if (var_r3 > var_r1) {
        if (var_r2 <= 0) {
            var_r2 = 0;
        }
        var_r3 = var_r2;
    }
    M2C_FIELD(arg0, s32 *, 0x780) = var_r3;
}
