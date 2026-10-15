#include "m2c.h"

M2C_UNK func_020ac5a8();                            /* extern */
M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c1ae4(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK data_02167c60;
extern M2C_UNK func_020ad420;

s32 func_020ac858(M2C_UNK arg0) {
    func_020ac5a8();
    func_020ac694(3);
    if (func_020c1ae4(&data_02167c60, &func_020ad420, arg0) == 2) {
        return 1;
    }
    func_020ac6a4();
    func_020ac694(0xA);
    return 0;
}
