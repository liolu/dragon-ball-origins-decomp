#include "m2c.h"

M2C_UNK func_02041b00();                            /* extern */

void func_02041a7c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x98) != 1) {
        return;
    }
    func_02041b00(arg0);
}
