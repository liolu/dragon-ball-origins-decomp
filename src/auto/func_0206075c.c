#include "m2c.h"

void func_0206075c(void *arg0, s32 *arg1) {
    if (*arg1 == 0x44414244) {
        M2C_FIELD(arg0, void **, 4) = (void *) (((s8 *) arg1 + 8));
    }
}
