#include "m2c.h"

M2C_UNK func_0202c248(void *);                      /* extern */

s32 func_0200ed3c(void *arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x5A8);
    if (var_r0 <= 0) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x5AC);
    }
    M2C_FIELD(arg0, s32 *, 0x5A8) = (s32) (var_r0 - 1);
    func_0202c248(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0x5AC) - 1) == M2C_FIELD(arg0, s32 *, 0x5A8)) {
        M2C_FIELD(arg0, s32 *, 0x5B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x5B8) + 1);
    }
    return arg1 + 4;
}
