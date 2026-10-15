#include "m2c.h"

M2C_UNK func_0200da3c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0200ee78(M2C_UNK *, void *, s32, s32); /* extern */
s32 func_0204ce50(s32);                             /* extern */
extern M2C_UNK data_020e3264;

void func_0205b150(void *arg0) {
    M2C_UNK sp0;
    s32 temp_r1;
    s32 var_r2;
    void *temp_r3;

    var_r2                        = 1;
    M2C_FIELD(arg0, s32 *, 0x1D8) = 1;
    temp_r1                       = M2C_FIELD(arg0, s32 *, 0x1C4) + 1;
    M2C_FIELD(arg0, s32 *, 0x1C4) = temp_r1;
    if (temp_r1 < (s32) M2C_FIELD(arg0, s32 *, 0x1C8)) {
        var_r2 = 0;
    }
    if (var_r2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x17C)                           = func_0204ce50(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x1D4)                           = (s32) M2C_FIELD(arg0, s32 *, 0x1D0);
        M2C_FIELD(arg0, s32 *, 0x174)                           = 2;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x5EC) = 0;
        temp_r3                                                 = M2C_FIELD(arg0, void **, 0x20);
        M2C_FIELD(temp_r3, s32 *, 0x5EC)                        = (s32) (M2C_FIELD(temp_r3, s32 *, 0x5EC) | 0x800000);
        func_0200ee78(&sp0, M2C_FIELD(arg0, void **, 0x20), (M2C_FIELD(arg0, s32 *, 0x1D4) * 0xC) + (s32) &data_020e3264,
                      M2C_FIELD(arg0, s32 *, 0x1C));
        return;
    }
    func_0200da3c(M2C_FIELD(arg0, void **, 0x20), 0);
}
