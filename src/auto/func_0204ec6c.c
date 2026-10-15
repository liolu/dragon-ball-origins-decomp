#include "m2c.h"

extern M2C_UNK data_02136ed0;

s32 func_0204ec6c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02136ed0 + (arg0 * 0x34)));
}
