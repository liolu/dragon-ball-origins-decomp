#include "m2c.h"

void func_0208a418(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3BC);
    if (temp_r3 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) (temp_r3 + arg1);
    }
}
