#include "m2c.h"

M2C_UNK func_020267a8(M2C_UNK *, u16);              /* extern */
s32 func_02047c7c(s32);                             /* extern */
M2C_UNK func_0204a4c8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f6268;
extern M2C_UNK data_020f6368;
extern M2C_UNK data_02124f8c;
extern M2C_UNK data_02124f9c;

void func_0204a454(s32 arg0, u16 arg1, s32 arg2) {
    u16 var_r5;

    var_r5 = arg1;
    if (var_r5 & 0x8000) {
        var_r5 = M2C_FIELD(&data_020f6368, u16 *, 0x78);
    }
    if ((arg2 == 0) || (func_02047c7c(arg0) != 0)) {
        func_020267a8(&data_020f6268, var_r5);
        return;
    }
    M2C_FIELD(&data_02124f8c, s32 *, 0x10) = arg0;
    M2C_FIELD(&data_02124f8c, s32 *, 0x14) = (s32) (arg2 + 1);
    M2C_FIELD(&data_02124f8c, u16 *, 0x18) = var_r5;
    func_0204a4c8(&data_02124f9c);
}
