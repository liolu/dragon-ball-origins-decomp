#include "m2c.h"

M2C_UNK func_020b9604(s32, M2C_UNK);                /* extern */
M2C_UNK func_020c0f94(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020c1004(M2C_UNK, M2C_UNK);                /* extern */
void *func_020c1120();                              /* extern */
s32 func_020c1194(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_020c23f0(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_020c1120();
    temp_r0 = func_020c1194(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020b9604(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0xC) == 0) {
        return 3;
    }
    func_020c0f94(0x10, arg0);
    var_r0 = func_020c1004(0x10, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
