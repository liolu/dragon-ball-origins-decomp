#include "m2c.h"

M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209bddc(s32);                         /* extern */
M2C_UNK func_0209cc30(s32);                         /* extern */
M2C_UNK func_0209d778(s32);                         /* extern */
M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_0200621c(s32 arg0) {
    func_020c64fc(arg0 + 0x634, 2, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0x564, 2, 0x68, func_0209cc30);
    func_0209b358(arg0 + 0x53C);
    func_0209b358(arg0 + 0x514);
    func_020c64fc(arg0 + 0x34C, 3, 0x68, func_0209cc30);
    func_020c64fc(arg0 + 0x1A8, 4, 0x68, func_0209cc30);
    func_020c64fc(arg0 + 0xB0, 5, 0x30, func_0209bddc);
    func_0209d778(arg0 + 0x64);
    func_0209d778(arg0 + 0x18);
    func_020c636c(arg0);
    return arg0;
}
