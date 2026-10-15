#include "m2c.h"

M2C_UNK func_020b87e4(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_02137b18;

s32 func_020974b0(void *arg0, M2C_UNK arg1) {
    func_020b87e4(M2C_FIELD(arg0, s32 *, 0xDF8),
                  M2C_FIELD(&data_02137b18, s32 *, 0x14) + M2C_FIELD(M2C_FIELD(&data_02137b18, void **, 0x10), u16 *, 0x3AC),
                  arg1);
    return M2C_FIELD(arg0, s32 *, 0xDF8);
}
