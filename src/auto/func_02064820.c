#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK func_02062eb4;
extern M2C_UNK func_02062ecc;
extern M2C_UNK func_02062ee8;
extern M2C_UNK func_02062f30;
extern M2C_UNK func_02062f70;

s32 func_02064820(s32 arg0) {
    func_0200163c(arg0 + 0xF704);
    func_0200163c(arg0 + 0xF6F8);
    func_0200163c(arg0 + 0xF6EC);
    func_0200163c(arg0 + 0xF6E0);
    func_0200163c(arg0 + 0xF6D4);
    func_0200163c(arg0 + 0xF6C8);
    func_0200163c(arg0 + 0xF6BC);
    func_020c64fc(arg0 + 0xF3FC, 0x10, 0x2C, &func_02062eb4);
    func_020c64fc(arg0 + 0xB1BC, 0x10, 0x424, &func_02062ecc);
    func_020c64fc(arg0 + 0x6B3C, 0x10, 0x468, &func_02062ee8);
    func_020c64fc(arg0 + 0x9BC, 0x10, 0x618, &func_02062f30);
    func_020c64fc(arg0 + 4, 1, 0x9B8, &func_02062f70);
    return arg0;
}
