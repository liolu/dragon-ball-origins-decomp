#include "m2c.h"

M2C_UNK func_020b8668();                            /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */

void func_020c3000(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020b8668(arg0);
    }
    func_020ba048(M2C_FIELD(arg1, s32 *, 4));
}
