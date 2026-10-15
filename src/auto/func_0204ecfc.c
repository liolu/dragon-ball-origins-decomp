#include "m2c.h"

extern M2C_UNK data_02136c00;

s32 func_0204ecfc(u32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02136c00 + ((arg0 >> 5) * 4))) & (1 << (arg0 & 0x1F));
}
