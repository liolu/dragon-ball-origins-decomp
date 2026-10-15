#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209d778(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02042f14(s32 arg0) {
    func_0200163c(arg0 + 0x5A8);
    func_020c64fc(arg0 + 0xA0, 0x20, 0x28, func_0209b358);
    func_0209b358(arg0 + 0x78);
    func_0209b358(arg0 + 0x50);
    func_0209d778(arg0 + 4);
    return arg0;
}
