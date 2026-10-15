#include "m2c.h"

M2C_UNK func_02002090(s32, M2C_UNK);                /* extern */
s32 func_020020d8();                                /* extern */
M2C_UNK func_0209a0a4(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020d5150;
extern M2C_UNK data_020ed8f8;

void func_02001af8(s32 arg0, M2C_UNK arg1) {
    if (M2C_FIELD(&data_020d5150, s32 *, 8) == arg0) {
        return;
    }
    M2C_FIELD(&data_020d5150, s32 *, 8) = arg0;
    if (M2C_FIELD(&data_020ed8f8, s32 *, 4) != 0) {
        func_0209a0a4(M2C_FIELD(&data_020ed8f8, s32 *, 4), arg0, arg1);
    }
    if (func_020020d8() == 0) {
        return;
    }
    func_02002090(arg0, arg1);
}
