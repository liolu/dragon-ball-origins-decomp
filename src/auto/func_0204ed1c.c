#include "m2c.h"

extern M2C_UNK data_02136c00;

void func_0204ed1c(u32 arg0) {
    u32 temp_r3;

    temp_r3 = arg0 >> 5;
    *((M2C_UNK *) ((s8 *) &data_02136c00 + (temp_r3 * 4))) =
        *((M2C_UNK *) ((s8 *) &data_02136c00 + (temp_r3 * 4))) | (1 << (arg0 & 0x1F));
}
