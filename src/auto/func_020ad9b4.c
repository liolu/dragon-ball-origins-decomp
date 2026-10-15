#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020acd6c();                                /* extern */

void func_020ad9b4(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020ac6a4();
        func_020ac694(9);
        return;
    }
    if (func_020acd6c() != 0) {
        return;
    }
    func_020ac694(9);
}
