#include "m2c.h"

M2C_UNK func_02081408(void *, M2C_UNK);             /* extern */

void func_02081428(M2C_UNK arg0, void *arg1) {
    void *var_r1;

    var_r1 = arg1;
    if (((u32) (M2C_FIELD(var_r1, s32 *, 4) & 0xF0000000) >> 0x1C) != 1) {
        var_r1 = NULL;
    }
    if (var_r1 == NULL) {
        return;
    }
    func_02081408(var_r1, arg0);
}
