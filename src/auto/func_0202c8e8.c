#include "m2c.h"

M2C_UNK func_0202cf48();                            /* extern */
M2C_UNK func_020b5104(void *, void *);              /* extern */

void *func_0202c8e8(void *arg0, void *arg1) {
    s32 temp_r0;

    func_0202cf48();
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x80);
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0                   = M2C_FIELD(arg0, s32 *, 0x54);
    if ((temp_r0 != 0) && (temp_r0 != 0x1000)) {
        func_020b5104(arg1, arg1);
    }
    return arg1;
}
