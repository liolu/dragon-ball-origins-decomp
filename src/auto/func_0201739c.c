#include "m2c.h"

void *func_0201739c(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x780) > 0) {
        return arg1 + 8;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
