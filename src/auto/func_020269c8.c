#include "m2c.h"

M2C_UNK func_02001dbc();                            /* extern */
M2C_UNK func_0202877c();                            /* extern */

void func_020269c8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0202877c();
    func_02001dbc();
    M2C_FIELD(arg0, s32 *, 0x58) = arg3;
}
