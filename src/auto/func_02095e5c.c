/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02095e5c(void *arg0, s32 arg1) {
    s32 var_r3;
    void *var_r2;

    var_r2 = M2C_FIELD(arg0, void **, 0x18);
    var_r3 = 0;
loop_1:
    if (M2C_FIELD(var_r2, s32 *, 0) == arg1) {
        return M2C_FIELD(var_r2, s32 *, 4);
    }
    var_r3 += 1;
    var_r2 += 8;
    if (var_r3 >= 0xC8) {
        return 0x108;
    }
    goto loop_1;
}
