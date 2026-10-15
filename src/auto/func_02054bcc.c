#include "m2c.h"

M2C_UNK func_0200da3c(s32, M2C_UNK);                /* extern */

void func_02054bcc(void *arg0) {
    func_0200da3c(M2C_FIELD(arg0, s32 *, 0x20), 0);
    M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = 0x13;
}
