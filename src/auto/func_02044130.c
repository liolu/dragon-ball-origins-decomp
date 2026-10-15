#include "m2c.h"

s32 func_02048d5c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02125424;

void func_02044130(void) {
    M2C_UNK *var_r5;
    u32 var_r6;

    var_r6 = 0;
    var_r5 = &data_02125424;
    do {
        if ((M2C_FIELD(var_r5, s32 *, 4) != 0) && (func_02048d5c(var_r5) != 0)) {
            M2C_FIELD(var_r5, s32 *, 0) = 0;
            M2C_FIELD(var_r5, s32 *, 4) = 0;
        }
        var_r6 += 1;
        var_r5 = (M2C_UNK *) ((s8 *) var_r5 + 0x18);
    } while (var_r6 < 0x10U);
}
