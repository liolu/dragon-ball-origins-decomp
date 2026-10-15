#include "m2c.h"

M2C_UNK func_02025340(M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_02046dcc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_020f6268;

void func_020470cc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp4[240];

    func_02025340(&data_020f6268, arg3, sp4, arg4);
    func_02046dcc(arg0, arg1, arg2, sp4, arg4);
}
