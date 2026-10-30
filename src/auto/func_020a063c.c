/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

extern M2C_UNK data_020e75c0;
extern M2C_UNK data_02162c84;
extern M2C_UNK data_02162c8c;

void func_020a063c(void *arg0) {
    s32 var_ip;
    u16 temp_r2;
    void *temp_r1;

    var_ip                        = 0;
    M2C_FIELD(arg0, s32 *, 8)     = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14)  = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) M2C_FIELD(&data_020e75c0, s32 *, 0xC);
    M2C_FIELD(arg0, u8 *, 0x148)  = (u8) M2C_FIELD(&data_020e75c0, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x150)  = (u8) M2C_FIELD(&data_020e75c0, u8 *, 1);
    do {
        temp_r2 = *((u16 *) ((s8 *) &data_02162c8c + (var_ip * 2)));
        temp_r1 = arg0 + (var_ip * 2) + 0x100;
        var_ip += 1;
        M2C_FIELD(temp_r1, u16 *, 0x52) = temp_r2;
    } while (var_ip < 8);
    M2C_FIELD(arg0, u8 *, 0x162)  = (u8) M2C_FIELD(&data_02162c84, u8 *, 0);
    M2C_FIELD(arg0, s8 *, 0x163)  = 0;
    M2C_FIELD(arg0, u16 *, 0x14A) = (u16) M2C_FIELD(&data_020e75c0, u16 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14C) = (s32) M2C_FIELD(&data_020e75c0, s32 *, 8);
    M2C_FIELD(arg0, u8 *, 0x174)  = (u8) M2C_FIELD(&data_02162c84, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x175)  = (u8) M2C_FIELD(&data_020e75c0, u8 *, 0);
    M2C_FIELD(arg0, s32 *, 0x178) = (s32) M2C_FIELD(&data_02162c84, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(&data_020e75c0, s32 *, 0x10);
}
