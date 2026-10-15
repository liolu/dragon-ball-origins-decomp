#include "m2c.h"

extern M2C_UNK data_0216f020;

s32 func_020bfa58(void) {
    if (!(M2C_FIELD(&data_0216f020, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
