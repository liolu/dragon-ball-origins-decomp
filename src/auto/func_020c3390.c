#include "m2c.h"

M2C_UNK func_020ba2b8();                            /* extern */
M2C_UNK func_020c33ec();                            /* extern */
extern M2C_UNK data_02170360;

void func_020c3390(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (M2C_FIELD(&data_02170360, s32 *, 0xC) != 0) {
            return;
        }
        var_r0 = 0;
        if (M2C_FIELD(&data_02170360, s32(**)(), 0x18) != NULL) {
            var_r0 = M2C_FIELD(&data_02170360, s32(**)(), 0x18)();
        }
        if (var_r0 != 0) {
            func_020c33ec();
        }
        M2C_FIELD(&data_02170360, s32 *, 0xC) = 1;
        return;
    }
    func_020ba2b8();
}
