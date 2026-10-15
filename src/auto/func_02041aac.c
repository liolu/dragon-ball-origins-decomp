#include "m2c.h"

void func_02041aac(void *arg0, void *arg1) {
    u32 var_ip;
    u8 temp_r2;
    u8 temp_r3;
    void *var_lr;
    void *var_r4;

    var_r4                       = arg1;
    M2C_FIELD(arg0, s32 *, 0x98) = 1;
    var_lr                       = arg0 + 0x9C;
    var_ip                       = 0xC;
    do {
        temp_r3 = M2C_FIELD(var_r4, u8 *, 0);
        temp_r2 = M2C_FIELD(var_r4, u8 *, 1);
        var_r4 += 2;
        var_ip -= 1;
        M2C_FIELD(var_lr, u8 *, 0) = temp_r3;
        M2C_FIELD(var_lr, u8 *, 1) = temp_r2;
        var_lr += 2;
    } while (var_ip != 0);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
}
