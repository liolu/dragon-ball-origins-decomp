#include "m2c.h"

M2C_UNK func_020ba734(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020ba790(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_02136b24;
extern M2C_UNK data_02136be0;

s32 func_0204f018(s32 arg0) {
    func_020ba790(arg0, &data_02136be0, 0x2C4);
    func_020ba734(0, &data_02136b24, 0x20);
    return arg0 + 0x2C4;
}
