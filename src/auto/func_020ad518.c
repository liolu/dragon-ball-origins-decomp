#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */

void func_020ad518(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020ac6a4();
        func_020ac694(9);
        return;
    }
    func_020ac694(0);
}
