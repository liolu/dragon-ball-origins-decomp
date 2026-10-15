#include "m2c.h"

M2C_UNK func_02002c10(void *, s32, s32);            /* extern */
M2C_UNK func_0209b87c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0209b978(void *, M2C_UNK);             /* extern */

void func_02035b1c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_02002c10(arg0 + 8, arg4, M2C_FIELD(arg0, s32 *, 4));
    func_0209b87c(arg0 + 8, arg1, arg2);
    func_0209b978(arg0 + 8, arg3);
}
