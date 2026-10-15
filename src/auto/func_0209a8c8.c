#include "m2c.h"

void func_0209a8c8(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3                       = arg0 + (arg1 * 0x10);
    M2C_FIELD(arg0, s32 *, 8)     = (s32) M2C_FIELD(temp_r3, s32 *, 0x4E4);
    M2C_FIELD(arg0, s32 *, 0x14)  = (s32) M2C_FIELD(temp_r3, s32 *, 0x4E8);
    M2C_FIELD(arg0, s32 *, 0x98)  = (s32) M2C_FIELD(temp_r3, s32 *, 0x4EC);
    M2C_FIELD(arg0, s32 *, 0x9C)  = (s32) M2C_FIELD(temp_r3, s32 *, 0x4F0);
    M2C_FIELD(arg0, s32 *, 0x4E0) = (s32) (arg1 + 1);
}
