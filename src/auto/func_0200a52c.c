#include "m2c.h"

M2C_UNK func_020502fc(void *, s32);                 /* extern */
M2C_UNK func_020a1e08(s32);                         /* extern */

void func_0200a52c(void *arg0, s32 arg1) {
    func_020a1e08(arg0 + 0xB4);
    M2C_FIELD(arg0, s32 *, 0xA8) = arg1;
    if (arg1 == 0xA0) {
        return;
    }
    func_020502fc(arg0 + 0xB4, arg1);
}
