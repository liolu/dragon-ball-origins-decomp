#include "m2c.h"

M2C_UNK func_02046a24(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02047ba4(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020b4280(M2C_UNK, s32, M2C_UNK *);     /* extern */

void func_020469e4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u8 sp0[12];

    func_020b4280(arg1, func_02047ba4(arg0, arg2, arg3), sp0);
    func_02046a24(arg0, sp0);
}
