#include "m2c.h"

M2C_UNK func_020bd808();                            /* extern */

s32 func_02099bf0(void *arg0) {
    func_020bd808();
    return M2C_FIELD(arg0, s32 *, 0x2C) - M2C_FIELD(arg0, s32 *, 0x24);
}
