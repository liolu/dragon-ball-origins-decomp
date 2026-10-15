#include "m2c.h"

M2C_UNK func_02023d98(M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_02026888(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0204d310(s32);                         /* extern */
s32 func_0204e8c0(M2C_UNK);                         /* extern */
s32 func_0204e8d8(M2C_UNK);                         /* extern */
s32 func_0204e8f0(M2C_UNK);                         /* extern */
M2C_UNK func_0204eb6c(M2C_UNK);                     /* extern */
M2C_UNK func_0205199c();                            /* extern */
extern s32 data_020e7dd4;
extern s32 data_020e7dd8;
extern M2C_UNK data_020f6268;

void func_02008598(M2C_UNK arg0) {
    s32 temp_r5;
    s32 temp_r6;

    if (!(data_020e7dd8 & 1)) {
        data_020e7dd4 = 0;
        data_020e7dd8 |= 1;
    }
    func_0204d310(data_020e7dd4);
    func_0204eb6c(arg0);
    func_0205199c();
    func_02026888(&data_020f6268, 1, -0x10, 0);
    func_02026888(&data_020f6268, 0, -0x10, 0);
    temp_r6 = func_0204e8c0(arg0);
    temp_r5 = func_0204e8d8(arg0);
    func_02023d98(&data_020f6268, temp_r6, temp_r5, func_0204e8f0(arg0), 0);
}
