#include "m2c.h"

M2C_UNK func_02022bd0(void *, M2C_UNK);             /* extern */
s32 func_0204e888(s32);                             /* extern */

void func_02022b94(void *arg0) {
    if (func_0204e888(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
        func_02022bd0(arg0, -1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 7;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
