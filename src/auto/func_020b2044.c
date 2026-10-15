#include "m2c.h"

M2C_UNK func_020b27e0();                            /* extern */
extern M2C_UNK data_0216bf70;

void func_020b2044(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_0216bf70, s32 *, 4) != 0) {
        return;
    }
    func_020b27e0(arg0, arg1);
    M2C_FIELD(&data_0216bf70, s32 *, 4) = arg0;
}
