#include "m2c.h"

M2C_UNK func_02026888(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0202691c(void *arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x38) == 4) {
        if (M2C_FIELD(arg0, s32 *, 0x60) != arg1) {
            if (M2C_FIELD(arg0, s32 *, 0x5C) == arg1) {
                M2C_FIELD(arg0, s32 *, 0x38) = 0;
                func_02026888(arg0, 1, 0, 3);
                return;
            }
            var_r2 = 1;
            goto block_7;
        }
        goto block_7;
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C) != arg1) {
        var_r2 = 1;
    }
block_7:
    if (var_r2 == 0) {
        return;
    }
    func_02026888(arg0, 1, -0x10, 3);
    M2C_FIELD(arg0, s32 *, 0x38) = 4;
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
}
