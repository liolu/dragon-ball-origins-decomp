#include "m2c.h"

s32 func_020b0e28(M2C_UNK);                         /* extern */
M2C_UNK func_020ba8dc(s32, s32, M2C_UNK);           /* extern */

s32 func_020b35f8(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                      = func_020b0e28(arg1);
    M2C_FIELD(arg0, s32 *, 0xA4) = temp_r0;
    func_020ba8dc(temp_r0, arg0 + 0xA8, 0x40);
    return 1;
}
