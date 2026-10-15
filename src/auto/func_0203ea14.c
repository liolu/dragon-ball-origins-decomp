#include "m2c.h"

M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204b244(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_0204b2fc(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_021267b0;
extern M2C_UNK data_02137b18;

void func_0203ea14(void *arg0) {
    func_02001c08(0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0xDA0) = 4;
    func_0204b244(&data_021267b0, 1,
                  M2C_FIELD(&data_02137b18, s32 *, 0x14) + M2C_FIELD(M2C_FIELD(&data_02137b18, void **, 0x10), u16 *, 0x26E));
    func_0204b2fc(&data_021267b0, arg0 + 0xC58);
}
