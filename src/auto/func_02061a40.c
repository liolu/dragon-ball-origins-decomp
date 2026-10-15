#include "m2c.h"

void *func_02061700(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02082448(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void *func_02061a40(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    void *var_r0;
    void *var_r4;

    var_r0 = func_02061700(arg0, 2);
    var_r4 = NULL;
    if (var_r0 != NULL) {
        if (((u32) (M2C_FIELD(var_r0, s32 *, 4) & 0xF0000000) >> 0x1C) != 2) {
            var_r0 = NULL;
        }
        var_r4 = var_r0;
        if (var_r0 != NULL) {
            func_02082448(var_r0, arg1, arg2, arg3, arg4, arg5);
        }
    }
    return var_r4;
}
