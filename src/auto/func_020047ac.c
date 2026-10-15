#include "m2c.h"

M2C_UNK func_020019f8(M2C_UNK);                     /* extern */
M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0215f2fc;

void func_020047ac(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0xC8A) {
        func_020019f8(0x1E);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 8) >= 0xCA8) {
        M2C_FIELD(arg0, s32 *, 4) = 2;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        return;
    }
    if (M2C_FIELD(&data_0215f2fc, s32 *, 0x30) == 0) {
        return;
    }
    func_02001c08(0, 5, 0);
    M2C_FIELD(arg0, s32 *, 4) = 3;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
