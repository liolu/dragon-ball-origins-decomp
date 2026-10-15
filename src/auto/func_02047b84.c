#include "m2c.h"

s32 func_0202c83c();                                /* extern */
M2C_UNK func_02047b48();                            /* extern */

s32 func_02047b84(void *arg0, s32 arg1) {
    if (arg1 == 6) {
        return M2C_FIELD(arg0, s32 *, 0x18) + 0x74;
    }
    func_02047b48();
    return func_0202c83c();
}
