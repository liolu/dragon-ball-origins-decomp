#include "m2c.h"

extern M2C_UNK data_02136eb4;

s32 func_0204e8a4(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02136eb4 + (arg0 * 0x34))) & 2;
}
