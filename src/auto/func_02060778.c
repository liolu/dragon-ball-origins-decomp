#include "m2c.h"

void func_02060778(void *arg0, s32 *arg1) {
    if (*arg1 == 0x44414244) {
        M2C_FIELD(arg0, void **, 8) = (void *) (((s8 *) arg1 + 8));
    }
}
