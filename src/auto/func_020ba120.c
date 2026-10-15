#include "m2c.h"

M2C_UNK func_020ba2b8();                            /* extern */
extern s16 data_0216d228;

void func_020ba120(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_0216d228 = 1;
        return;
    }
    func_020ba2b8();
}
