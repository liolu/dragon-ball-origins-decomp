#include "m2c.h"

M2C_UNK func_020016f4(void *);                      /* extern */

void func_02096030(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_020016f4(arg0 + 8);
    func_020016f4(arg0 + 0x14);
}
