#include "m2c.h"

s32 func_02014754(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5A0) < 0xFFFFU) {
        return 1;
    }
    return 0;
}
