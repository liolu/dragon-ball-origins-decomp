#include "m2c.h"

extern M2C_UNK data_020e76cc;
extern M2C_UNK data_020e7840;

void func_020a4698(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e76cc;
    M2C_FIELD(arg0, s8 *, 0xE)     = 1;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = arg2;
    M2C_FIELD(arg0, s16 *, 0xC)    = arg3;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e7840;
}
