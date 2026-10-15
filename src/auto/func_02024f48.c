#include "m2c.h"

s32 func_020287f0();                                /* extern */
extern M2C_UNK data_020cd9a8;

s32 func_02024f48(void) {
    return *((M2C_UNK *) ((s8 *) &data_020cd9a8 + (func_020287f0() * 4)));
}
