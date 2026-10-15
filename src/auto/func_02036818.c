#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209bddc(s32);                         /* extern */
M2C_UNK func_0209cf5c(s32);                         /* extern */
M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02036818(s32 arg0) {
    func_0209bddc(arg0 + 0x1D4);
    func_0200163c(arg0 + 0x1C8);
    func_0209b358(arg0 + 0x1A0);
    func_0209cf5c(arg0 + 0x178);
    func_0209cf5c(arg0 + 0x150);
    func_020c64fc(arg0 + 0xA8, 4, 0x28, func_0209b358);
    func_0209b358(arg0 + 0x80);
    func_0209cf5c(arg0 + 0x58);
    func_0209cf5c(arg0 + 0x30);
    func_0209b358(arg0 + 8);
    func_020c636c(arg0);
    return arg0;
}
