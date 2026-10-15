#include "m2c.h"

M2C_UNK func_02002140();                            /* extern */
M2C_UNK func_02099fe8();                            /* extern */
extern M2C_UNK data_020ed8f8;

void func_020019d8(void) {
    func_02099fe8();
    M2C_FIELD(&data_020ed8f8, s32 *, 4) = 0;
    func_02002140();
}
