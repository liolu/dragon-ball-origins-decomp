#include "m2c.h"

s32 func_020ac658(M2C_UNK);                         /* extern */
M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c1b8c(M2C_UNK *);                       /* extern */
extern M2C_UNK func_020ad518;

s32 func_020acb28(void) {
    if (func_020ac658(1) == 0) {
        return 0;
    }
    if (func_020c1b8c(&func_020ad518) == 2) {
        return 1;
    }
    func_020ac6a4();
    func_020ac694(0xA);
    return 0;
}
