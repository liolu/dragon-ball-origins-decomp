#include "m2c.h"

extern M2C_UNK data_020ce624;

s32 func_0204202c(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x36)) {
        return *((M2C_UNK *) ((s8 *) &data_020ce624 + (arg0 * 4)));
    }
    return 0x130;
}
