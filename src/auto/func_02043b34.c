#include "m2c.h"

M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209cc30(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02043b34(s32 arg0) {
    func_0209b358(arg0 + 0x12C);
    func_020c64fc(arg0 + 0xDC, 2, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0xC, 2, 0x68, func_0209cc30);
    return arg0;
}
