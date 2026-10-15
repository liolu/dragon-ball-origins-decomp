#include "m2c.h"

M2C_UNK func_0202c7b4(s32, s32);                    /* extern */
s32 func_02047c7c();                                /* extern */
void *func_02048b30(s32);                           /* extern */
M2C_UNK func_02048b80(s32);                         /* extern */
M2C_UNK func_02048bc4();                            /* extern */

void func_02048ad0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    if ((arg3 == 0) || (func_02047c7c() != 0)) {
        func_0202c7b4(arg1, arg2);
        func_02048b80(arg1);
        return;
    }
    temp_r0                        = func_02048b30(arg1);
    M2C_FIELD(temp_r0, s32 *, 0)   = arg0;
    M2C_FIELD(temp_r0, s32 *, 4)   = arg1;
    M2C_FIELD(temp_r0, s32 *, 8)   = arg2;
    M2C_FIELD(temp_r0, s32 *, 0xC) = (s32) (arg3 + 1);
    func_02048bc4();
}
