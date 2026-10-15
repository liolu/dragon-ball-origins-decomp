#include "m2c.h"

M2C_UNK func_020a1c48(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020a1e08();                            /* extern */
M2C_UNK func_020c35e8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020c370c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e2630;

s32 func_02050330(s32 arg0, M2C_UNK arg1) {
    u8 sp0[128];

    func_020a1e08();
    func_020c35e8(sp0, &data_020e2630);
    func_020c370c(sp0, arg1);
    func_020a1c48(arg0, sp0, 0);
    return arg0;
}
