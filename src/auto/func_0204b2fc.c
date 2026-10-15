#include "m2c.h"

M2C_UNK func_0209b59c(M2C_UNK, void *);             /* extern */
M2C_UNK func_0209b9dc(M2C_UNK, M2C_UNK);            /* extern */

void func_0204b2fc(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x20C) != 0) {
        func_0209b59c(arg1, arg0 + 0x1B8);
    } else {
        func_0209b59c(arg1, arg0 + 0x1E0);
    }
    func_0209b9dc(arg1, 2);
}
