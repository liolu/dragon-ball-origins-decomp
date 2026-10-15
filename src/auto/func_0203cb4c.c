#include "m2c.h"

s32 func_020027e0(M2C_UNK);                         /* extern */
M2C_UNK func_02002980(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203cba8();                            /* extern */
M2C_UNK func_0203cd00(void *);                      /* extern */
M2C_UNK func_0203cd94(void *);                      /* extern */
M2C_UNK func_0203d0c8(void *);                      /* extern */

void func_0203cb4c(void *arg0, s32 arg1) {
    func_0203cba8();
    func_02002980(0x33304E4D, 0);
    M2C_FIELD(arg0, s32 *, 0x124) = arg1;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    func_0203cd94(arg0);
    M2C_FIELD(arg0, s32 *, 4) = func_020027e0(0);
    func_0203d0c8(arg0);
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    func_0203cd00(arg0);
}
