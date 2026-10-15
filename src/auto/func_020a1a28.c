#include "m2c.h"

s32 func_020a1a28(void *arg0) {
    s16 temp_ip;
    s32 var_r1;
    s32 var_r2;
    void *var_r3;

    var_r2  = 0;
    temp_ip = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x2A);
    var_r1  = 0;
    if ((s32) temp_ip > 0) {
        var_r3 = M2C_FIELD(arg0, void **, 0x24);
        do {
            var_r1 += 1;
            if (!(M2C_FIELD(var_r3, u8 *, 0x26) & 2)) {
                var_r2 += M2C_FIELD(var_r3, s32 *, 8);
            }
            var_r3 += 0x30;
        } while (var_r1 < (s32) temp_ip);
    }
    return var_r2;
}
