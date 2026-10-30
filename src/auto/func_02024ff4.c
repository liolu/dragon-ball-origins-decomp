/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

extern M2C_UNK data_021098fc;

void func_02024ff4(s32 arg0, s32 arg1) {
    s32 temp_ip;
    u32 var_lr;

    var_lr = 0;
loop_1:
    temp_ip = ((var_lr + 8) * 0x98) + (s32) &data_021098fc;
    if (!(M2C_FIELD(temp_ip, s32 *, 0x24) & 1)) {
        return;
    }
    var_lr += 1;
    M2C_FIELD(temp_ip, s32 *, 0x18) = arg1;
    if (var_lr >= 0x200U) {
        return;
    }
    goto loop_1;
}
