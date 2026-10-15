#include "m2c.h"

s32 func_02095e34(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x60) + (arg1 * 8);
}
