#include "m2c.h"

void func_02073024(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x3FE) = (s8) * *M2C_FIELD(arg1, s32 ***, 8);
}
