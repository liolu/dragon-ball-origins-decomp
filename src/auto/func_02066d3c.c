#include "m2c.h"

M2C_UNK func_0205fb54(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214766c;

void func_02066d3c(void *arg0) {
    s32 var_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x12F0) & 1) == 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_0205fb54(&data_0214766c);
}
