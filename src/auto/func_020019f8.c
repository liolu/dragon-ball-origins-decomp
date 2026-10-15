#include "m2c.h"

M2C_UNK func_0200203c();                            /* extern */
M2C_UNK func_0209a084(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020ed8f8;

void func_020019f8(M2C_UNK arg0) {
    func_0200203c();
    if (M2C_FIELD(&data_020ed8f8, s32 *, 4) == 0) {
        return;
    }
    func_0209a084(M2C_FIELD(&data_020ed8f8, s32 *, 4), arg0);
    M2C_FIELD(&data_020ed8f8, s32 *, 4) = 0;
}
