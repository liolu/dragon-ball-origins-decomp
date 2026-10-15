#include "m2c.h"

s32 func_0204cc5c(s32);                             /* extern */
s32 func_0204ce50(s32);                             /* extern */

void func_02053f48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x17C) = func_0204ce50(M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x10)  = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xAC);
    M2C_FIELD(arg0, s32 *, 0x154) = func_0204cc5c(M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xAC));
}
