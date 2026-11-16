/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_0209b854();                    /* extern */
M2C_UNK func_0209d308();                    /* extern */

void func_02035d20(s32 arg0, s32 arg1) {
    s32 var_r5;
    s32 var_r6;
    u32 var_r4;

    var_r6 = arg1;
    func_0209b854(arg0 + 8);
    func_0209d308(arg0 + 0x30, var_r6 + 0x14);
    func_0209d308(arg0 + 0x58, var_r6 + 0x14);
    func_0209b854(arg0 + 0x80, var_r6 + 0x14);
    var_r5 = arg0 + 0xA8;
    var_r4 = 0;
    do {
        func_0209b854(var_r5, var_r6);
        var_r4 += 1;
        var_r6 += 0x17;
        var_r5 += 0x28;
    } while (var_r4 < 4U);
}
