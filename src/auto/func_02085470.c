#include "m2c.h"

void *func_02062a7c(M2C_UNK *, M2C_UNK);            /* extern */
M2C_UNK func_020854b8();                            /* extern */
extern M2C_UNK data_02147968;

void func_02085470(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    void *var_r0;

    func_020854b8();
    var_r0 = func_02062a7c(&data_02147968, arg1);
    if (var_r0 == NULL) {
        return;
    }
    if (((u32) (M2C_FIELD(var_r0, s32 *, 4) & 0xF0000000) >> 0x1C) != 1) {
        var_r0 = NULL;
    }
    M2C_FIELD(arg0, void **, 0) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)   = arg3;
}
