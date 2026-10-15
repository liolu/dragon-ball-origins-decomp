#include "m2c.h"

M2C_UNK func_02072508();                            /* extern */

void func_020755c4(void *arg0) {
    s16 temp_r0;
    s32 var_r0;
    s32 var_r1;

    func_02072508();
    if ((M2C_FIELD(arg0, s32 *, 0x10) & 4) == 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x944);
    var_r1  = M2C_FIELD(M2C_FIELD(arg0, void **, 0x8CC), u16 *, 0x2C) + M2C_FIELD(arg0, s16 *, 0x946);
    if (var_r1 > (s32) temp_r0) {
        var_r1 = (s32) temp_r0;
    }
    M2C_FIELD(arg0, s16 *, 0x946) = (s16) var_r1;
}
