#include "m2c.h"

M2C_UNK func_02001684(void *, s32);                 /* extern */
M2C_UNK func_020016f4();                            /* extern */
s32 func_02099c38(M2C_UNK);                         /* extern */
M2C_UNK func_02099c5c(M2C_UNK, void *, s32);        /* extern */

void func_0204fa4c(void *arg0, M2C_UNK arg1) {
    void *temp_r1;
    void *temp_r5;

    func_020016f4();
    M2C_FIELD(arg0, s32 *, 0xC)    = -1;
    M2C_FIELD(arg0, void **, 0x10) = NULL;
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    func_02001684(arg0, func_02099c38(arg1));
    temp_r5 = M2C_FIELD(arg0, void **, 4);
    func_02099c5c(arg1, temp_r5, M2C_FIELD(arg0, s32 *, 8));
    if (M2C_FIELD(temp_r5, s32 *, 0) != 0x54534244) {
        return;
    }
    temp_r1                        = temp_r5 + 6;
    M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(temp_r5, u16 *, 4);
    M2C_FIELD(arg0, void **, 0x10) = temp_r1;
    M2C_FIELD(arg0, void **, 0x14) = (void *) (temp_r1 + (M2C_FIELD(arg0, s32 *, 0xC) * 2));
}
