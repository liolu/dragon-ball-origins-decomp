#include "m2c.h"

M2C_UNK func_020b2104(s32, M2C_UNK);                /* extern */

void func_0209a168(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r1;

    func_020b2104(arg0 + 0x1DC + (arg1 * 0x10), arg2);
    temp_r1                          = arg0 + (arg1 * 0x10);
    M2C_FIELD(temp_r1, s32 *, 0x1E0) = 0;
    M2C_FIELD(temp_r1, s32 *, 0x1E4) = -1;
}
