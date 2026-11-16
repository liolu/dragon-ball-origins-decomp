/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

void func_0200c590(void *arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;

    var_r3 = arg1 + M2C_FIELD(arg0, s32 *, 0x2FC);
    var_r1 = M2C_FIELD(arg0, s32 *, 0x300);
    if (var_r3 <= 0) {
        var_r2 = 0;
    } else {
        var_r2 = var_r3;
    }
    if (var_r1 > var_r2) {
        if (var_r3 <= 0) {
            var_r3 = 0;
        }
        var_r1 = var_r3;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *, s32), 0x28)(arg0, var_r1);
}
