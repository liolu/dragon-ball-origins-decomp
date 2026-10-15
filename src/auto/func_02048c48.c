#include "m2c.h"

M2C_UNK func_0202c6a4(s32, void *);                 /* extern */
s32 func_02047c7c();                                /* extern */
void *func_02048cbc(s32);                           /* extern */
M2C_UNK func_02048d0c(s32);                         /* extern */
M2C_UNK func_02048d5c();                            /* extern */

void func_02048c48(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    void *temp_r0;

    if ((arg3 == 0) || (func_02047c7c() != 0)) {
        func_0202c6a4(arg1, arg2);
        func_02048d0c(arg1);
        return;
    }
    temp_r0                         = func_02048cbc(arg1);
    M2C_FIELD(temp_r0, s32 *, 0)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 4)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 8)    = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0xC)  = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x14) = (s32) (arg3 + 1);
    func_02048d5c();
}
