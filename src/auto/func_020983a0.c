#include "m2c.h"

M2C_UNK func_020c644c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020e6f98;
extern M2C_UNK data_020e6fc8;
extern M2C_UNK func_0209b338;
extern M2C_UNK func_0209b358;

void *func_020983a0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e6fc8;
    M2C_FIELD(arg0, s8 *, 4)       = 0;
    M2C_FIELD(arg0, s8 *, 5)       = 0;
    M2C_FIELD(arg0, s8 *, 6)       = 0;
    M2C_FIELD(arg0, s8 *, 7)       = 0;
    M2C_FIELD(arg0, s8 *, 8)       = 0;
    func_020c644c(arg0 + 0x14, 8, 0x28, &func_0209b338, &func_0209b358);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e6f98;
    M2C_FIELD(arg0, s8 *, 0x354)   = -1;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0xCF;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0x10;
    return arg0;
}
