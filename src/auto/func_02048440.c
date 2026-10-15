#include "m2c.h"

s32 func_02048440(u32 arg0, u32 arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    switch (arg2) {                                 /* irregular */
        case 0:
            if (arg0 == arg1) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            return var_r0;
        case 1:
            if (arg0 >= arg1) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            return var_r0_2;
        case 2:
            if (arg0 > arg1) {
                var_r0_3 = 1;
            } else {
                var_r0_3 = 0;
            }
            return var_r0_3;
        default:
            return 0;
    }
}
