#include "m2c.h"

M2C_UNK func_02025460(M2C_UNK *, M2C_UNK, s32, void *); /* extern */
M2C_UNK func_020256c0(M2C_UNK *, M2C_UNK, void *);  /* extern */
M2C_UNK func_02025828(M2C_UNK *, M2C_UNK, s32, void *); /* extern */
extern M2C_UNK data_020f6268;

void func_0200d85c(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 var_r0;
    s32 var_r0_2;

    if (arg3 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2FC) <= 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            return;
        }
        func_02025828(&data_020f6268, arg1, arg3, arg0);
        return;
    }
    if (arg2 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2FC) <= 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            return;
        }
        func_02025460(&data_020f6268, arg1, arg2, arg0);
        return;
    }
    func_020256c0(&data_020f6268, arg1, arg0);
}
