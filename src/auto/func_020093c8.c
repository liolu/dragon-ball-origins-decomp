#include "m2c.h"

M2C_UNK func_02009c0c();                            /* extern */

void func_020093c8(void *arg0, s32 arg1) {
    func_02009c0c();
    if (arg1 > 1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
