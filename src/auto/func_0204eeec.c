#include "m2c.h"

M2C_UNK func_0204ef54();                            /* extern */
s32 func_02099ba8(M2C_UNK *);                       /* extern */
M2C_UNK func_02099bb4(s32);                         /* extern */
M2C_UNK func_02099c0c(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02099c5c(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK data_020e0158;
extern M2C_UNK data_020e0174;
extern M2C_UNK data_02136b44;
extern M2C_UNK data_02136ea4;

void func_0204eeec(void) {
    M2C_UNK sp0;
    s32 temp_r0;

    temp_r0 = func_02099ba8(&data_020e0158);
    func_02099c0c(temp_r0, &sp0, 4);
    func_02099c0c(temp_r0, &data_02136b44, 0x9C);
    func_02099bb4(temp_r0);
    func_02099c5c(&data_020e0174, &data_02136ea4, 0xC68);
    func_0204ef54();
}
