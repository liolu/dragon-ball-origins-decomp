#include "m2c.h"

M2C_UNK func_020b6d14(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_020b6d54(M2C_UNK, M2C_UNK);            /* extern */

void func_020b6dec(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020b6d14(arg0, 0x24,
                  (0x3FF & (arg1 >> 6)) | ((u32) ((arg2 >> 6) << 0x16) >> 0xC) | ((u32) ((arg3 >> 6) << 0x16) >> 2));
    func_020b6d54(arg0, 1);
}
