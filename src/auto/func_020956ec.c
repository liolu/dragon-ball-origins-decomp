#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_02093bcc(s32);                         /* extern */
M2C_UNK func_02093bd4(s32);                         /* extern */
M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209c960(s32);                         /* extern */
M2C_UNK func_0209d778(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_020956ec(s32 arg0) {
    func_0209c960(arg0 + 0x8FC);
    func_0209b358(arg0 + 0x8D4);
    func_0209c960(arg0 + 0x89C);
    func_0209b358(arg0 + 0x874);
    func_0209b358(arg0 + 0x84C);
    func_0209b358(arg0 + 0x824);
    func_0209b358(arg0 + 0x7FC);
    func_0209b358(arg0 + 0x7D4);
    func_0209b358(arg0 + 0x7AC);
    func_0209b358(arg0 + 0x784);
    func_0200163c(arg0 + 0x778);
    func_0200163c(arg0 + 0x76C);
    func_0209d778(arg0 + 0x720);
    func_0209d778(arg0 + 0x6D4);
    func_020c64fc(arg0 + 0x680, 3, 0xC, func_02093bd4);
    func_020c64fc(arg0 + 0x620, 3, 0x20, func_02093bcc);
    func_0200163c(arg0 + 0x20);
    func_020c64fc(arg0 + 4, 2, 0xC, func_0200163c);
    return arg0;
}
