#include "m2c.h"

M2C_UNK func_020afb80();                            /* extern */

void func_020afac8(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020afb80(arg0);
}
