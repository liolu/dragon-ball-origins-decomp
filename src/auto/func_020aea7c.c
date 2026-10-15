#include "m2c.h"

M2C_UNK func_020ae440(void *, s32, s32, M2C_UNK, s32); /* extern */

void *func_020aea7c(void *arg0, M2C_UNK arg1, s32 arg2) {
    func_020ae440(arg0, 0x46524D48, arg0 + 0x30, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}
