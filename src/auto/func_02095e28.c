#include "m2c.h"

s32 func_02095e28(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x58) + (arg1 * 8);
}
