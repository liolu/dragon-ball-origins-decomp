#include "m2c.h"

M2C_UNK func_0209b854(void *, s32);                 /* extern */

void func_0203e2c4(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r5;
    u32 var_r6;
    void *var_r7;
    void *var_r8;
    void *var_r9;

    var_r5 = 0x58 - arg1;
    var_r7 = arg0 + 0x128;
    var_r8 = arg0 + 0x1C8;
    var_r9 = arg0 + 0x2A8;
    var_r6 = 0;
    do {
        func_0209b854(var_r7, var_r5);
        func_0209b854(var_r8, var_r5);
        func_0209b854(var_r9, var_r5);
        var_r6 += 1;
        var_r5 += 0x38;
        var_r7 += 0x28;
        var_r8 += 0x38;
        var_r9 += 0x30;
    } while (var_r6 < 2U);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x390);
    if (temp_r1 < 0) {
        return;
    }
    func_0209b854(arg0 + 0x368, M2C_FIELD(((temp_r1 * 0x38) + (s32) arg0), s32 *, 0x1CC));
}
