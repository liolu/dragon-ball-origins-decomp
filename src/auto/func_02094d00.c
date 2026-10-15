#include "m2c.h"

M2C_UNK func_02094310(void *, s32);                 /* extern */
M2C_UNK func_02094d90(void *);                      /* extern */

void func_02094d00(void *arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 == 0) {
        return;
    }
    var_r1 = arg1 + M2C_FIELD(arg0, s32 *, 0x854);
    if (var_r1 > 0x74) {
        var_r1 = 0x74;
    } else if (var_r1 < 4) {
        var_r1 = 4;
    }
    func_02094310(arg0, var_r1);
    func_02094d90(arg0);
}
