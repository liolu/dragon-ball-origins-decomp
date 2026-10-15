#include "m2c.h"

s32 func_02099b28(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x1C) == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x14) <= 8U)) {
        return 1;
    }
    return 0;
}
