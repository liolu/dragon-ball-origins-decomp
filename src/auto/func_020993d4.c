#include "m2c.h"

M2C_UNK func_0204b1f8(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0204b2fc(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020b87e4(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_021267b0;
extern M2C_UNK data_02137b18;

void func_020993d4(s32 arg0, M2C_UNK arg1) {
    func_020b87e4(arg0 + 0x2C,
                  M2C_FIELD(&data_02137b18, s32 *, 0x14) + M2C_FIELD(M2C_FIELD(&data_02137b18, void **, 0x10), u16 *, 0x3A6),
                  arg1);
    func_0204b1f8(&data_021267b0, 1, 0, arg0 + 0x2C);
    func_0204b2fc(&data_021267b0, arg0 + 4);
}
