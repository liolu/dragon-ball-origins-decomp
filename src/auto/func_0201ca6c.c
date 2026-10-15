#include "m2c.h"

s32 func_0201ca6c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x7F0) | 0x101);
    return arg1 + 4;
}
