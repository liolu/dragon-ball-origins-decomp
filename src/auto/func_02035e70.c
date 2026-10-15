#include "m2c.h"

M2C_UNK func_0209d19c(void *, s32);                 /* extern */

void func_02035e70(s32 arg0, void *arg1, void *arg2) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg2, s32 *, 0x24);
    if ((s32) M2C_FIELD(arg1, s32 *, 0x24) >= temp_r3) {
        return;
    }
    func_0209d19c(arg2, temp_r3 - 1);
}
