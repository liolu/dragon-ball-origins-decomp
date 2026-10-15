#include "m2c.h"

M2C_UNK func_020027ac(M2C_UNK);                     /* extern */
M2C_UNK func_02041cc0(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02041ed8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02124564;

void func_020095e0(void *arg0) {
    func_02041ed8(&data_02124564);
    func_020027ac(1);
    func_02041cc0(&data_02124564, M2C_FIELD(arg0, s32 *, 0x1674), 0);
    M2C_FIELD(arg0, s32 *, 4) = 1;
}
