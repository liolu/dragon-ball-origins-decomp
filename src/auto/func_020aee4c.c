#include "m2c.h"

M2C_UNK func_020bae14(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0216af80;

void func_020aee4c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020bae14(arg0, 0);
    M2C_FIELD(&data_0216af80, s32 *, 8) = (s32) (M2C_FIELD(&data_0216af80, s32 *, 8) & ~arg0);
}
