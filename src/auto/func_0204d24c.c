#include "m2c.h"

extern M2C_UNK data_0212a9b8;
extern M2C_UNK data_0212ad28;

void func_0204d24c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0212a9b8 + (((u8 *) &data_0212ad28)[arg0] * 0x90))) = arg1;
}
