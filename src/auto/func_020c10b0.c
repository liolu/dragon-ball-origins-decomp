#include "m2c.h"

M2C_UNK func_020b920c(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_020b9620(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ba8dc(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_020bbf08(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_020c0fac();                                /* extern */
extern M2C_UNK data_0216f8a8;

s32 func_020c10b0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_020c0fac();
    if (temp_r0 == 0) {
        return 8;
    }
    func_020ba8dc(arg0, temp_r0, arg1);
    func_020b9620(temp_r0, arg1);
    temp_r4 = func_020bbf08(0xA, temp_r0, 0);
    func_020b920c(&data_0216f8a8, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
