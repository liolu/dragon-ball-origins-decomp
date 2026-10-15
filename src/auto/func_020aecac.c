#include "m2c.h"

s32 func_020aecac(void *arg0, s32 arg1) {
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 0x2C);
    if ((arg1 != 0) && (var_r3 != NULL)) {
    loop_4:
        if (M2C_FIELD(var_r3, s32 *, 0) != arg1) {
            var_r3 = M2C_FIELD(var_r3, void **, 0xC);
            if (var_r3 != NULL) {
                goto loop_4;
            }
        }
    }
    if (var_r3 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24)   = (s32) M2C_FIELD(var_r3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x28)   = (s32) M2C_FIELD(var_r3, s32 *, 8);
    M2C_FIELD(arg0, void **, 0x2C) = (void *) M2C_FIELD(var_r3, void **, 0xC);
    return 1;
}
