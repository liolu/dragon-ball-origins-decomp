#include "m2c.h"

s32 func_02027034(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02027128(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020cd9bc;
extern M2C_UNK data_020cd9d8;
extern M2C_UNK data_020cd9f4;
extern M2C_UNK data_020cda10;
extern M2C_UNK data_020cda64;

s32 func_02026f98(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;

    temp_r4 = func_02027034(arg0, &data_020cda64, 0x10, arg1, arg2, arg3);
    func_02027128(arg0, &data_020cd9bc, 7, 0xE8);
    func_02027128(arg0, &data_020cd9d8, 7, 0xF0);
    func_02027128(arg0, &data_020cd9f4, 7, 0xF8);
    func_02027128(arg0, &data_020cda10, 7, 0x100);
    return temp_r4;
}
