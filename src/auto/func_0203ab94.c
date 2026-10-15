#include "m2c.h"

M2C_UNK func_0209b854(void *, s32);                 /* extern */
M2C_UNK func_0209b87c(void *, s32, s32);            /* extern */
extern M2C_UNK data_020cdd24;
extern M2C_UNK data_020cdd2c;

void func_0203ab94(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r4;
    u32 var_r5;
    void *var_r6;
    void *var_r7;
    void *var_r8;
    void *var_r9;

    func_0209b854(arg0 + 0xC, 0x80 - arg1);
    func_0209b854(arg0 + 0x34, 0xC0 - arg1);
    func_0209b854(arg0 + 0x5C, 0x84 - arg1);
    func_0209b854(arg0 + 0x8C, 0xC3 - arg1);
    if (M2C_FIELD(arg0, s32 *, 0x6A4) == 0) {
        func_0209b854(arg0 + 0xBC, 0x20 - arg1);
        func_0209b854(arg0 + 0xEC, 0x26 - arg1);
        func_0209b854(arg0 + 0x11C, 0x18 - arg1);
        func_0209b854(arg0 + 0x144, 0x90 - arg1);
        func_0209b854(arg0 + 0x174, 0x9E - arg1);
        func_0209b854(arg0 + 0x1A4, 0x88 - arg1);
        return;
    }
    func_0209b854(arg0 + 0x1F8, *((M2C_UNK *) ((s8 *) &data_020cdd24 + (M2C_FIELD(arg0, s32 *, 0x1CC) * 4))) - arg1);
    var_r6 = arg0 + 0x220;
    var_r7 = arg0 + 0x310;
    var_r4 = *((M2C_UNK *) ((s8 *) &data_020cdd2c + (M2C_FIELD(arg0, s32 *, 0x1CC) * 4))) - arg1;
    var_r8 = arg0 + 0x460;
    var_r9 = arg0 + 0x580;
    var_r5 = 0;
    do {
        func_0209b854(var_r6, var_r4);
        func_0209b854(var_r7, var_r4);
        func_0209b854(var_r8, var_r4);
        func_0209b854(var_r9, var_r4 + 0x20);
        if (var_r5 != 3) {
            var_r4 += 0x34;
        } else {
            var_r4 = *((M2C_UNK *) ((s8 *) &data_020cdd2c + (M2C_FIELD(arg0, s32 *, 0x1CC) * 4))) - arg1;
        }
        var_r5 += 1;
        var_r6 += 0x28;
        var_r7 += 0x38;
        var_r8 += 0x30;
        var_r9 += 0x30;
    } while (var_r5 < 6U);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x6AC);
    if (temp_r2 < 0) {
        return;
    }
    temp_r0 = (temp_r2 * 0x38) + (s32) (arg0 + 0x310);
    func_0209b87c(arg0 + 0x1D0, M2C_FIELD(temp_r0, s32 *, 4), M2C_FIELD(temp_r0, s32 *, 8));
}
