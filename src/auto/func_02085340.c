#include "m2c.h"

M2C_UNK func_02084eec();                            /* extern */

void func_02085340(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x12C4) == 0) {
        return;
    }
    func_02084eec();
}
