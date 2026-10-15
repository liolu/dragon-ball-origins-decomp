#include "m2c.h"

extern M2C_UNK data_020ccefc;

s32 func_020019c8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020ccefc + (arg0 * 4)));
}
