#include "m2c.h"

extern M2C_UNK data_0216af80;

void func_020aef04(s32 arg0) {
    M2C_FIELD(&data_0216af80, s32 *, 4) = (s32) (M2C_FIELD(&data_0216af80, s32 *, 4) & ~(1 << arg0));
}
