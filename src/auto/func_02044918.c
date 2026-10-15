#include "m2c.h"

M2C_UNK func_020ba734(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_02124f8c;
extern M2C_UNK data_02125054;

void func_02044918(void) {
    if (M2C_FIELD(&data_02124f8c, s32 *, 0xC8) == 0) {
        return;
    }
    func_020ba734(0, &data_02125054, 0x30);
}
