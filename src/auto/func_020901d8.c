#include "m2c.h"

M2C_UNK func_02090280(s32 *);                       /* extern */
M2C_UNK func_020ba6f0(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_020901d8(s32 *arg0) {
    *arg0 = 0;
    func_020ba6f0(0, ((s8 *) arg0 + 4), 4);
    func_02090280(arg0);
}
