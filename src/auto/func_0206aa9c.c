#include "m2c.h"

s32 func_0206aa9c(void *arg0) {
    s32 temp_r1;
    s32 var_r2;

    var_r2  = 1;
    temp_r1 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r1 != -1) && (temp_r1 <= 0)) {
        var_r2 = 0;
    }
    return var_r2;
}
