#include "m2c.h"

M2C_UNK func_02049118(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02125b64;

void func_02044178(void) {
    M2C_UNK *var_r4;
    u32 var_r5;

    var_r4 = &data_02125b64;
    var_r5 = 0;
    do {
        if (M2C_FIELD(var_r4, s32 *, 8) != 0) {
            func_02049118(var_r4);
        }
        var_r5 += 1;
        var_r4 = (M2C_UNK *) ((s8 *) var_r4 + 0x50);
    } while (var_r5 < 0x10U);
}
