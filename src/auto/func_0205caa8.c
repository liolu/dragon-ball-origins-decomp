#include "m2c.h"

s32 func_0202c83c(s32);                             /* extern */
M2C_UNK func_020b4fb0(M2C_UNK *, s32, M2C_UNK *);   /* extern */
s32 func_020b4fe4(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_020e36a4;
extern M2C_UNK data_020e36d4;
extern M2C_UNK data_020e3704;

void func_0205caa8(void *arg0) {
    u8 sp18[12];
    u8 spC[12];
    u8 sp0[12];
    s32 var_r4;
    s32 var_r5;

    func_020b4fb0(&data_020e36a4, func_0202c83c(M2C_FIELD(arg0, s32 *, 0x20)), sp18);
    var_r4 = 0;
    var_r5 = func_020b4fe4(sp18, sp18);
    func_020b4fb0(&data_020e36d4, func_0202c83c(M2C_FIELD(arg0, s32 *, 0x20)), spC);
    if (func_020b4fe4(spC, spC) < var_r5) {
        var_r4 = 4;
        var_r5 = func_020b4fe4(spC, spC);
    }
    func_020b4fb0(&data_020e3704, func_0202c83c(M2C_FIELD(arg0, s32 *, 0x20)), sp0);
    if (func_020b4fe4(sp0, sp0) < var_r5) {
        var_r4 = 8;
    }
    M2C_FIELD(arg0, s32 *, 0x1C8) = var_r4;
}
