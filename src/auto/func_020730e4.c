#include "m2c.h"

void func_020730e4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x808) = arg1;
    M2C_FIELD(arg0, s32 *, 0x810) = (s32) (arg1 + 0xC4);
    M2C_FIELD(arg0, s32 *, 0x818) = (s32) (arg1 + 0x188);
    M2C_FIELD(arg0, s32 *, 0x820) = (s32) (arg1 + 0x24C);
    M2C_FIELD(arg0, s32 *, 0x828) = (s32) (arg1 + 0x310);
}
