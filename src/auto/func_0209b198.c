#include "m2c.h"

s32 func_0209b198(void *arg0, s32 arg1) {
    if (arg1 == ((s32) (M2C_FIELD(arg0, volatile u16 *, 4) & 0xC00) >> 0xA)) {
        return 0;
    }
    M2C_FIELD(arg0, volatile u16 *, 4) = (u16) ((M2C_FIELD(arg0, volatile u16 *, 4) & ~0xC00) | (arg1 << 0xA));
    return 1;
}
