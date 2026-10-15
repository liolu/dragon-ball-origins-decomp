#include "m2c.h"

s32 func_0202bf20(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_0202cf48();                            /* extern */
M2C_UNK func_0202d350(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202e090();                            /* extern */

void func_0202bec0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0202cf48(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x24) & 2) {
        if (func_0202bf20(arg0, arg1, arg2) != 0) {
            return;
        }
        func_0202d350(arg0, arg3);
        return;
    }
    func_0202e090(arg0);
}
