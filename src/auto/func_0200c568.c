#include "m2c.h"

extern M2C_UNK data_02127820;
extern M2C_UNK data_021288f0;

s32 func_0200c568(s32 arg0) {
    return (((u8 *) &data_021288f0)[arg0] * 0x24) + (s32) &data_02127820;
}
