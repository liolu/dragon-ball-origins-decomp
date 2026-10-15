#include "m2c.h"

M2C_UNK func_020aedb4(s32);                         /* extern */

void func_02099fc4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x6EC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x6F0) = arg2;
    if (arg2 != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x6E8) = arg1;
    func_020aedb4(arg1);
}
