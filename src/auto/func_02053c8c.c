#include "m2c.h"

s32 func_0202c83c(s32);                             /* extern */
M2C_UNK func_020b4fb0(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_020b50a4(M2C_UNK *);                   /* extern */

void func_02053c8c(void *arg0) {
    u8 sp0[12];
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, volatile s32 *, 0x1C);
    func_020b4fb0(func_0202c83c(M2C_FIELD(arg0, volatile s32 *, 0x24)), temp_r4, sp0);
    func_020b50a4(sp0);
}
