#include "m2c.h"

extern M2C_UNK data_0212b68c;

s32 func_0204ddc4(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0212b68c + ((arg0 - 0x10) << 5)));
}
