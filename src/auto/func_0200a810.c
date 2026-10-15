#include "m2c.h"

s32 func_0202c670();                                /* extern */

s32 func_0200a810(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 var_r0;

    var_r0 = func_0202c670();
    if (var_r0 > arg2) {
        var_r0 = arg2;
    }
    temp_r1 = 0 - arg2;
    if (var_r0 < temp_r1) {
        var_r0 = temp_r1;
    }
    if ((var_r0 > 0) && (var_r0 < arg1)) {
        var_r0 = 0;
    }
    if (var_r0 >= 0) {
        return var_r0;
    }
    if (var_r0 > (s32) (0 - arg1)) {
        var_r0 = 0;
    }
    return var_r0;
}
