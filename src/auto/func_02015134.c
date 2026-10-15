#include "m2c.h"

void func_02015134(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x958) = (s32) (M2C_FIELD(arg0, s32 *, 0x958) | (1 << arg1));
}
