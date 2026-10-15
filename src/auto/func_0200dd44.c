#include "m2c.h"

void *func_0200dd44(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0x61C) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 0x61E) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s32 *, 0x620) = (s32) M2C_FIELD(arg1, s16 *, 8);
    return arg1 + 0xC;
}
