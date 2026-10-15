#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020acb28();                            /* extern */
extern M2C_UNK data_021662c0;

void func_020ad5e4(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        return;
    }
    func_020ac694(1);
    if (M2C_FIELD(&data_021662c0, s32 *, 0x18) == 0) {
        return;
    }
    func_020acb28();
    M2C_FIELD(&data_021662c0, s32 *, 0x18) = 0;
}
