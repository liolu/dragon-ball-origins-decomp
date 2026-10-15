#include "m2c.h"

M2C_UNK func_02071fa8(M2C_UNK, s32);                /* extern */

void func_02072d9c(M2C_UNK arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    func_02071fa8(arg0, M2C_FIELD(arg1, s32 *, 8));
}
