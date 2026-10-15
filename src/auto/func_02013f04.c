#include "m2c.h"

extern s32 data_027e0000;
extern s32 data_027e0014;

void func_02013f04(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0)    = (s32) data_027e0014;
    M2C_FIELD(arg0, s32 *, 4)    = (s32) data_027e0000;
    M2C_FIELD(arg0, s32 *, 8)    = (s32) data_027e0000;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_027e0000;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) data_027e0014;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) data_027e0000;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) data_027e0000;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) data_027e0000;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) data_027e0014;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
