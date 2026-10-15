#include "m2c.h"

M2C_UNK func_0203647c(M2C_UNK);                     /* extern */
M2C_UNK func_02036ab8(M2C_UNK);                     /* extern */
extern void *data_0213dff0;

void func_02036a00(M2C_UNK arg0) {
    s32 var_r0;

    if ((data_0213dff0 != NULL) && (M2C_FIELD(data_0213dff0, s32 *, 0x274) != 0)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_0203647c(arg0);
    func_02036ab8(arg0);
}
