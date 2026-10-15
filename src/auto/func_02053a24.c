#include "m2c.h"

M2C_UNK func_02053120();                            /* extern */

void func_02053a24(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_02053120();
}
