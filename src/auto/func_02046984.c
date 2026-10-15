#include "m2c.h"

s32 func_0202c83c();                                /* extern */
M2C_UNK func_020469cc(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02047b48(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_020b4f7c(s32, M2C_UNK, M2C_UNK *);     /* extern */

void func_02046984(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp0[12];

    func_02047b48(arg0, arg3, arg4);
    func_020b4f7c(func_0202c83c(), arg2, sp0);
    func_020469cc(arg0, arg1, sp0);
}
