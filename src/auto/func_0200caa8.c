#include "m2c.h"

s32 func_0200caa8(void *arg0, s32 arg1) {
    s32 var_r3;
    void *var_ip;

    if (arg1 < 0) {
        return 0;
    }
    var_ip = arg0;
    var_r3 = 0;
loop_3:
    if (arg1 == M2C_FIELD(var_ip, s32 *, 0x4C44)) {
        return (var_r3 * 0x48) + (s32) (arg0 + 0x4C44);
    }
    var_r3 += 1;
    var_ip += 0x48;
    if (var_r3 >= 0x10) {
        return 0;
    }
    goto loop_3;
}
