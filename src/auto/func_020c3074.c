#include "m2c.h"

M2C_UNK func_020b9bb4(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
s32 func_020c2ddc();                                /* extern */
extern s32 data_02170340;

void func_020c3074(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_020ba034();
    data_02170340 = arg0;
    if (func_020c2ddc() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_020b9bb4(0xF000, var_r1);
    }
    func_020ba048(temp_r4);
}
