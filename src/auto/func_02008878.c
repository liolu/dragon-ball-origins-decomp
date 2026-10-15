#include "m2c.h"

M2C_UNK func_02002b84(s32, M2C_UNK);                /* extern */
M2C_UNK func_02041cc0(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_02124564;

void func_02008878(void *arg0) {
    func_02002b84(arg0 + 0x2C, 0x10);
    func_02041cc0(&data_02124564, M2C_FIELD(arg0, s32 *, 0x1674), 0);
}
