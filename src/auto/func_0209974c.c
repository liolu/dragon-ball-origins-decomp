#include "m2c.h"

M2C_UNK func_02099778();                            /* extern */
s32 func_020ae9cc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_0209974c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02099778();
    M2C_FIELD(arg0, s32 *, 4) = func_020ae9cc(arg1, arg2, 0);
}
