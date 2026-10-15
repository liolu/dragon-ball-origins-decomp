#include "m2c.h"

void *func_0204cb2c(s32, s32, s32);                 /* extern */

void func_0200efe0(void *arg0, s32 arg1) {
    void *temp_r0;

    temp_r0                       = func_0204cb2c(M2C_FIELD(arg0, s32 *, 0xAC), M2C_FIELD(arg0, s32 *, 0x5BC), arg1);
    M2C_FIELD(arg0, s32 *, 0x5C0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x614) = (s32) M2C_FIELD(temp_r0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x618) = (s32) M2C_FIELD(temp_r0, s32 *, 0x14);
}
