#include "m2c.h"

extern M2C_UNK data_02136edc;

s32 func_0204e8f0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02136edc + (arg0 * 0x34)));
}
