#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209bddc(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_0204ba54(s32 arg0) {
    func_020c64fc(arg0 + 0x1B8, 2, 0x28, func_0209b358);
    func_020c64fc(arg0 + 0xC8, 6, 0x28, func_0209b358);
    func_0209b358(arg0 + 0xA0);
    func_0209bddc(arg0 + 0x70);
    func_0209bddc(arg0 + 0x40);
    func_0200163c(arg0 + 0x34);
    func_0200163c(arg0 + 0x28);
    func_0200163c(arg0 + 0x1C);
    func_0200163c(arg0 + 0x10);
    func_0200163c(arg0 + 4);
    return arg0;
}
