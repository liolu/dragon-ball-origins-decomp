#include "m2c.h"

M2C_UNK func_0209b87c(M2C_UNK, s32, s32);           /* extern */

void func_0204b33c(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x20C) != 0) {
        func_0209b87c(arg1, M2C_FIELD(arg0, s32 *, 0x1BC), M2C_FIELD(arg0, s32 *, 0x1C0));
        return;
    }
    func_0209b87c(arg1, M2C_FIELD(arg0, s32 *, 0x1E4), M2C_FIELD(arg0, s32 *, 0x1E8));
}
