#include "m2c.h"

M2C_UNK func_0202bc60();                            /* extern */
extern M2C_UNK data_020d5564;
extern M2C_UNK data_020e2668;

void *func_02052d7c(void *arg0) {
    func_0202bc60();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d5564;
    M2C_FIELD(arg0, s32 *, 0x124)  = 0;
    M2C_FIELD(arg0, s32 *, 0x128)  = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e2668;
    return arg0;
}
