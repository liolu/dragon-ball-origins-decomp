/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK func_020015f4();                            /* extern */
M2C_UNK func_020ba6f0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020c644c(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_02093bc8;
extern M2C_UNK func_02093bcc;
extern M2C_UNK func_02093bd0;
extern M2C_UNK func_02093bd4;

s32 func_02093b1c(s32 arg0) {
    void *var_r2;

    func_020015f4();
    var_r2 = arg0 + 0x20;
    do {
        M2C_FIELD(var_r2, s32 *, 0x84) = 0;
        M2C_FIELD(var_r2, s32 *, 0x88) = 0;
        var_r2 += 0x1D4;
    } while ((u32) var_r2 < (u32) (arg0 + 0x59C));
    func_020c644c(arg0 + 0x600, 3, 0x20, &func_02093bc8, &func_02093bcc);
    func_020c644c(arg0 + 0x660, 3, 0xC, &func_02093bd0, &func_02093bd4);
    func_020ba6f0(0, arg0 + 0x688, 4);
    func_020ba6f0(0, arg0 + 0x6B0, 4);
    return arg0;
}
