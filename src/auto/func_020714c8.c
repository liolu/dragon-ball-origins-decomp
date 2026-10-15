#include "m2c.h"

s32 func_0206b280();                                /* extern */
s32 func_0206b34c();                                /* extern */

void func_020714c8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18)  = func_0206b34c();
    M2C_FIELD(arg0, s32 *, 0x20)  = func_0206b34c();
    M2C_FIELD(arg0, s32 *, 0x3A8) = func_0206b34c();
    M2C_FIELD(arg0, s32 *, 0x3AC) = func_0206b280();
}
