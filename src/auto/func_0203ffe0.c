#include "m2c.h"

M2C_UNK func_020401a4();                            /* extern */

void func_0203ffe0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xDCC) != 2) {
        return;
    }
    func_020401a4(arg0);
}
