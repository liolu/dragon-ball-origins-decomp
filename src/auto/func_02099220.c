#include "m2c.h"

M2C_UNK func_0209b358(s32);                         /* extern */
M2C_UNK func_0209bddc(s32);                         /* extern */
M2C_UNK func_0209c960(s32);                         /* extern */
M2C_UNK func_020c64fc(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */

s32 func_02099220(s32 arg0) {
    func_0209bddc(arg0 + 0x88);
    func_0209c960(arg0 + 0x50);
    func_0209b358(arg0 + 0x28);
    func_020c64fc(arg0, 1, 0x28, func_0209b358);
    return arg0;
}
