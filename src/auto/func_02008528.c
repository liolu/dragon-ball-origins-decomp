#include "m2c.h"

M2C_UNK func_02008658();                            /* extern */

void func_02008528(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
    func_02008658();
}
