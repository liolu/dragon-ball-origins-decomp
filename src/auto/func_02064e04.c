#include "m2c.h"

M2C_UNK func_0209e664();                            /* extern */
M2C_UNK func_0209e680(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020ba734(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0214768c;

void func_02064e04(void) {
    func_0209e664();
    func_020ba734(0, 0x06800000, 0xA4000);
    func_020ba734(0xC0, 0x07000000, 0x400);
    func_0209e680(M2C_FIELD(&data_0214768c, s32 *, 0x84), M2C_FIELD(&data_0214768c, s32 *, 0x88), 0);
}
