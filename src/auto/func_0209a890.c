#include "m2c.h"

s32 func_0209a890(void *arg0) {
    s32 temp_r3;
    void *temp_r2;

    temp_r3                          = M2C_FIELD(arg0, s32 *, 0x4E0);
    M2C_FIELD(arg0, s32 *, 0x4E0)    = (s32) (temp_r3 + 1);
    temp_r2                          = arg0 + (temp_r3 * 0x10);
    M2C_FIELD(temp_r2, s32 *, 0x4E4) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(temp_r2, s32 *, 0x4E8) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(temp_r2, s32 *, 0x4EC) = (s32) M2C_FIELD(arg0, s32 *, 0x98);
    M2C_FIELD(temp_r2, s32 *, 0x4F0) = (s32) M2C_FIELD(arg0, s32 *, 0x9C);
    return temp_r3;
}
