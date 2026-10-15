#include "m2c.h"

M2C_UNK func_02036108();                            /* extern */
M2C_UNK func_020367d8(M2C_UNK);                     /* extern */
extern M2C_UNK data_0213eff0;

void func_0203674c(M2C_UNK arg0) {
    if (M2C_FIELD(&data_0213eff0, s32 *, 0x568) == 0) {
        return;
    }
    func_02036108(arg0);
    func_020367d8(arg0);
}
