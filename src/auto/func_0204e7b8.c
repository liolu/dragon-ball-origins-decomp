#include "m2c.h"

M2C_UNK func_0204d834();                            /* extern */
M2C_UNK func_0204d8d0();                            /* extern */
M2C_UNK func_0204d93c();                            /* extern */
M2C_UNK func_0204d9bc();                            /* extern */
M2C_UNK func_0204f04c(s32, M2C_UNK);                /* extern */

void func_0204e7b8(s32 arg0) {
    func_0204f04c(arg0, 1);
    if (arg0 == 0xE0) {
        func_0204d834();
    }
    if (arg0 == 0xE1) {
        func_0204d8d0();
    }
    if (arg0 == 0xE2) {
        func_0204d93c();
    }
    if (arg0 != 0xE3) {
        return;
    }
    func_0204d9bc();
}
