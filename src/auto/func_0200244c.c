#include "m2c.h"

extern M2C_UNK data_020d5164;

void func_0200244c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020d5164 + (arg0 * 4))) = arg1;
}
