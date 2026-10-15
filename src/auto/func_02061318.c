#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02061318(s32 arg0) {
    func_0200163c(arg0 + 0xE0);
    func_0200163c(arg0 + 0xD4);
    func_0200163c(arg0 + 0xC8);
    func_0200163c(arg0 + 0xBC);
    func_0200163c(arg0 + 0xB0);
    func_0200163c(arg0 + 0xA4);
    func_020c64fc(arg0 + 0x80, 3, 0xC, func_0200163c);
    return arg0;
}
