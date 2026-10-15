#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_0209d778(s32);                         /* extern */
M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020979c0;
extern M2C_UNK func_0209b358;
extern M2C_UNK func_0209bddc;

s32 func_0209793c(s32 arg0) {
    func_0200163c(arg0 + 0xDE4);
    func_020c64fc(arg0 + 0x9EC, 0x15, 0x30, &func_0209bddc);
    func_020c64fc(arg0 + 0x6CC, 0x14, 0x28, &func_0209b358);
    func_020c64fc(arg0 + 0x9C, 0xB, 0x90, &func_020979c0);
    func_0209d778(arg0 + 0x50);
    func_0209d778(arg0 + 4);
    func_020c636c(arg0);
    return arg0;
}
