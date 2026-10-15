#include "m2c.h"

M2C_UNK func_02056ba4();                            /* extern */
extern s32 data_0213dff0;

void func_0205ba38(void *arg0) {
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 0x24) = (s32) data_0213dff0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x62C) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 2;
    }
    func_02056ba4();
}
