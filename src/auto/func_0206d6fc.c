#include "m2c.h"

M2C_UNK func_0204b138(M2C_UNK *);                   /* extern */
M2C_UNK func_0206dab4(void *);                      /* extern */
M2C_UNK func_0206db2c(void *);                      /* extern */
M2C_UNK func_0206dc68(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_021267b0;

void func_0206d6fc(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    func_0206dc68(arg0, 0);
    if ((M2C_FIELD(arg0, s32 *, 4) & 0x40) == 0x40) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_0204b138(&data_021267b0);
    }
    if ((M2C_FIELD(arg0, s32 *, 4) & 0x200) == 0x200) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        func_0206dab4(arg0);
    }
    if ((M2C_FIELD(arg0, s32 *, 4) & 0x400) == 0x400) {
        var_r0_3 = 1;
    } else {
        var_r0_3 = 0;
    }
    if (var_r0_3 == 0) {
        return;
    }
    func_0206db2c(arg0);
}
