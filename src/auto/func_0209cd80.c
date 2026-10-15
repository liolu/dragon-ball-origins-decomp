#include "m2c.h"

M2C_UNK func_0209bf84(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0209ca50(s32, s32);                    /* extern */
M2C_UNK func_0209cdb4();                            /* extern */

void func_0209cd80(s32 arg0, s32 arg1, M2C_UNK arg2) {
    func_0209cdb4();
    func_0209ca50(arg0, arg1);
    func_0209bf84(arg0 + 0x38, arg1 + 0x38, arg2);
}
