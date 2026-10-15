#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0204107c();                            /* extern */
M2C_UNK func_020412d0(void *);                      /* extern */
M2C_UNK func_02041304(void *);                      /* extern */
M2C_UNK func_02041518(void *);                      /* extern */
M2C_UNK func_02041668(void *);                      /* extern */
M2C_UNK func_02041828(void *);                      /* extern */

void func_02041250(void *arg0) {
    u32 temp_r0;

    func_0204107c();
    func_02002800(M2C_FIELD(arg0, s32 *, 4), 1);
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x508);
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_020412d0(arg0);
            break;
        case 2:
            func_02041304(arg0);
            break;
        case 1:
            func_02041518(arg0);
            break;
        case 3:
            func_02041668(arg0);
            break;
        case 4:
            func_02041828(arg0);
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x50C) = 0;
}
