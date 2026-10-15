#include "m2c.h"

s32 func_0205f790(void *arg0, s32 arg1) {
    return (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x24) + (arg1 * 8)), s32 *, 4) + 3) & ~3;
}
