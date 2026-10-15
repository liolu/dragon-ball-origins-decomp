#include "m2c.h"

extern M2C_UNK data_020cdd34;

s32 func_0203b4f4(void *arg0, s32 arg1) {
    return arg1 + *((M2C_UNK *) ((s8 *) &data_020cdd34 + (M2C_FIELD(arg0, s32 *, 0x1CC) * 4)));
}
