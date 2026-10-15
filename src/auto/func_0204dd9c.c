#include "m2c.h"

extern M2C_UNK data_0212b684;

s32 func_0204dd9c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0212b684 + ((arg0 - 0x10) << 5)));
}
