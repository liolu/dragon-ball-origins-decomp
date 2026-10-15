#include "m2c.h"

void *func_0201c240(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x920) < 0x3200) {
        return arg1 + 8;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
