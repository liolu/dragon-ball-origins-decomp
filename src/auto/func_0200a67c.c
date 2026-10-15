#include "m2c.h"

M2C_UNK func_0200a6cc(s32, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_0202c2d0(M2C_UNK *, s32, s32);         /* extern */

void func_0200a67c(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    u8 sp4[12];

    func_0202c2d0(sp4, arg0, M2C_FIELD(((arg1 * 0x28) + arg0), s32 *, 0x288));
    func_0200a6cc(arg0, arg1, arg2, sp4, arg4);
}
