#include "m2c.h"

M2C_UNK func_0204b244(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_0204b33c(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_021267b0;
extern M2C_UNK data_02137b18;
extern M2C_UNK data_0215f2fc;

void func_02023828(void *arg0) {
    if (M2C_FIELD(&data_0215f2fc, s32 *, 0x30) == 0) {
        return;
    }
    func_0204b244(&data_021267b0, 0,
                  M2C_FIELD(&data_02137b18, s32 *, 0x14) + M2C_FIELD(M2C_FIELD(&data_02137b18, void **, 0x10), u16 *, 0x272));
    func_0204b33c(&data_021267b0, arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 8)   = 2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
