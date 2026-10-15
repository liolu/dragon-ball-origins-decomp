#include "m2c.h"

s32 func_020020d8();                                /* extern */
s32 func_0209a09c();                                /* extern */
extern M2C_UNK data_020ed8f8;

s32 func_02001ac4(void) {
    if (func_020020d8() != 0) {
        return 1;
    }
    if (M2C_FIELD(&data_020ed8f8, s32 *, 4) == 0) {
        return 0;
    }
    return func_0209a09c();
}
