#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203cd00(void *);                      /* extern */
M2C_UNK func_0203cfbc(void *);                      /* extern */
M2C_UNK func_0203d0c8(void *);                      /* extern */
M2C_UNK func_0203d354();                            /* extern */
M2C_UNK func_0203d960();                            /* extern */
M2C_UNK func_0203db68();                            /* extern */
M2C_UNK func_0203e070();                            /* extern */
M2C_UNK func_0203e248();                            /* extern */

void func_0203cf2c(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x11C);
    if (temp_r1 == 0) {
        func_0203d354(arg0);
    } else if (temp_r1 == 1) {
        func_0203db68(arg0);
    } else {
        func_0203e248(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) M2C_FIELD(arg0, s32 *, 0x120);
    func_0203cfbc(arg0);
    func_02002800(M2C_FIELD(arg0, s32 *, 4), 0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x11C);
    if (temp_r0 == 0) {
        func_0203d0c8(arg0);
    } else if (temp_r0 == 1) {
        func_0203d960(arg0);
    } else {
        func_0203e070(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    func_0203cd00(arg0);
}
