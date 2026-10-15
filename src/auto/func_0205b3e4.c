#include "m2c.h"

void func_0205b3e4(void *arg0) {
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 3;
    var_r1                        = M2C_FIELD(arg0, s32 *, 0x1C4);
    if (var_r1 == 3) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x1C8);
    }
    M2C_FIELD(arg0, s32 *, 0x1C8) = var_r1;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 3;
    M2C_FIELD(arg0, s32 *, 0x174) = 5;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 5;
}
