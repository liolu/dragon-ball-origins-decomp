#include "m2c.h"

M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0208e4ec;

s32 func_0208e544(s32 arg0) {
    func_020c64fc(arg0 + 0x100, 8, 0x20, &func_0208e4ec);
    func_020c64fc(arg0, 8, 0x20, &func_0208e4ec);
    return arg0;
}
