#include "m2c.h"

M2C_UNK func_0209b59c(void *, void *);              /* extern */
M2C_UNK func_0209c808();                            /* extern */

void func_0209c7e0(void *arg0, void *arg1) {
    func_0209c808();
    func_0209b59c(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
}
