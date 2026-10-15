#include "m2c.h"

void func_020b4e6c(s32 arg0) {
    if (arg0 > 0) {
        M2C_FIELD((void *) 0x040002B0, s16 *, 0)   = 1;
        M2C_FIELD((void *) 0x040002B0, s32 *, 8)   = 0;
        M2C_FIELD((void *) 0x040002B0, s32 *, 0xC) = arg0;
        return;
    }
    M2C_FIELD((void *) 0x040002B0, s16 *, 0)   = 1;
    M2C_FIELD((void *) 0x040002B0, s32 *, 8)   = 0;
    M2C_FIELD((void *) 0x040002B0, s32 *, 0xC) = 0;
}
