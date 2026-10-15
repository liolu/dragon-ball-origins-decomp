#include "m2c.h"

s32 func_0209b2dc(void *arg0, s32 arg1) {
    if (arg1 == (M2C_FIELD(arg0, volatile u16 *, 4) & 0x3FF)) {
        return 0;
    }
    M2C_FIELD(arg0, volatile u16 *, 4) = (u16) ((M2C_FIELD(arg0, volatile u16 *, 4) & ~0x3FF) | arg1);
    return 1;
}
