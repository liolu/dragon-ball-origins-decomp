#include "m2c.h"

M2C_UNK func_02050164(M2C_UNK, s32, s32 *, M2C_UNK); /* extern */
extern M2C_UNK data_02137b30;

void func_0204fe0c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;

    sp0 = M2C_FIELD(&data_02137b30, s32 *, 0x14);
    func_02050164(arg0, M2C_FIELD(&data_02137b30, s32 *, 8), &sp0, arg1);
}
