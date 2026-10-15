#include "m2c.h"

s32 func_0202c8d4(M2C_UNK);                         /* extern */
s32 func_02047c7c();                                /* extern */
M2C_UNK func_02048f50(M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020b4280(M2C_UNK, s32, M2C_UNK *);     /* extern */

void func_02048fc0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp0[12];

    if (func_02047c7c() != 0) {
        return;
    }
    func_020b4280(arg3, func_0202c8d4(arg2), sp0);
    func_02048f50(arg0, arg1, sp0, arg4);
}
