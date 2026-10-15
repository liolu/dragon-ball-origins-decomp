#include "m2c.h"

M2C_UNK func_02035e18(void *, s32, M2C_UNK, s32, s32); /* extern */

void func_02035c04(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r0;

    func_02035e18(arg0, arg1, arg2, arg0 + 0x30, arg0 + 0x58);
    if (arg1 < 0x64) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x14C) = var_r0;
}
