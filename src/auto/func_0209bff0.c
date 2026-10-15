#include "m2c.h"

s32 func_0209aadc(s32, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_0209c234(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, M2C_UNK *, s32); /* extern */

void func_0209bff0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u8 sp18[384];
    s32 temp_r5;
    s32 temp_r6;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x10);
    func_0209c234(arg0, arg1, arg2, arg3, M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20), temp_r5, temp_r6, sp18,
                  func_0209aadc(temp_r5, temp_r6, 1, sp18, 0x10));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 1);
}
