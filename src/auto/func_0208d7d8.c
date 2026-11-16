/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_0209cb88(s32);                         /* extern */

void func_0208d7d8(s32 arg0) {
    s32 var_r5;
    u32 var_r4;

    func_0209cb88(arg0 + 0x30);
    func_0209cb88(arg0 + 0x74);
    func_0209cb88(arg0 + 0xDC);
    var_r5 = arg0 + 0x144;
    var_r4 = 0;
    do {
        func_0209cb88(var_r5);
        var_r4 += 1;
        var_r5 += 0x68;
    } while (var_r4 < 4U);
    func_0209cb88(arg0 + 0x2E4);
    func_0209cb88(arg0 + 0x34C);
}
