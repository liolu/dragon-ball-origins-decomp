#include "m2c.h"

extern M2C_UNK data_020e2b98;

void func_020589cc(void *arg0) {
    s32 temp_ip;
    s32 temp_r2;
    void *temp_r2_2;

    temp_ip                       = M2C_FIELD(arg0, s32 *, 0x1F4) & 3;
    temp_r2                       = temp_ip * 0xC;
    M2C_FIELD(arg0, s32 *, 0x1B4) = temp_ip;
    temp_r2_2                     = (M2C_UNK *) ((s8 *) &data_020e2b98 + temp_r2);
    M2C_FIELD(arg0, s32 *, 0x1B8) = (s32) * ((M2C_UNK *) ((s8 *) &data_020e2b98 + temp_r2));
    M2C_FIELD(arg0, s32 *, 0x1BC) = (s32) M2C_FIELD(temp_r2_2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C0) = (s32) M2C_FIELD(temp_r2_2, s32 *, 8);
}
