#include "m2c.h"

M2C_UNK func_020939c4(M2C_UNK *);                   /* extern */
M2C_UNK func_020939f0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215b8f8;

void func_02089f34(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C8)          = -1;
    M2C_FIELD(arg0, s32 *, 0x3D0)          = -1;
    M2C_FIELD(arg0, s32 *, 0x3D8)          = 0;
    M2C_FIELD(&data_0215b8f8, s32 *, 0x2C) = 0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = -1;
        func_020939f0(&data_0215b8f8);
        return;
    }
    func_020939c4(&data_0215b8f8);
}
