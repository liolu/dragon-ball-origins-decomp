#include "m2c.h"

M2C_UNK func_0209e680(s32, s32, M2C_UNK);           /* extern */

void func_02095628(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = (arg1 * 0xC) + arg0;
    func_0209e680(M2C_FIELD(temp_r2, s32 *, 8), M2C_FIELD(temp_r2, s32 *, 0xC), 0);
}
