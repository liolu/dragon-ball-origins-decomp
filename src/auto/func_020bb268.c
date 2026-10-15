#include "m2c.h"

s32 func_020bb158(M2C_UNK);                         /* extern */
M2C_UNK func_020bb328(M2C_UNK);                     /* extern */
s32 func_020bb644();                                /* extern */
M2C_UNK func_020bb6e4();                            /* extern */
s32 func_020bb70c();                                /* extern */
s32 func_020bb754();                                /* extern */

s32 func_020bb268(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_020bb754() == 0) {
        return 0;
    }
    temp_r0_3 = func_020bb70c();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_020bb644() > 0) {
        do {

        } while (func_020bb158(0) != 0);
        temp_r0_2 = func_020bb70c();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020bb328(1);
block_12:
    func_020bb6e4();
    do {
        func_020bb158(1);
        temp_r0 = func_020bb70c();
    } while (temp_r0 == 0);
    return temp_r0;
}
