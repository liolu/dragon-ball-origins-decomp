#include "m2c.h"

M2C_UNK func_0203d458(void *, s32);                 /* extern */
M2C_UNK func_0203e2c4(void *, s32);                 /* extern */
M2C_UNK func_0209b854(s32, s32);                    /* extern */

void func_0203cd00(void *arg0, s32 arg1) {
    s32 temp_r0;

    func_0209b854(arg0 + 0x10, 0x40 - arg1);
    func_0209b854(arg0 + 0x38, 0x80 - arg1);
    func_0209b854(arg0 + 0x60, 0xC0 - arg1);
    func_0209b854(arg0 + 0x88, 0x44 - arg1);
    func_0209b854(arg0 + 0xB8, 0x84 - arg1);
    func_0209b854(arg0 + 0xE8, 0xC2 - arg1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x11C);
    switch (temp_r0) {                              /* irregular */
        case 1:
            return;
        case 0:
            func_0203d458(arg0, arg1);
            return;
        case 2:
            func_0203e2c4(arg0, arg1);
            return;
    }
}
