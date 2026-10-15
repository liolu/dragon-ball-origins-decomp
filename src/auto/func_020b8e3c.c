#include "m2c.h"

M2C_UNK func_020b8848(s32, void *);                 /* extern */
M2C_UNK func_020b8a20();                            /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
extern M2C_UNK data_0216cea0;

void func_020b8e3c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_020ba034();
    temp_r5 = *M2C_FIELD(&data_0216cea0, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_020b8848(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_020b8a20();
    func_020ba048(temp_r4);
}
