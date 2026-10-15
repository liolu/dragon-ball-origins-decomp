#include "m2c.h"

extern M2C_UNK data_021662c0;

void func_020ac7f4(s32 arg0, s16 arg1) {
    M2C_FIELD(&data_021662c0, s32 *, 0x60) = arg0;
    M2C_FIELD(&data_021662c0, s16 *, 0x64) = arg1;
}
