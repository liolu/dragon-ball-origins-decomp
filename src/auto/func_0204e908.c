#include "m2c.h"

extern M2C_UNK data_02136d6c;

s32 func_0204e908(s32 arg0) {
    if (*((M2C_UNK *) ((s8 *) &data_02136d6c + (arg0 * 4))) != 0) {
        return 1;
    }
    return 0;
}
