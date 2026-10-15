#include "m2c.h"

s32 func_0209ba8c(void *arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = *M2C_FIELD(arg0, s32 **, 0x14);
    var_r0  = temp_r1 & 0x300;
    if ((var_r0 != 0x100) && (var_r0 != 0x300)) {
        var_r0 |= temp_r1 & 0x30000000;
    }
    return var_r0;
}
