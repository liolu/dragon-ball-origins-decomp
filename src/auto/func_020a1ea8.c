#include "m2c.h"

M2C_UNK func_020a1eec(void *);                      /* extern */
M2C_UNK func_020a1f14(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020a23d0(M2C_UNK, void *, s32, s32);   /* extern */

void func_020a1ea8(M2C_UNK arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020a1f14(arg1, arg2, arg3);
    func_020a1eec(arg1);
    func_020a23d0(arg0, arg1 + 0x70, M2C_FIELD(arg1, s32 *, 0x68) + M2C_FIELD(arg1, s32 *, 0x6C), arg4);
}
