#include "m2c.h"

M2C_UNK func_0204b118(M2C_UNK *);                   /* extern */
M2C_UNK func_0206d780(void *);                      /* extern */
M2C_UNK func_0206d8d0(void *);                      /* extern */
M2C_UNK func_0206da08(void *);                      /* extern */
M2C_UNK func_0206dc68(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_021267b0;

void func_0206d654(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    func_0206dc68(arg0, 1);
    if ((M2C_FIELD(arg0, s32 *, 4) & 0x40) == 0x40) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_0204b118(&data_021267b0);
    }
    if ((M2C_FIELD(arg0, s32 *, 4) & 0x100) == 0x100) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        func_0206d780(arg0);
    }
    if ((M2C_FIELD(arg0, s32 *, 4) & 0x80) == 0x80) {
        var_r0_3 = 1;
    } else {
        var_r0_3 = 0;
    }
    if (var_r0_3 != 0) {
        func_0206d8d0(arg0);
    }
    if ((M2C_FIELD(arg0, s32 *, 4) & 0x800) == 0x800) {
        var_r0_4 = 1;
    } else {
        var_r0_4 = 0;
    }
    if (var_r0_4 == 0) {
        return;
    }
    func_0206da08(arg0);
}
