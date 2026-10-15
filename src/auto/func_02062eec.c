#include "m2c.h"

M2C_UNK func_020c636c(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02062f2c;

s32 func_02062eec(s32 arg0) {
    func_020c64fc(arg0 + 0x4AC, 4, 0x10, &func_02062f2c);
    func_020c636c(arg0);
    return arg0;
}
