#include "m2c.h"

M2C_UNK func_0209b868(s32, s32);                    /* extern */
M2C_UNK func_0209bf38(s32, s32);                    /* extern */
extern M2C_UNK data_02136e68;

void func_0204149c(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = arg0 + 0x58;
    temp_r4 = (arg1 + 0xC) * 0x30;
    func_0209bf38(temp_r5 + temp_r4, ((*((M2C_UNK *) ((s8 *) &data_02136e68 + (arg1 * 4))) + 0x13) * 0x30) + temp_r5);
    func_0209b868(temp_r5 + temp_r4, (arg1 + 1) * 0x18);
}
