#include "m2c.h"

M2C_UNK func_02086ef8();                            /* extern */

void func_02087170(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r1;

    temp_r1                      = M2C_FIELD(arg0, s32 *, 0x10) - arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r1;
    if ((temp_r1 > 0) && ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x30) > (s32) *arg2)) {
        return;
    }
    func_02086ef8(arg0);
}
