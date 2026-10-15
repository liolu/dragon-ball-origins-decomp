#include "m2c.h"

M2C_UNK func_020497e8(M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 func_02049b80(M2C_UNK);                         /* extern */
M2C_UNK func_020b4f7c(s32, s32, M2C_UNK *);         /* extern */

void func_02049878(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    u8 sp0[12];

    func_020b4f7c(func_02049b80(arg1) + 0x10, arg2 + 4, sp0);
    func_020497e8(arg0, arg1, sp0, M2C_FIELD(arg2, s32 *, 0x10));
}
