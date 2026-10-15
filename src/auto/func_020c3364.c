#include "m2c.h"

M2C_UNK func_020ba2b8();                            /* extern */
extern s16 data_02170344;

void func_020c3364(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02170344 = 1;
        return;
    }
    func_020ba2b8();
}
