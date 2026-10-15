#include "m2c.h"

void func_020a5b2c(void *arg0) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;

    temp_r2                       = M2C_FIELD(arg0, void **, 4) + 0x24;
    M2C_FIELD(arg0, s32 *, 0x15C) = temp_r2;
    temp_r2_2                     = temp_r2 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xC) * 4);
    M2C_FIELD(arg0, s32 *, 0x160) = temp_r2_2;
    temp_r2_3                     = temp_r2_2 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xE) * 4);
    M2C_FIELD(arg0, s32 *, 0x164) = temp_r2_3;
    temp_r2_4                     = temp_r2_3 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xE) * 4);
    M2C_FIELD(arg0, s32 *, 0x168) = temp_r2_4;
    M2C_FIELD(arg0, s32 *, 0x16C) = (s32) (temp_r2_4 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x10) * 4));
    temp_r2_5                     = M2C_FIELD(arg0, void **, 4);
    temp_r2_6                     = temp_r2_5 + M2C_FIELD(temp_r2_5, s32 *, 0x18);
    M2C_FIELD(arg0, void **, 8)   = temp_r2_6;
    M2C_FIELD(arg0, void **, 0xC) = (void *) (temp_r2_6 + M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x14C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xE);
    M2C_FIELD(arg0, s32 *, 0x154) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x158) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12);
}
