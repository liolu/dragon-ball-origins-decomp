#include "m2c.h"

void *func_02017320(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s16 *, 8) == M2C_FIELD(arg0, s32 *, 0x824)) {
        return arg1 + 0xC;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
