#include "m2c.h"

extern M2C_UNK data_020e0198;

s32 func_0204fb80(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020e0198 + (arg0 * 4)));
}
