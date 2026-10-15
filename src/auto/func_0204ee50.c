#include "m2c.h"

extern M2C_UNK data_02136b24;

void func_0204ee50(u32 arg0) {
    u32 temp_r2;

    temp_r2 = arg0 >> 5;
    *((M2C_UNK *) ((s8 *) &data_02136b24 + (temp_r2 * 4))) =
        *((M2C_UNK *) ((s8 *) &data_02136b24 + (temp_r2 * 4))) & ~(1 << (arg0 & 0x1F));
}
