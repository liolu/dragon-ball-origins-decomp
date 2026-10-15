#include "m2c.h"

M2C_UNK func_020b0410();                            /* extern */
extern M2C_UNK data_0216b934;

void func_020aff4c(void) {
    if (M2C_FIELD(&data_0216b934, s32 *, 0x48) == 0) {
        return;
    }
    if (M2C_FIELD(&data_0216b934, s32 *, 0x4C) != 1) {
        return;
    }
    func_020b0410();
}
