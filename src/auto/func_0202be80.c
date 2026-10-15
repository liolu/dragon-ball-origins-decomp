#include "m2c.h"

M2C_UNK func_0202cf48();                            /* extern */
M2C_UNK func_0202d350(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202e090();                            /* extern */

void func_0202be80(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0202cf48(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x24) & 2) {
        func_0202d350(arg0, arg1);
        return;
    }
    func_0202e090(arg0);
}
