#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c2c44(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02166ea0;

s32 func_020acec8(void) {
    func_020ac694(6);
    if (func_020c2c44(&data_02166ea0, 0xD) == 0) {
        return 1;
    }
    func_020ac6a4();
    return 0;
}
