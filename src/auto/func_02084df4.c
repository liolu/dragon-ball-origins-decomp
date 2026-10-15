#include "m2c.h"

void func_02084df4(void *arg0) {
    u32 var_r3;
    void *var_ip;

    M2C_FIELD(arg0, s32 *, 0)    = -1;
    var_r3                       = 0;
    M2C_FIELD(arg0, s32 *, 4)    = -1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    var_ip                       = arg0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    do {
        M2C_FIELD(var_ip, s32 *, 0x14) = -1;
        M2C_FIELD(var_ip, s32 *, 0x18) = 0;
        M2C_FIELD(var_ip, s32 *, 0x1C) = 0;
        var_r3 += 1;
        M2C_FIELD(var_ip, s32 *, 0x24) = -1;
        var_ip += 0x14;
    } while (var_r3 < 0xAU);
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
}
