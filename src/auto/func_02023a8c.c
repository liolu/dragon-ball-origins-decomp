#include "m2c.h"

M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209cc30(s32);                         /* extern */
M2C_UNK func_0209d778(s32);                         /* extern */
M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02023a8c(s32 arg0) {
    func_0209d778(arg0 + 0x15C);
    func_020c64fc(arg0 + 0x10C, 2, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0x3C, 2, 0x68, func_0209cc30);
    func_0209b358(arg0 + 0x14);
    func_020c636c(arg0);
    return arg0;
}
