#include "m2c.h"

M2C_UNK func_020016f4(void *);                      /* extern */
M2C_UNK func_02099bb4();                            /* extern */

void func_0205f5b4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 2;
    func_020016f4(arg0 + 0x28);
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_02099bb4();
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
