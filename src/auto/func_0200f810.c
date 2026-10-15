#include "m2c.h"

void *func_0200f810(void *arg0, void *arg1) {
    s32 var_r2;
    s32 var_r3;

    var_r3 = 1;
    var_r2 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x62C) & (1 << M2C_FIELD(arg1, s16 *, 0xA)))) {
        var_r3 = 0;
    }
    if (var_r3 != 0) {
        var_r2 = 1;
    }
    if (M2C_FIELD(arg1, s16 *, 8) != 0) {
        var_r2 ^= 1;
    }
    if (var_r2 != 0) {
        return arg1 + 0xC;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
