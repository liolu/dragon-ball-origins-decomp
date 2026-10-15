#include "m2c.h"

void func_020534b4(void *arg0) {
    void *temp_r3;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x5EC) = 0;
    temp_r3                                                 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(temp_r3, s32 *, 0x5EC)                        = (s32) (M2C_FIELD(temp_r3, s32 *, 0x5EC) | 0x4000);
    M2C_FIELD(arg0, s32 *, 8)                               = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC)                             = 0x13;
}
