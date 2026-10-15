#include "m2c.h"

M2C_UNK func_0202aa60(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02094d80();                            /* extern */
M2C_UNK func_020b4f7c(s32, M2C_UNK *, M2C_UNK *);   /* extern */
extern M2C_UNK data_020e6e54;
extern M2C_UNK data_020f8a2c;

void func_02094d40(s32 arg0) {
    u8 sp0[12];

    func_02094d80();
    func_020b4f7c(arg0 + 0x934, &data_020e6e54, sp0);
    func_0202aa60(&data_020f8a2c, sp0);
}
