#include "m2c.h"

M2C_UNK func_020b8e8c(void *);                      /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */

void func_020bc0a8(void *arg0, s32 arg1) {
    s32 temp_r6;
    void **temp_r0;
    void *temp_r1;

    temp_r6 = func_020ba034();
    temp_r1 = M2C_FIELD(arg0, void **, 0);
    temp_r0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void ***, 4) = temp_r0;
    }
    if (temp_r0 != NULL) {
        *temp_r0 = temp_r1;
    }
    M2C_FIELD(arg0, void **, 0)  = NULL;
    M2C_FIELD(arg0, void ***, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0x4F);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    func_020b8e8c(arg0 + 0x18);
    func_020ba048(temp_r6);
}
