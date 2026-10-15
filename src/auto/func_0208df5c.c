#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209c960(s32);                         /* extern */
M2C_UNK func_0209cc30(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_0208df5c(s32 arg0) {
    func_020c64fc(arg0 + 0x4F4, 4, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0x4A4, 2, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0x404, 4, 0x28, func_0209b358);
    func_0209b358(arg0 + 0x3DC);
    func_0209b358(arg0 + 0x3B4);
    func_0209cc30(arg0 + 0x34C);
    func_0209cc30(arg0 + 0x2E4);
    func_020c64fc(arg0 + 0x144, 4, 0x68, func_0209cc30);
    func_0209cc30(arg0 + 0xDC);
    func_0209cc30(arg0 + 0x74);
    func_0200163c(arg0 + 0x68);
    func_0209c960(arg0 + 0x30);
    func_0209b358(arg0 + 8);
    return arg0;
}
