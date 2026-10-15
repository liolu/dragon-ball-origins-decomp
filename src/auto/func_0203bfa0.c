#include "m2c.h"

M2C_UNK func_0203bfc4();                            /* extern */

void func_0203bfa0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x998) = (s32) (arg1 - 8);
    M2C_FIELD(arg0, s32 *, 0x99C) = (s32) (arg2 - 8);
    M2C_FIELD(arg0, s32 *, 0x9A0) = 0;
    func_0203bfc4();
}
