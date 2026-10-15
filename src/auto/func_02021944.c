#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0209cc30;

s32 func_02021944(s32 arg0) {
    func_0200163c(arg0 + 0x1A4);
    func_020c64fc(arg0 + 4, 4, 0x68, &func_0209cc30);
    func_020c636c(arg0);
    return arg0;
}
