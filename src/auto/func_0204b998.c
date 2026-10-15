#include "m2c.h"

extern M2C_UNK data_0215f2fc;

s32 func_0204b998(void) {
    if ((M2C_FIELD(&data_0215f2fc, s32 *, 0x30) != 0) || (M2C_FIELD(&data_0215f2fc, u16 *, 6) & 0xC03)) {
        return 1;
    }
    return 0;
}
