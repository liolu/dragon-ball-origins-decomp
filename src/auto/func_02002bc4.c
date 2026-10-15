#include "m2c.h"

s32 func_020016b8(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_02003408(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_0200345c(s32, M2C_UNK *);              /* extern */
M2C_UNK func_0209d7a8(M2C_UNK, M2C_UNK *);          /* extern */

void func_02002bc4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[64];
    s32 temp_r0;

    temp_r0 = func_02003408(arg1, sp0);
    if (temp_r0 != 0) {
        func_0200345c(func_020016b8(arg2, temp_r0, 4), sp0);
    }
    func_0209d7a8(arg0, sp0);
}
