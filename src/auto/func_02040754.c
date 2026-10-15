#include "m2c.h"

M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0209bddc;

s32 func_02040754(s32 arg0) {
    func_020c64fc(arg0 + 8, 3, 0x30, &func_0209bddc);
    func_020c636c(arg0);
    return arg0;
}
