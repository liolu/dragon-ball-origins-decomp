#include "m2c.h"

M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0204f270(M2C_UNK *);                       /* extern */
M2C_UNK func_0206f39c(void *);                      /* extern */
M2C_UNK func_0206f438(void *);                      /* extern */
M2C_UNK func_0206f498(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0206f80c(void *, M2C_UNK);             /* extern */

void func_0206f30c(void *arg0) {
    u8 sp0[36];
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~1);
    func_02001c08(0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_0206f80c(arg0, -0x100);
    temp_r0 = func_0204f270(sp0);
    switch (temp_r0) {                              /* irregular */
        case -1:
            func_0206f39c(arg0);
            return;
        case 0:
            func_0206f498(arg0, sp0);
            return;
        default:
            func_0206f438(arg0);
            return;
    }
}
