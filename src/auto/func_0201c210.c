#include "m2c.h"

void *func_0201c210(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x6A0) != 0) {
        return arg1 + 8;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
