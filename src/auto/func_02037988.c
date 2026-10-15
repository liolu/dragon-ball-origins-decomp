#include "m2c.h"

M2C_UNK func_0209b854(s32, s32);                    /* extern */
M2C_UNK func_0209b87c(void *, s32, s32);            /* extern */
M2C_UNK func_0209db10(s32);                         /* extern */

void func_02037988(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r1;

    func_0209db10(arg0 + 0xC);
    temp_r5 = arg1 + 0x100;
    temp_r6 = 0x20 - temp_r5;
    func_0209b854(arg0 + 0x160, temp_r6);
    temp_r7 = 0x58 - temp_r5;
    func_0209b854(arg0 + 0x188, temp_r7);
    temp_r8 = 0x90 - temp_r5;
    func_0209b854(arg0 + 0x1B0, temp_r8);
    temp_r5_2 = 0xC8 - temp_r5;
    func_0209b854(arg0 + 0x1D8, temp_r5_2);
    func_0209b854(arg0 + 0x80, temp_r6);
    func_0209b854(arg0 + 0xB8, temp_r7);
    func_0209b854(arg0 + 0xF0, temp_r8);
    func_0209b854(arg0 + 0x128, temp_r5_2);
    func_0209b854(arg0 + 0x200, temp_r6);
    func_0209b854(arg0 + 0x230, temp_r7);
    func_0209b854(arg0 + 0x260, temp_r8);
    func_0209b854(arg0 + 0x290, temp_r5_2);
    var_r1 = M2C_FIELD(arg0, s32 *, 8);
    if (var_r1 == 4) {
        var_r1 = 3;
    }
    temp_r0 = (var_r1 * 0x28) + (s32) arg0;
    func_0209b87c(arg0 + 0x2C0, M2C_FIELD(temp_r0, s32 *, 0x164), M2C_FIELD(temp_r0, s32 *, 0x168));
}
