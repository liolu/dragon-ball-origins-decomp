#include "m2c.h"

M2C_UNK func_020ae4d4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020ae500(s32, s32);                    /* extern */
M2C_UNK func_020ae8dc(s32, M2C_UNK *);              /* extern */

void func_020aea40(s32 arg0, s32 arg1) {
    u8 sp0[8];
    s32 temp_r4;

    temp_r4 = arg1 - 0x10;
    func_020ae4d4(sp0, temp_r4);
    func_020ae500(arg0 + 0x2C, temp_r4);
    func_020ae8dc(arg0 + 0x24, sp0);
}
