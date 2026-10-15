#include "m2c.h"

M2C_UNK func_020aea04();                            /* extern */

void func_02099778(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_020aea04();
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
