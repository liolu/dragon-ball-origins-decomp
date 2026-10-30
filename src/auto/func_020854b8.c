/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020ba734(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_027e0000;

void func_020854b8(void *arg0) {
    u32 var_r2;
    u32 var_r3;
    void *temp_r0;
    void *temp_r2;

    var_r2                       = 0;
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = -1;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    do {
        temp_r0 = arg0 + (var_r2 * 4);
        var_r2 += 1;
        M2C_FIELD(temp_r0, s32 *, 0x1C) = -1;
    } while (var_r2 < 4U);
    func_020ba734(0, arg0 + 0x34, 0x10);
    func_020ba734(0, arg0 + 0x44, 0x10);
    func_020ba734(0, arg0 + 0x54, 0x30);
    var_r3 = 0;
    do {
        temp_r2                         = arg0 + (var_r3 * 0x10);
        M2C_FIELD(temp_r2, s32 *, 0x88) = (s32) data_027e0000;
        var_r3 += 1;
        M2C_FIELD(temp_r2, s32 *, 0x8C) = (s32) data_027e0000;
        M2C_FIELD(temp_r2, s32 *, 0x90) = (s32) data_027e0000;
    } while (var_r3 < 4U);
}
