#include "m2c.h"

u32 func_0204e954();                                /* extern */
M2C_UNK func_0204e978(M2C_UNK, u32);                /* extern */

s32 func_0204e988(M2C_UNK arg0, u32 arg1) {
    u32 temp_r0;

    temp_r0 = func_0204e954();
    if ((temp_r0 <= 1U) || (arg1 < temp_r0)) {
        func_0204e978(arg0, arg1);
        return 1;
    }
    return 0;
}
