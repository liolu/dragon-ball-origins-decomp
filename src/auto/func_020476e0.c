#include "m2c.h"

s32 func_02047b84(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_020497e8(M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020b4f7c(s32, void *, M2C_UNK *);      /* extern */

void func_020476e0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3) {
    u8 sp0[12];

    func_020b4f7c(func_02047b84(arg0, M2C_FIELD(arg3, s32 *, 4), M2C_FIELD(arg3, s32 *, 8)), arg3 + 0xC, sp0);
    func_020497e8(arg1, arg2, sp0, M2C_FIELD(arg3, s32 *, 0x18));
}
