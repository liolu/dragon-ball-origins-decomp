#include "m2c.h"

s32 func_02099ba8();                                /* extern */
M2C_UNK func_02099bb4(s32);                         /* extern */
s32 func_02099c0c(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02099c5c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02099ba8();
    temp_r4 = func_02099c0c(temp_r0, arg1, arg2);
    func_02099bb4(temp_r0);
    return temp_r4;
}
