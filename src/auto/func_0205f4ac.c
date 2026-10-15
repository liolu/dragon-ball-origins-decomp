#include "m2c.h"

M2C_UNK func_0205eab4(void *);                      /* extern */
M2C_UNK func_0205ece8(void *);                      /* extern */

void func_0205f4ac(void *arg0) {
    s32 var_r4;
    s32 var_r4_2;
    void *var_r5;
    void *var_r6;

    var_r6 = arg0;
    var_r5 = var_r6;
    var_r4 = 0;
    do {
        if (M2C_FIELD(var_r5, s32 *, 0x54) != 0) {
            func_0205eab4(var_r5);
        }
        var_r4 += 1;
        var_r5 += 0x60;
    } while (var_r4 < 0x10);
    var_r4_2 = 0;
    do {
        if (M2C_FIELD(var_r6, s32 *, 0x54) != 0) {
            func_0205ece8(var_r6);
        }
        var_r4_2 += 1;
        var_r6 += 0x60;
    } while (var_r4_2 < 0x10);
}
