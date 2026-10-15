#include "m2c.h"

M2C_UNK func_0202bc60();                            /* extern */
extern M2C_UNK data_020d8ed8;

void *func_0202e2f4(void *arg0) {
    func_0202bc60();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8ed8;
    M2C_FIELD(arg0, s32 *, 0x98)   = 0x108;
    M2C_FIELD(arg0, s32 *, 0x9C)   = 0;
    return arg0;
}
