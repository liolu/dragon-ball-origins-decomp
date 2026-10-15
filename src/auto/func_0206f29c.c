#include "m2c.h"

M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0206f80c(void *, M2C_UNK);             /* extern */

void func_0206f29c(void *arg0) {
    func_02001c08(0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_0206f80c(arg0, -0x100);
}
