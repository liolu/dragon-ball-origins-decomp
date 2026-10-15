#include "m2c.h"

extern M2C_UNK data_0214796c;

void func_020670f4(void *arg0) {
    s32 var_r1;

    if ((M2C_FIELD(arg0, s32 *, 0x12F0) & 0x20) == 0x20) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if ((var_r1 != 0) && (&data_0214796c != NULL)) {
        M2C_FIELD(arg0, s32 *, 0x1338) = (s32) M2C_FIELD(&data_0214796c, s32 *, 0x3C8);
    }
}
