#include "m2c.h"

s32 func_0204e908(s32);                             /* extern */

void func_02023178(void *arg0, s32 arg1) {
    s32 temp_r1;

    if (func_0204e908(arg1) != 0) {
        return;
    }
    temp_r1                                         = M2C_FIELD(arg0, s32 *, 0x2DC);
    M2C_FIELD(arg0, s32 *, 0x2DC)                   = (s32) (temp_r1 + 1);
    M2C_FIELD((arg0 + (temp_r1 * 4)), s32 *, 0x2E0) = arg1;
}
