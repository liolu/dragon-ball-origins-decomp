#include "m2c.h"

M2C_UNK func_020ba2b8();                            /* extern */

s32 func_020a04a8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    u32 temp_r3;

    temp_ip                   = ~(arg2 - 1) & ((M2C_FIELD(arg0, u32 *, 8) + arg2) - 1);
    temp_r3                   = temp_ip + arg1;
    M2C_FIELD(arg0, u32 *, 8) = temp_r3;
    if (temp_r3 > (u32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 4))) {
        func_020ba2b8();
        return 0;
    }
    if (temp_r3 > (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
        M2C_FIELD(arg0, u32 *, 0xC) = temp_r3;
    }
    return temp_ip;
}
