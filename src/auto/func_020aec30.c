#include "m2c.h"

M2C_UNK func_020aeb78();                            /* extern */
M2C_UNK func_020aeb8c(M2C_UNK);                     /* extern */

void func_020aec30(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_020aeb78();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_020aeb8c(arg0);
}
