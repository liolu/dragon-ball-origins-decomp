#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209bddc(s32);                         /* extern */
M2C_UNK func_0209c960(s32);                         /* extern */
M2C_UNK func_0209cc30(s32);                         /* extern */
M2C_UNK func_0209d778(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02009e78(s32 arg0) {
    func_0209b358(arg0 + 0x1828);
    func_020c64fc(arg0 + 0x17B0, 3, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0x1678, 3, 0x68, func_0209cc30);
    func_0209c960(arg0 + 0x1634);
    func_0209b358(arg0 + 0x160C);
    func_020c64fc(arg0 + 0x14D4, 3, 0x68, func_0209cc30);
    func_0209b358(arg0 + 0x14AC);
    func_0209bddc(arg0 + 0x147C);
    func_0209c960(arg0 + 0x1444);
    func_0209b358(arg0 + 0x141C);
    func_0209b358(arg0 + 0x13F4);
    func_020c64fc(arg0 + 0x9D4, 0x36, 0x30, func_0209bddc);
    func_020c64fc(arg0 + 0x164, 0x36, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0x114, 2, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0xC4, 2, 0x28, func_0209b358);
    func_0209d778(arg0 + 0x78);
    func_0209d778(arg0 + 0x2C);
    func_0200163c(arg0 + 0x20);
    return arg0;
}
