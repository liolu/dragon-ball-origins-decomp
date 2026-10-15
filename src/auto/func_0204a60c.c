#include "m2c.h"

M2C_UNK func_0202a84c(M2C_UNK *, s16, s32, s32);    /* extern */
s32 func_02047c7c();                                /* extern */
M2C_UNK func_0204a69c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f8a08;
extern M2C_UNK data_02124f8c;
extern M2C_UNK data_02125038;

void func_0204a60c(s32 arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4) {
    if ((arg4 == 0) || (func_02047c7c() != 0)) {
        func_0202a84c(&data_020f8a08, arg2, arg1, arg3);
        M2C_FIELD(&data_02124f8c, s32 *, 0xB0) = 0;
        return;
    }
    M2C_FIELD(&data_02124f8c, s32 *, 0xAC) = arg0;
    M2C_FIELD(&data_02124f8c, s32 *, 0xB0) = 2;
    M2C_FIELD(&data_02124f8c, s32 *, 0xB8) = arg1;
    M2C_FIELD(&data_02124f8c, s16 *, 0xC0) = arg2;
    M2C_FIELD(&data_02124f8c, s32 *, 0xC4) = arg3;
    M2C_FIELD(&data_02124f8c, s32 *, 0xB4) = (s32) (arg4 + 1);
    func_0204a69c(&data_02125038);
}
