#include "m2c.h"

s32 func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0208d040(M2C_UNK *);                   /* extern */
M2C_UNK func_020bead0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0215acb0;

s32 func_020014a8(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    func_0208d040(&data_0215acb0);
    func_020bead0(0xC, 0x8000, 9);
    return func_02001c08(0, 0x1C, 0);
}
