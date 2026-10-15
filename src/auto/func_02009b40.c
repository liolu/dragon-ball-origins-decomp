#include "m2c.h"

M2C_UNK func_0200982c();                            /* extern */
M2C_UNK func_020099ec();                            /* extern */
M2C_UNK func_02009b84();                            /* extern */

void func_02009b40(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) <= 0) {
        func_02009b84(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1674);
    if (temp_r0 == 0x39) {
        return;
    }
    if (temp_r0 < 0x36) {
        func_020099ec(arg0);
        return;
    }
    func_0200982c(arg0);
}
