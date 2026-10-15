#include "m2c.h"

M2C_UNK func_0202a8f8(M2C_UNK *);                   /* extern */
M2C_UNK func_0202a9b8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0202aa40(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0202aa90(M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020f8a2c;
extern s32 data_027e0000;

void func_020927f4(void) {
    func_0202a8f8(&data_020f8a2c);
    func_0202a9b8(&data_020f8a2c, 0xFFFFF8E4);
    func_0202aa40(&data_020f8a2c, 0xFA00);
    func_0202aa90(&data_020f8a2c, data_027e0000, 0x2580, data_027e0000);
}
