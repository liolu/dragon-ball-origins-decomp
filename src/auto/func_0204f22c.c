#include "m2c.h"

s32 func_020adf00(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_020ae048(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020cebe0;

s32 func_0204f22c(void) {
    M2C_UNK sp0;

    if (func_020adf00(0, &sp0, 4) == 0) {
        return -2;
    }
    if (func_020ae048(0, &data_020cebe0, 0x10) != 0) {
        return 0;
    }
    return -2;
}
