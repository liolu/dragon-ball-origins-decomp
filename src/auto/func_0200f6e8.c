#include "m2c.h"

void *func_0200f6e8(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x69C) != 0) {
        return arg1 + 8;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
