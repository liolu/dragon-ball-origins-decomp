/* compiler: 2.0/sp1p5 -flag no-opt_rebuildlogicals */
#include "m2c.h"

s32 func_0200ad2c(void *, M2C_UNK);                 /* extern */

s32 func_02050970(void *arg0, M2C_UNK arg1) {
    s32 var_r2;
    s32 var_r3;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0);
    var_r3  = 0;
    var_r2  = 0;
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 0x274) != 0)) {
        var_r2 = 1;
    }
    if (var_r2 != 0) {
        var_r3 = func_0200ad2c(temp_r0, arg1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x1568) != 0) {
        if ((var_r3 != 0) || (func_0200ad2c(arg0 + 0x12F4, arg1) != 0)) {
            var_r3 = 1;
        } else {
            var_r3 = 0;
        }
    }
    return var_r3;
}
