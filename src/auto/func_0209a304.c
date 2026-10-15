#include "m2c.h"

s32 func_020afda0(s32, s32, s32, s32, s32);         /* extern */
M2C_UNK func_020afe48(M2C_UNK);                     /* extern */
s32 func_020b3694(s32, s32, s32);                   /* extern */
M2C_UNK func_020b36e8();                            /* extern */

s32 func_0209a304(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r0;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x714);
    if (temp_r2 == arg1) {
        return 1;
    }
    if (temp_r2 == 4) {
        func_020afe48(0);
    } else if (temp_r2 != -1) {
        func_020b36e8();
    }
    M2C_FIELD(arg0, s32 *, 0x714) = -1;
    var_r0                        = 1;
    if (arg1 == 4) {
        var_r0 = func_020afda0(M2C_FIELD(arg0, s32 *, 0x700), M2C_FIELD(arg0, s32 *, 0x704), M2C_FIELD(arg0, s32 *, 0x708),
                               M2C_FIELD(arg0, s32 *, 0x70C), M2C_FIELD(arg0, s32 *, 0x710));
    } else if (arg1 != -1) {
        var_r0 = func_020b3694(M2C_FIELD(arg0, s32 *, 0x700), M2C_FIELD(arg0, s32 *, 0x704), arg1);
    }
    if (var_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x714) = arg1;
    }
    return var_r0;
}
