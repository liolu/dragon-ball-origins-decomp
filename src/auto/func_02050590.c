/* compiler: 2.0/sp1p5 -flag no-opt_rebuildlogicals */
#include "m2c.h"

M2C_UNK func_02014404(void *, M2C_UNK);             /* extern */

void func_02050590(void *arg0, M2C_UNK arg1) {
    s32 var_r2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0);
    var_r2  = 0;
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 0x274) != 0)) {
        var_r2 = 1;
    }
    if (var_r2 != 0) {
        M2C_FIELD(M2C_FIELD(temp_r0, void **, 0), M2C_UNK(**)(void *, M2C_UNK), 0x178)(temp_r0, arg1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x1568) == 0) {
        return;
    }
    func_02014404(arg0 + 0x12F4, arg1);
}
