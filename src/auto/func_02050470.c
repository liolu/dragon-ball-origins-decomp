#include "m2c.h"

M2C_UNK func_020256c0(M2C_UNK *, M2C_UNK, void **); /* extern */
extern M2C_UNK data_020f6268;

void func_02050470(void ***arg0, s32 arg1) {
    void **temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x170)(temp_r0);
    if (arg1 == 0) {
        *arg0 = NULL;
        return;
    }
    func_020256c0(&data_020f6268, 3, *arg0);
}
