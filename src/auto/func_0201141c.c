#include "m2c.h"

M2C_UNK func_02001ef4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200f01c(void *, void *);              /* extern */

void func_0201141c(void *arg0) {
    s32 temp_r0;

    func_0200f01c(arg0, arg0 + 0x47C);
    func_0200f01c(arg0, arg0 + 0x4A0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x664);
    if (temp_r0 == 0) {
        return;
    }
    func_02001ef4(temp_r0, 0);
    M2C_FIELD(arg0, s32 *, 0x664) = 0;
}
