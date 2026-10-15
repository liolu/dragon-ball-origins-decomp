#include "m2c.h"

u32 func_0207b574(void *, M2C_UNK);                 /* extern */

u32 func_0207b514(M2C_UNK arg0, void *arg1) {
    u32 temp_r0;
    void *var_r1;

    var_r1  = arg1;
    temp_r0 = (u32) (M2C_FIELD(var_r1, s32 *, 4) & 0xF0000000) >> 0x1C;
    if (temp_r0 != 0) {
        var_r1 = NULL;
    }
    if (var_r1 == NULL) {
        return temp_r0;
    }
    return func_0207b574(var_r1, arg0);
}
