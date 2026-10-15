#include "m2c.h"

M2C_UNK func_0209974c(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_02099824();                            /* extern */
s32 func_020b986c(M2C_UNK);                         /* extern */
s32 func_020b9880(M2C_UNK);                         /* extern */
extern s32 data_0215f2c8;
extern M2C_UNK data_0215f2d8;

void func_020997d0(void) {
    s32 temp_r4;
    s32 temp_r4_2;

    func_02099824();
    temp_r4   = func_020b9880(0);
    temp_r4_2 = func_020b986c(0) - temp_r4;
    if (temp_r4_2 != 0) {
        func_0209974c(&data_0215f2d8, func_020b9880(0), temp_r4_2);
    }
    data_0215f2c8 = 1;
}
