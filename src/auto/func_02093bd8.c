#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02093bcc;
extern M2C_UNK func_02093bd4;

s32 func_02093bd8(s32 arg0) {
    func_020c64fc(arg0 + 0x660, 3, 0xC, &func_02093bd4);
    func_020c64fc(arg0 + 0x600, 3, 0x20, &func_02093bcc);
    func_0200163c(arg0);
    return arg0;
}
