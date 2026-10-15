#include "m2c.h"

s32 func_0206b34c();                                /* extern */
M2C_UNK func_020714c8();                            /* extern */

void func_020730c4(void *arg0) {
    func_020714c8();
    M2C_FIELD(arg0, s32 *, 0x40C) = func_0206b34c();
    M2C_FIELD(arg0, s32 *, 0x5D8) = func_0206b34c();
}
