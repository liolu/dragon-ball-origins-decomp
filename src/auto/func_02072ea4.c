#include "m2c.h"

M2C_UNK func_0202c7f4(s32, s32);                    /* extern */

void func_02072ea4(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    func_0202c7f4(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg1, s32 *, 8));
    func_0202c7f4(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg1, s32 *, 8));
}
