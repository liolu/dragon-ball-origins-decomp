#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac8a4(M2C_UNK);                     /* extern */
s32 func_020acaf0();                                /* extern */

void func_020ad5b0(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020ac8a4(0);
        return;
    }
    if (func_020acaf0() != 0) {
        return;
    }
    func_020ac694(9);
}
