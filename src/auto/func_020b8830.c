#include "m2c.h"

extern M2C_UNK data_0216cea0;

s32 func_020b8830(void) {
    return M2C_FIELD(&data_0216cea0, s32 *, 0x20) = (s32) (M2C_FIELD(&data_0216cea0, s32 *, 0x20) + 1);
}
