#include "m2c.h"

M2C_UNK func_0209d3a4(s32, s32, s32, s32);          /* extern */

void func_0209d934(void *arg0) {
    s32 var_r2;

    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        var_r2 = 0x10;
    } else {
        var_r2 = 0x100;
    }
    func_0209d3a4(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x20) * var_r2 * 2,
                  M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & ~1);
}
