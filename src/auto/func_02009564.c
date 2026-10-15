#include "m2c.h"

s32 func_020372b4(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02120e44;

void func_02009564(void *arg0) {
    if (func_020372b4(&data_02120e44) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
