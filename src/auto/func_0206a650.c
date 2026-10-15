#include "m2c.h"

void *func_0206a650(void *arg0) {
    void *var_r0;

    var_r0 = arg0;
    if (((u32) (M2C_FIELD(var_r0, s32 *, 4) & 0xF0000000) >> 0x1C) != 1) {
        var_r0 = NULL;
    }
    return var_r0;
}
