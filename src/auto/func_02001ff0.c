#include "m2c.h"

M2C_UNK func_020019f8();                            /* extern */
M2C_UNK func_0209a12c(M2C_UNK *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK data_020d5150;
extern M2C_UNK data_0215fcc8;

void func_02001ff0(M2C_UNK arg0) {
    func_020019f8();
    if ((s32) M2C_FIELD(&data_020d5150, s32 *, 4) < 0) {
        return;
    }
    func_0209a12c(&data_0215fcc8, M2C_FIELD(&data_020d5150, s32 *, 4), M2C_FIELD(&data_020d5150, s32 *, 8), arg0);
    M2C_FIELD(&data_020d5150, s32 *, 0x10) = (s32) M2C_FIELD(&data_020d5150, s32 *, 4);
    M2C_FIELD(&data_020d5150, s32 *, 4)    = -1;
}
