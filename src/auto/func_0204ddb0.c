#include "m2c.h"

extern M2C_UNK data_0212b688;

s32 func_0204ddb0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0212b688 + ((arg0 - 0x10) << 5)));
}
