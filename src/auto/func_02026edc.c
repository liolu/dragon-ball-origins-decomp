#include "engine.h"
#include "m2c.h"

void func_02026f60(M2C_UNK);
M2C_UNK func_0202ea3c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_02026edc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 var_r8;
    u32 temp_r1;
    u32 var_r4;

    var_r8 = arg3;
    var_r4 = 0;
    if (arg2 != 0) {
        do {
            temp_r1 = M2C_FIELD(arg6, u32 *, 0x44);
            if (M2C_FIELD((arg6 + ((temp_r1 >> 5) * 4)), s32 *, 4) & (1 << (temp_r1 & 0x1F))) {
                var_r8 = func_0202ea3c(arg1, var_r8, arg4, arg5);
            } else {
                func_02026f60(arg1);
            }
            var_r4 += 1;
            M2C_FIELD(arg6, u32 *, 0x44) = (u32) (M2C_FIELD(arg6, u32 *, 0x44) + 1);
        } while (var_r4 < (u32) arg2);
    }
    return var_r8;
}
