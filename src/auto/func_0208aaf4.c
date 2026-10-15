#include "m2c.h"

M2C_UNK func_020ac8a4(M2C_UNK);                     /* extern */

void func_0208aaf4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) + 1);
    func_020ac8a4(0);
}
