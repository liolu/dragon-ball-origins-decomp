#include "m2c.h"

M2C_UNK func_0207b7e8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214796c;

void func_02068ad0(void *arg0) {
    s32 var_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x12F0) & 0x200000) == 0x200000) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_0207b7e8(&data_0214796c);
}
