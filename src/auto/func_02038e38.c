#include "m2c.h"

M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209bddc(s32);                         /* extern */
M2C_UNK func_0209c960(s32);                         /* extern */
M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02038e38(s32 arg0) {
    func_020c64fc(arg0 + 0x4F0, 8, 0x30, func_0209bddc);
    func_020c64fc(arg0 + 0x330, 8, 0x38, func_0209c960);
    func_020c64fc(arg0 + 0x1F0, 8, 0x28, func_0209b358);
    func_0209b358(arg0 + 0x1C8);
    func_0209b358(arg0 + 0x1A0);
    func_0209bddc(arg0 + 0x170);
    func_0209bddc(arg0 + 0x140);
    func_0209b358(arg0 + 0x118);
    func_0209bddc(arg0 + 0xE8);
    func_0209bddc(arg0 + 0xB8);
    func_020c64fc(arg0 + 0x58, 2, 0x30, func_0209bddc);
    func_020c64fc(arg0 + 8, 2, 0x28, func_0209b358);
    func_020c636c(arg0);
    return arg0;
}
