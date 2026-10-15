#include "m2c.h"

M2C_UNK func_020b0500();                            /* extern */
M2C_UNK func_020bad10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020bb328(M2C_UNK);                     /* extern */
M2C_UNK func_020bb4e4(s32);                         /* extern */
s32 func_020bb550();                                /* extern */

void func_020aedc0(void) {
    s32 temp_r4;

    func_020b0500();
    func_020bad10(0, 0, 0, 0);
    temp_r4 = func_020bb550();
    func_020bb328(1);
    func_020bb4e4(temp_r4);
}
