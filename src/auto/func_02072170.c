#include "m2c.h"

M2C_UNK func_020726a8(void *);                      /* extern */
M2C_UNK func_02075ce8(void *);                      /* extern */
M2C_UNK func_0207d0d8(void *);                      /* extern */
M2C_UNK func_020826d4(void *);                      /* extern */
M2C_UNK func_02083924(void *);                      /* extern */

void func_02072170(void *arg0) {
    s32 var_r0_5;
    u32 temp_r0;
    void *var_r0;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_4;

    temp_r0 = (u32) (M2C_FIELD(arg0, s32 *, 4) & 0xF0000000) >> 0x1C;
    switch (temp_r0) {
        default:
            break;
        case 0:
            if (temp_r0 == 0) {
                var_r0 = arg0;
            } else {
                var_r0 = NULL;
            }
            func_02075ce8(var_r0);
            break;
        case 1:
            if (temp_r0 == 1) {
                var_r0_2 = arg0;
            } else {
                var_r0_2 = NULL;
            }
            func_0207d0d8(var_r0_2);
            break;
        case 2:
            if (temp_r0 == 2) {
                var_r0_3 = arg0;
            } else {
                var_r0_3 = NULL;
            }
            func_020826d4(var_r0_3);
            break;
        case 3:
            if (temp_r0 == 3) {
                var_r0_4 = arg0;
            } else {
                var_r0_4 = NULL;
            }
            func_02083924(var_r0_4);
            break;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x10) & 4) == 4) {
        var_r0_5 = 1;
    } else {
        var_r0_5 = 0;
    }
    if (var_r0_5 == 0) {
        return;
    }
    func_020726a8(arg0);
}
