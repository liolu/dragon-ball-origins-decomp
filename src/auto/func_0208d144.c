#include "m2c.h"

M2C_UNK func_0200163c(s32);                         /* extern */
M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0208d17c;

s32 func_0208d144(s32 arg0) {
    func_020c64fc(arg0 + 0x48, 4, 0xD8, &func_0208d17c);
    func_0200163c(arg0 + 0x3C);
    func_020c636c(arg0);
    return arg0;
}
