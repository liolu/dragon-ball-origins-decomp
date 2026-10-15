#include "m2c.h"

M2C_UNK func_020081dc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0209fb54(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020f3ed8;

s32 func_0208bb1c(M2C_UNK arg0) {
    func_0209fb54(arg0, &data_020f3ed8);
    func_020081dc(&data_020f3ed8, -1);
    return 1;
}
