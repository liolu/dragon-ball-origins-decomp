#include "m2c.h"

M2C_UNK func_020a1c48(); /* extern */
M2C_UNK func_020b87e4(); /* extern */
M2C_UNK func_020bd3c4();                   /* extern */
s32 func_020bd65c();            /* extern */
M2C_UNK func_020bd6a4();                   /* extern */
extern M2C_UNK data_020e6a54;
extern M2C_UNK data_020e6a6c;

s32 func_020871a4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp90[256];
    u8 sp48[72];
    u8 sp0[72];
    s32 var_r0;
    s32 var_r0_2;

    func_020b87e4(sp90, &data_020e6a54);
    func_020bd3c4(sp48);
    if (func_020bd65c(sp48, sp90) == 0) {
        var_r0 = 0;
    } else {
        func_020bd6a4(sp48);
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        func_020a1c48(arg1, sp90, 0);
        return 1;
    }
    func_020b87e4(sp90, &data_020e6a6c, arg2, arg2);
    func_020bd3c4(sp0);
    if (func_020bd65c(sp0, sp90) == 0) {
        var_r0_2 = 0;
    } else {
        func_020bd6a4(sp0);
        var_r0_2 = 1;
    }
    if (var_r0_2 == 0) {
        return 0;
    }
    func_020a1c48(arg1, sp90, 0);
    return 1;
}
