#include "m2c.h"

s32 func_020019b8();                                /* extern */
M2C_UNK func_020023a8(M2C_UNK);                     /* extern */
M2C_UNK func_0200244c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02099f24(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0215fcc8;

void func_020023e4(M2C_UNK arg0) {
    if (func_020019b8() == -1) {
        return;
    }
    func_020023a8(arg0);
    func_02099f24(&data_0215fcc8, arg0);
    func_0200244c(arg0, -1);
}
