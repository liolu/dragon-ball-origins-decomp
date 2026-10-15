#include "m2c.h"

M2C_UNK func_0209a168(M2C_UNK *, u32, M2C_UNK);     /* extern */
extern M2C_UNK data_020d5150;
extern M2C_UNK data_0215fcc8;

void func_0200203c(M2C_UNK arg0) {
    u32 var_r5;

    if ((s32) M2C_FIELD(&data_020d5150, s32 *, 0x10) < 0) {
        return;
    }
    var_r5 = 0;
    do {
        func_0209a168(&data_0215fcc8, var_r5, arg0);
        var_r5 += 1;
    } while (var_r5 < 2U);
    M2C_FIELD(&data_020d5150, s32 *, 0x10) = -1;
}
