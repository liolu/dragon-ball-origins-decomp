#include "m2c.h"

M2C_UNK func_02037988(s32, M2C_UNK);                /* extern */
M2C_UNK func_02037a68(s32);                         /* extern */
s32 func_0204e600(M2C_UNK);                         /* extern */
M2C_UNK func_0209b854(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0215f2fc;

s32 func_0203771c(s32 arg0) {
    if (!(M2C_FIELD(&data_0215f2fc, u16 *, 6) & func_0204e600(3))) {
        return 0;
    }
    func_0209b854(arg0 + 0x58, 0x10);
    func_02037988(arg0, -0x10);
    func_02037a68(arg0);
    return 1;
}
