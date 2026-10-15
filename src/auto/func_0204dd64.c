#include "m2c.h"

extern M2C_UNK data_0212af40;

s32 func_0204dd64(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0212af40 + ((arg0 - 0xD8) * 0x24)));
}
