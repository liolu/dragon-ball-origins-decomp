#include "m2c.h"

M2C_UNK func_0200a25c();                            /* extern */

void func_0200ab58(void *arg0, s32 arg1, s32 arg2) {
    func_0200a25c();
    M2C_FIELD(arg0, s32 *, 0x98) = 3;
    M2C_FIELD(arg0, s32 *, 0x9C) = arg2;
}
