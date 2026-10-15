#include "m2c.h"

s32 func_0204a4c8(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02124f8c;
extern M2C_UNK data_02124f9c;

void func_020444c8(void) {
    if (M2C_FIELD(&data_02124f8c, s32 *, 0x14) == 0) {
        return;
    }
    if (func_0204a4c8(&data_02124f9c) == 0) {
        return;
    }
    M2C_FIELD(&data_02124f8c, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02124f8c, s32 *, 0x14) = 0;
}
