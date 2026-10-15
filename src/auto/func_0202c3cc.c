#include "m2c.h"

M2C_UNK func_0202c408(M2C_UNK *);                   /* extern */
M2C_UNK func_0202c4e8(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0202c51c(M2C_UNK *, M2C_UNK, s32);     /* extern */

void func_0202c3cc(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp0[48];

    func_0202c408(sp0);
    func_0202c51c(sp0, arg3, arg4);
    func_0202c4e8(arg0, sp0);
}
