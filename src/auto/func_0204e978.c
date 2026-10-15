#include "m2c.h"

extern M2C_UNK data_02136d6c;

void func_0204e978(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02136d6c + (arg0 * 4))) = arg1;
}
