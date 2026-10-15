#include "m2c.h"

M2C_UNK func_0209cebc(void *, s32);                 /* extern */

void func_0209ce7c(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    func_0209cebc(arg0, arg1 - M2C_FIELD(arg0, s32 *, 8));
}
