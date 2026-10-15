#include "m2c.h"

M2C_UNK func_02095628(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0209de5c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b5864(s32, s32);                    /* extern */
extern M2C_UNK data_0215d1a4;
extern M2C_UNK data_02160404;

void func_0208fd34(void *arg0) {
    s32 temp_r4;

    func_02095628(&data_0215d1a4, 1);
    func_0209de5c(&data_02160404, 0, 1);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
    func_020b5864(0x0400006C, temp_r4);
    func_020b5864(0x0400106C, temp_r4);
}
