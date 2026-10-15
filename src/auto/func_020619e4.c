#include "m2c.h"

void *func_02061700(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020823b4(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void *func_020619e4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
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
            func_020823b4(var_r0, arg1, arg2, arg3);
        }
    }
    return var_r4;
}
