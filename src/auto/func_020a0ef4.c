#include "m2c.h"

M2C_UNK func_020a0f30();                            /* extern */

void func_020a0ef4(void *arg0) {
    s32 var_r2;
    void *var_r3;

    M2C_FIELD(arg0, s32 *, 0x8C8) = 0x3C;
    var_r2                        = 0;
    M2C_FIELD(arg0, s32 *, 0x8C4) = 0;
    var_r3                        = arg0;
    M2C_FIELD(arg0, s32 *, 0x8C0) = 0;
    do {
        var_r2 += 1;
        M2C_FIELD(var_r3, s32 *, 0x434) = 0;
        var_r3 += 0x244;
    } while (var_r2 < 3);
    func_020a0f30(arg0);
}
