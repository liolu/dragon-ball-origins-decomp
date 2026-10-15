#include "m2c.h"

M2C_UNK func_02041c84();                            /* extern */

void func_02041a94(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        return;
    }
    func_02041c84(arg0);
}
