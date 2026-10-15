#include "m2c.h"

extern M2C_UNK data_0214768c;

void func_020812fc(void *arg0, s32 arg1) {
    u32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x610) > arg1) {
        return;
    }
    temp_r3 = arg1 + 1;
    if (temp_r3 < (u32) M2C_FIELD(&data_0214768c, u32 *, 0x10C)) {
        M2C_FIELD(arg0, s32 *, 0x610) = (s32) temp_r3;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x610) = -1;
}
