#include "m2c.h"

M2C_UNK func_020ad0cc(s32, u16, M2C_UNK *);         /* extern */
extern M2C_UNK func_0208e2b8;

void func_0208e178(s32 arg0) {
    s32 var_r6;
    void *var_r7;

    var_r7 = arg0 + 0x100;
    var_r6 = 0;
    do {
        if (M2C_FIELD(var_r7, s32 *, 4) == 1) {
            func_020ad0cc(M2C_FIELD(var_r7, s32 *, 0xC), (u16) M2C_FIELD(var_r7, s32 *, 0x18), &func_0208e2b8);
            M2C_FIELD(var_r7, s32 *, 4) = 2;
        }
        var_r6 += 1;
        var_r7 += 0x20;
    } while (var_r6 < 8);
}
