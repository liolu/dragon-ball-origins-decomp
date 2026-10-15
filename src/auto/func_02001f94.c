#include "m2c.h"

s32 func_02002104();                                /* extern */
M2C_UNK func_0209a0ec(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_020d5150;
extern M2C_UNK data_0215fcc8;

void func_02001f94(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                             = func_02002104();
    M2C_FIELD(&data_020d5150, s32 *, 4) = temp_r0;
    func_0209a0ec(&data_0215fcc8, temp_r0, arg0);
}
