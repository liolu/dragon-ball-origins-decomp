/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_02068e1c(M2C_UNK);                     /* extern */
M2C_UNK func_020697e4(M2C_UNK, s32 *, M2C_UNK);     /* extern */

void func_02068f7c(void *arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;
    s32 *temp_r0;
    s32 *temp_r0_2;
    s32 temp_r1;
    s32 var_r2;
    u32 var_r4;

    func_02068e1c(arg1);
    temp_r0 = M2C_FIELD(arg0, s32 **, 8);
    if (temp_r0 != NULL) {
        temp_r1 = *temp_r0;
        var_r2  = 0;
        sp4     = temp_r1;
        if ((temp_r1 != -1) && (temp_r1 < 0x18)) {
            var_r2 = 1;
        }
        if (var_r2 != 0) {
            func_020697e4(arg1, &sp4, 1);
        }
    }
    var_r4 = 0;
    do {
        temp_r0_2 = M2C_FIELD((arg0 + (var_r4 * 4)), s32 **, 0xC);
        if (temp_r0_2 != NULL) {
            sp0 = *temp_r0_2;
            func_020697e4(arg1, &sp0, 1);
        }
        var_r4 += 1;
    } while (var_r4 < 0x18U);
}
