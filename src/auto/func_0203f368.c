#include "m2c.h"

extern M2C_UNK data_020ce280;

s32 func_0203f368(void *arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020ce280 + (M2C_FIELD(arg0, s32 *, 0xC) * 4))) + (M2C_FIELD(arg0, s32 *, 8) * 3);
}
