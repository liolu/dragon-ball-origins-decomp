#include "m2c.h"

extern M2C_UNK data_020d5164;

s32 func_020019b8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d5164 + (arg0 * 4)));
}
