#include "m2c.h"

extern M2C_UNK data_0215f2a4;

void func_02099628(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0215f2a4, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_0215f2a4, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_0215f2a4, s32 *, 0x14) = 0x6C078965;
    M2C_FIELD(&data_0215f2a4, s32 *, 0x18) = 0x5D588B65;
    M2C_FIELD(&data_0215f2a4, s32 *, 0x1C) = 0x269EC3;
    M2C_FIELD(&data_0215f2a4, s32 *, 0x20) = 0;
}
