#include "m2c.h"

M2C_UNK func_020ba6f0(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_020e3c20;

void *func_02063160(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e3c20;
    func_020ba6f0(0, arg0 + 0x10, 4);
    M2C_FIELD(arg0, s32 *, 0x98)  = 0;
    M2C_FIELD(arg0, s32 *, 0x9C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x258) = 0;
    M2C_FIELD(arg0, s32 *, 0x25C) = 0;
    return arg0;
}
