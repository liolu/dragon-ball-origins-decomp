#include "m2c.h"

s32 func_02017f08(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x7F0) | 0x20);
    return arg1 + 4;
}
