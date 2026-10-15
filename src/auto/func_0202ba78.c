#include "m2c.h"

M2C_UNK func_020a13a8(void *, M2C_UNK);                      /* extern */

void func_0202ba78(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x144) = 1;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
    func_020a13a8(arg0 + 4, arg1);
}
