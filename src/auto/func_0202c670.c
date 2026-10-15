#include "engine.h"
#include "m2c.h"

s32 func_0202c670(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 >= 0x8000) {
        do {
            var_r0 -= 0x10000;
        } while (var_r0 >= 0x8000);
    }
    if (var_r0 >= -0x8000) {
        return var_r0;
    }
    do {
        var_r0 += 0x10000;
    } while (var_r0 < -0x8000);
    return var_r0;
}
