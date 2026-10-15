#include "m2c.h"

extern s8 data_02136be0;

void func_0204e690(s32 arg0) {
    s32 var_r3;
    s8 *var_ip;
    s8 temp_r2;

    var_r3 = 0;
    var_ip = &data_02136be0;
    do {
        if ((var_r3 < 0x10) && (temp_r2 = *(s8 *) (arg0 + var_r3), (temp_r2 != 0))) {
            *var_ip = temp_r2;
        } else {
            *var_ip = 0;
        }
        var_r3 += 1;
        var_ip += 1;
    } while (var_r3 < 0x18);
}