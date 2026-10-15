#include "m2c.h"

M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209bddc(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02021f88(s32 arg0) {
    func_020c64fc(arg0 + 0xCC, 8, 0x30, func_0209bddc);
    func_0209b358(arg0 + 0xA4);
    func_020c64fc(arg0 + 0x54, 2, 0x28, func_0209b358);
    func_0209b358(arg0 + 0x2C);
    func_0209b358(arg0 + 4);
    return arg0;
}
