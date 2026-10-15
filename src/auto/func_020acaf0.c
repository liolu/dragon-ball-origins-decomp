#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
M2C_UNK func_020ad138();                            /* extern */
s32 func_020c2000(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK func_020ad5e4;

s32 func_020acaf0(void) {
    func_020ac694(3);
    if (func_020c2000(&func_020ad5e4, 0) == 2) {
        return 1;
    }
    func_020ac6a4();
    func_020ad138();
    return 0;
}
