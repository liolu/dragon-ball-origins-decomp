#include "m2c.h"

M2C_UNK func_0200da3c(s32, M2C_UNK);                /* extern */

void func_02053120(void *arg0) {
    s32 var_r1;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x160) >= (u32) M2C_FIELD(arg0, u32 *, 0x15C)) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        M2C_FIELD(arg0, u32 *, 0x160) = 0U;
        M2C_FIELD(arg0, s32 *, 8)     = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0xC)   = 0x13;
    }
    M2C_FIELD(arg0, u32 *, 0x160) = (u32) (M2C_FIELD(arg0, u32 *, 0x160) + 1);
    func_0200da3c(M2C_FIELD(arg0, s32 *, 0x20), 0);
}
