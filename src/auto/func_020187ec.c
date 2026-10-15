#include "m2c.h"

s32 func_020187ec(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x7DC);
    if (temp_r2 == 0xC) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x7E0);
    if (temp_r1 == 0xC) {
        M2C_FIELD(arg0, s32 *, 0x7DC) = 0xC;
        return 0;
    }
    if (temp_r2 == temp_r1) {
        return 1;
    }
    return 0;
}
