#include "m2c.h"

void func_0207b870(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x508) = arg1;
    M2C_FIELD(arg0, s32 *, 0x510) = (s32) (arg1 + 0xC4);
    M2C_FIELD(arg0, s32 *, 0x518) = (s32) (arg1 + 0x188);
    M2C_FIELD(arg0, s32 *, 0x524) = (s32) (arg1 + 0x24C);
}
