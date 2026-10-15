#include "m2c.h"

M2C_UNK func_020016f4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02137b0c;
extern M2C_UNK data_02137b18;

void func_0204fb18(void) {
    func_020016f4(&data_02137b18);
    M2C_FIELD(&data_02137b0c, s32 *, 0x18) = -1;
    M2C_FIELD(&data_02137b0c, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_02137b0c, s32 *, 0x20) = 0;
}
