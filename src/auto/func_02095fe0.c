#include "m2c.h"

s32 func_02001684(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02002980(s32, M2C_UNK);                /* extern */

void func_02095fe0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_02002980(0x30465254, 0);
    }
    M2C_FIELD(arg0, s32 *, 4)    = func_02001684(arg0 + 8, 0x320);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    func_02001684(arg0 + 0x14, 0x100);
}
