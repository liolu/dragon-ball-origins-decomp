#include "m2c.h"

extern M2C_UNK data_020d7e88;

void *func_0200da68(void *arg0, void *arg1) {
    s32 var_r2;

    var_r2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x5CC) & *((M2C_UNK *) ((s8 *) &data_020d7e88 + (M2C_FIELD(arg1, s16 *, 0xA) * 4)))) {
        var_r2 = 1;
    }
    if (M2C_FIELD(arg1, s16 *, 8) != 0) {
        var_r2 ^= 1;
    }
    if (var_r2 != 0) {
        return arg1 + 0xC;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
