#include "m2c.h"

void func_02060740(void **arg0, s32 *arg1) {
    if (*arg1 == 0x44414244) {
        *arg0 = ((s8 *) arg1 + 8);
    }
}
