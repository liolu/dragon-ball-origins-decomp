#include "m2c.h"

M2C_UNK func_020c36e4(s8 *);                        /* extern */

void func_020c361c(s32 arg0, s8 *arg1, s32 arg2) {
    s32 temp_ip;
    s32 var_lr;
    s8 *var_r4;

    temp_ip = arg2 - 1;
    var_r4  = arg1;
    var_lr  = 0;
    if (temp_ip > 0) {
    loop_1:
        *(s8 *) (arg0 + var_lr) = *var_r4;
        if (*var_r4 != 0) {
            var_lr += 1;
            var_r4 += 1;
            if (var_lr < temp_ip) {
                goto loop_1;
            }
        }
    }
    if ((var_lr >= (s32) (arg2 - 1)) && (arg2 != 0)) {
        *(s8 *) (arg0 + var_lr) = 0;
    }
    func_020c36e4(arg1);
}