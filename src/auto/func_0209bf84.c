#include "m2c.h"

M2C_UNK func_0209b638(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0209bfbc();                            /* extern */

void func_0209bf84(void *arg0, void *arg1, M2C_UNK arg2) {
    func_0209bfbc();
    func_0209b638(arg0, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
}
