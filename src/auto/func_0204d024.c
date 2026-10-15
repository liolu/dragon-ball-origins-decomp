#include "m2c.h"

extern M2C_UNK data_0212a9c0;
extern M2C_UNK data_0212ad28;

s32 func_0204d024(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0212a9c0 + (((u8 *) &data_0212ad28)[arg0] * 0x90)));
}
