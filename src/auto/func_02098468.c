#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204ddc4(M2C_UNK);
M2C_UNK func_0204ddd8(M2C_UNK);
M2C_UNK func_02098bd0(M2C_UNK);
void func_020ba820(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02098468(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 var_r6;
    void *temp_r3;
    void *temp_r3_2;

    func_020ba820(arg0 + 0x355, 0, 4);
    func_020ba820(arg0 + 0x359, 0, 4);
    temp_r5 = func_02098bd0(arg0);
    var_r6  = 0;
    do {
        temp_r0 = func_0204ddd8(M2C_FIELD(arg0, s32 *, 0x10) + var_r6);
        if (temp_r0 != 0) {
            if (temp_r5 != (u8) func_0204ddc4(M2C_FIELD(arg0, s32 *, 0x10) + var_r6)) {
                temp_r3                                                       = arg0 + temp_r0;
                temp_r2                                                       = M2C_FIELD(temp_r3, u8 *, 0x358);
                M2C_FIELD(temp_r3, u8 *, 0x358)                               = (u8) (temp_r2 + 1);
                M2C_FIELD((temp_r2 + ((temp_r0 * 0x3C) + arg0)), u8 *, 0x13E) = var_r6;
            } else {
                temp_r3_2                                                       = arg0 + temp_r0;
                temp_r2_2                                                       = M2C_FIELD(temp_r3_2, u8 *, 0x354);
                M2C_FIELD(temp_r3_2, u8 *, 0x354)                               = (u8) (temp_r2_2 + 1);
                M2C_FIELD((temp_r2_2 + ((temp_r0 * 0x3C) + arg0)), u8 *, 0x120) = var_r6;
            }
        }
        var_r6 += 1;
    } while ((u32) var_r6 < 0xC8U);
}
