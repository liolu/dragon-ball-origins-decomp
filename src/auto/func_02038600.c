#include "m2c.h"

M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209bddc(s32);                         /* extern */
M2C_UNK func_0209c960(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02038600(s32 arg0) {
    func_020c64fc(arg0 + 0x6D8, 3, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0x678, 2, 0x30, func_0209bddc);
    func_020c64fc(arg0 + 0x608, 2, 0x38, func_0209c960);
    func_020c64fc(arg0 + 0x5B8, 2, 0x28, func_0209b358);
    func_0209bddc(arg0 + 0x588);
    func_0209b358(arg0 + 0x560);
    func_020c64fc(arg0 + 0x3E0, 8, 0x30, func_0209bddc);
    func_020c64fc(arg0 + 0x220, 8, 0x38, func_0209c960);
    func_020c64fc(arg0 + 0xE0, 8, 0x28, func_0209b358);
    func_0209b358(arg0 + 0xB8);
    func_020c64fc(arg0 + 0x58, 2, 0x30, func_0209bddc);
    func_020c64fc(arg0 + 8, 2, 0x28, func_0209b358);
    return arg0;
}
