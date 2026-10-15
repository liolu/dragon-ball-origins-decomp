#include "m2c.h"

M2C_UNK func_01ffac78(s32, void *, void *, s32, s32, s32, s32); /* extern */
M2C_UNK func_01ffade0(s32, void *, void *, s32, s32, s32); /* extern */
M2C_UNK func_020a2018(s32, void *);                 /* extern */

void func_02015438(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_r0 != 0) {
        func_020a2018(temp_r0, arg0 + 0x44);
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x58) != 0) {
        func_01ffade0(M2C_FIELD(arg0, s32 *, 0x3C), arg0 + 4, arg0 + 0x44, M2C_FIELD(arg0, s32 *, 0x50),
                      M2C_FIELD(arg0, s32 *, 0x4C), (s32) M2C_FIELD(arg0, u8 *, 0x59));
        return;
    }
    func_01ffac78(M2C_FIELD(arg0, s32 *, 0x3C), arg0 + 4, arg0 + 0x44, M2C_FIELD(arg0, s32 *, 0x50),
                  M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x4C), (s32) M2C_FIELD(arg0, u8 *, 0x59));
}
