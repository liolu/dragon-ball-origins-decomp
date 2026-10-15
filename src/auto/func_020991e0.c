#include "m2c.h"

M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0209b358;
extern M2C_UNK func_0209bddc;

s32 func_020991e0(s32 arg0) {
    func_020c64fc(arg0 + 0x78, 3, 0x30, &func_0209bddc);
    func_020c64fc(arg0, 3, 0x28, &func_0209b358);
    return arg0;
}
