#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c1694(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_021662c0;
extern M2C_UNK func_020addf4;

void func_020ac808(s32 arg0) {
    if (func_020c1694(0xE, &func_020addf4, 0) == 0) {
        M2C_FIELD(&data_021662c0, s32 *, 4) = arg0;
        return;
    }
    func_020ac6a4();
    func_020ac694(9);
}
