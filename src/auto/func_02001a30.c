#include "m2c.h"

M2C_UNK func_020019f8(M2C_UNK);                     /* extern */
M2C_UNK func_0200245c(s32);                         /* extern */
s32 func_0209a000(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0209a048(s32, s32, M2C_UNK, s32, s32); /* extern */
s32 func_0209a0e0();                                /* extern */
extern M2C_UNK data_020d5150;
extern M2C_UNK data_020ed8f8;
extern M2C_UNK data_0215fcc8;

void func_02001a30(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_020ed8f8, s32 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(&data_020ed8f8, s32 *, 8) != 0) {
        return;
    }
    if ((M2C_FIELD(&data_020ed8f8, s32 *, 4) != 0) && (arg0 == func_0209a0e0())) {
        return;
    }
    func_020019f8(0);
    func_0200245c(arg0);
    M2C_FIELD(&data_020ed8f8, s32 *, 4) = func_0209a000(&data_0215fcc8, 0, 0);
    func_0209a048(M2C_FIELD(&data_020ed8f8, s32 *, 4), arg0, -1, M2C_FIELD(&data_020d5150, s32 *, 8), arg1);
}
