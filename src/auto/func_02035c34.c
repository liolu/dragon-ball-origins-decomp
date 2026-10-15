#include "m2c.h"

M2C_UNK func_0209b868(s32, s32);                    /* extern */

void func_02035c34(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;
    s32 var_r3;

    if (arg2 != 0) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
        var_r3  = temp_r2 + 0x12;
        if (var_r3 > 0xB0) {
            var_r3 = temp_r2 - 0x11;
        }
        func_0209b868((arg1 * 0x28) + (s32) (arg0 + 0xA8), var_r3);
        return;
    }
    func_0209b868((arg1 * 0x28) + (s32) (arg0 + 0xA8), 0xC0);
}
