#include "m2c.h"

M2C_UNK func_02062e9c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02147968;

void func_02068a9c(void *arg0) {
    s32 var_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x12F0) & 0x100000) == 0x100000) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_02062e9c(&data_02147968);
}
