#include "m2c.h"

M2C_UNK func_02049734(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02125124;

void func_02044228(void) {
    M2C_UNK *var_r4;
    u32 var_r5;

    var_r4 = &data_02125124;
    var_r5 = 0;
    do {
        if (M2C_FIELD(var_r4, s32 *, 4) != 0) {
            func_02049734(var_r4);
        }
        var_r5 += 1;
        var_r4 = (M2C_UNK *) ((s8 *) var_r4 + 0xC);
    } while (var_r5 < 0x10U);
}
