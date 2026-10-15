#include "m2c.h"

M2C_UNK func_020a1eec();                            /* extern */
M2C_UNK func_020a2054(s32, s32, s32, s32, s32);     /* extern */

void func_020a2018(void *arg0, void *arg1) {
    s32 temp_r0;

    func_020a1eec();
    temp_r0                   = arg0 + 0x70;
    M2C_FIELD(arg1, s32 *, 4) = temp_r0;
    func_020a2054(temp_r0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x68) + M2C_FIELD(arg0, s32 *, 0x6C),
                  M2C_FIELD(arg0, s32 *, 0x1B4), M2C_FIELD(arg0, s32 *, 0x1B0));
}
