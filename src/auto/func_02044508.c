#include "m2c.h"

s32 func_0204a69c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02124f8c;
extern M2C_UNK data_02125038;

void func_02044508(void) {
    if (M2C_FIELD(&data_02124f8c, s32 *, 0xB4) == 0) {
        return;
    }
    if (func_0204a69c(&data_02125038) == 0) {
        return;
    }
    M2C_FIELD(&data_02124f8c, s32 *, 0xAC) = 0;
    M2C_FIELD(&data_02124f8c, s32 *, 0xB4) = 0;
}
