#include "m2c.h"

M2C_UNK func_02047f94(M2C_UNK, M2C_UNK, void *);    /* extern */

void *func_020480cc(M2C_UNK arg0, M2C_UNK arg1, void *arg2, void *arg3) {
    func_02047f94(arg0, arg1, arg3);
    M2C_FIELD(arg3, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg3, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 8);
    return arg3;
}
