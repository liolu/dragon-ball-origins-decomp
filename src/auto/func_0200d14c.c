#include "m2c.h"

extern M2C_UNK data_020d7f08;

s32 func_0200d14c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d7f08 + (arg0 * 4)));
}
