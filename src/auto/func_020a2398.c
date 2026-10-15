#include "m2c.h"

M2C_UNK func_020a1eec(void *);                      /* extern */
M2C_UNK func_020a23d0(M2C_UNK, void *, s32, M2C_UNK); /* extern */

void func_020a2398(M2C_UNK arg0, void *arg1, M2C_UNK arg2) {
    func_020a1eec(arg1);
    func_020a23d0(arg0, arg1 + 0x70, M2C_FIELD(arg1, s32 *, 0x68) + M2C_FIELD(arg1, s32 *, 0x6C), arg2);
}
