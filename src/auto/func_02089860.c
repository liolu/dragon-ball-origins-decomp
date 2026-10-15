#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0208984c;

s32 func_02089860(s32 arg0) {
    func_0200163c(arg0 + 0x964);
    func_0200163c(arg0 + 0x958);
    func_0200163c(arg0 + 0x944);
    func_020c64fc(arg0 + 0x20C, 0xE, 0x84, &func_0208984c);
    func_0200163c(arg0 + 0x10);
    return arg0;
}
