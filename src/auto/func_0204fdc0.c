#include "m2c.h"

s32 func_02050164(M2C_UNK, s32, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_02137b30;
extern M2C_UNK data_02137b34;

void func_0204fdc0(M2C_UNK arg0, M2C_UNK arg1) {
    M2C_FIELD(&data_02137b30, s32 *, 0)    = 1;
    M2C_FIELD(&data_02137b30, s32 *, 0x14) = (s32) M2C_FIELD(&data_02137b30, s32 *, 4);
    M2C_FIELD(&data_02137b30, s32 *, 0x10) = func_02050164(arg0, M2C_FIELD(&data_02137b30, s32 *, 0x10), &data_02137b34, arg1);
    M2C_FIELD(&data_02137b30, s32 *, 0x14) =
        (s32) (M2C_FIELD(&data_02137b30, s32 *, 0x14) - M2C_FIELD(&data_02137b30, s32 *, 4));
}
