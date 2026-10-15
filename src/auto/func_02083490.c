#include "m2c.h"

M2C_UNK func_02072f5c();                            /* extern */
M2C_UNK func_020834b4(M2C_UNK, s32);                /* extern */

void func_02083490(M2C_UNK arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 2) {
        func_020834b4(arg0, M2C_FIELD(arg1, s32 *, 4));
        return;
    }
    func_02072f5c();
}
