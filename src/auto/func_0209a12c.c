#include "m2c.h"

M2C_UNK func_020b20cc(s32);                         /* extern */
M2C_UNK func_020b2164(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0209a12c(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;

    temp_r4                                         = arg0 + 0x1DC + (arg1 * 0x10);
    M2C_FIELD((arg0 + (arg1 * 0x10)), s32 *, 0x1E0) = 2;
    func_020b20cc(temp_r4);
    func_020b2164(temp_r4, arg2, arg3);
}
