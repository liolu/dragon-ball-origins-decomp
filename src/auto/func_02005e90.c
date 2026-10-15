#include "m2c.h"

M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02005bc4(void *);                      /* extern */
M2C_UNK func_020061bc(void *);                      /* extern */
s32 func_0204eba4();                                /* extern */
s32 func_0204f430();                                /* extern */
s32 func_0204f710();                                /* extern */
extern M2C_UNK data_02136be0;

void func_02005e90(void *arg0) {
    s32 temp_r0;
    s32 var_r4;

    func_02001c08(0, 1, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x348) < 3) {
        var_r4 = func_0204f710();
        if ((func_0204eba4() == -1) || ((s32) M2C_FIELD(&data_02136be0, s32 *, 0x2A0) <= 0)) {
            M2C_FIELD(arg0, s32 *, 8) = 8;
        } else {
            M2C_FIELD(arg0, s32 *, 8) = 9;
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else {
        temp_r0                     = func_0204f430();
        M2C_FIELD(arg0, s32 *, 8)   = 9;
        var_r4                      = temp_r0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    if (var_r4 != -1) {
        return;
    }
    func_02005bc4(arg0);
    func_020061bc(arg0);
}
