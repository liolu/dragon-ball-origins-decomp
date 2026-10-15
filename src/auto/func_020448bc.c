#include "m2c.h"

extern M2C_UNK data_02124f8c;

void func_020448bc(void) {
    if (M2C_FIELD(&data_02124f8c, s32 *, 0xC) != 0) {
        M2C_FIELD(&data_02124f8c, s32 *, 8) = (s32) (M2C_FIELD(&data_02124f8c, s32 *, 8) + 1);
    }
}
