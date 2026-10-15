#include "m2c.h"

extern M2C_UNK data_0216f8a0;

void func_020c0f94(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(&data_0216f8a0, s32 *, 4) + (arg0 * 4)), s32 *, 0x18) = arg1;
}
