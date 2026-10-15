#include "m2c.h"

M2C_UNK func_0204fa4c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0204fb18();                            /* extern */
M2C_UNK func_0204fb48(M2C_UNK *);                   /* extern */
extern s32 data_020e0194;
extern M2C_UNK data_02137b18;

void func_0204facc(s32 arg0) {
    u8 sp0[256];
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 < 0) || (var_r0 > 7)) {
        var_r0 = 1;
    }
    data_020e0194 = var_r0;
    func_0204fb18();
    func_0204fb48(sp0);
    func_0204fa4c(&data_02137b18, sp0);
}
