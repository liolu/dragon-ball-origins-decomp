#include "m2c.h"

M2C_UNK func_020c35e8(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020c370c(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020e3b5c;

s32 func_0205fbfc(s32 arg0, M2C_UNK arg1) {
    func_020c35e8(arg0, &data_020e3b5c);
    func_020c370c(arg0, arg1);
    return arg0;
}
