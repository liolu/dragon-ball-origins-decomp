#include "m2c.h"

M2C_UNK func_02097278(M2C_UNK *, void *, s32, s32, s32, s32, s32); /* extern */
s32 func_0209b964();                                /* extern */
extern M2C_UNK data_0215dbb8;

void func_02097b14(void *arg0) {
    func_02097278(&data_0215dbb8, arg0 + 0x28, func_0209b964(), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8),
                  M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
}
