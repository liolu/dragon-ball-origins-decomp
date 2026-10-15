#include "m2c.h"

extern M2C_UNK data_020e73d4;

s32 func_0209fb2c(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 0x7B)) {
        return 0;
    }
    return *((M2C_UNK *) ((s8 *) &data_020e73d4 + (arg0 * 4)));
}
