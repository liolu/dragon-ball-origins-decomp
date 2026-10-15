#include "m2c.h"

M2C_UNK func_0209b868(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209b87c(void *, s32, s32);            /* extern */
extern M2C_UNK data_020cdd4c;
extern M2C_UNK data_020cdd70;

s32 func_0203bfc4(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r5;
    void *var_r6;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x9A0);
    if (temp_r0 >= 0xC) {
        M2C_FIELD(arg0, s32 *, 0x9A0) = -1;
        return 1;
    }
    if (temp_r0 >= 0) {
        var_r6 = arg0 + 0x920;
        var_r5 = 0;
        do {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9A0) - var_r5;
            if ((temp_r0_2 >= 0) && (temp_r0_2 < 9)) {
                func_0209b87c(var_r6, M2C_FIELD(arg0, s32 *, 0x998) + *((M2C_UNK *) ((s8 *) &data_020cdd70 + (temp_r0_2 * 4))),
                              M2C_FIELD(arg0, s32 *, 0x99C) + *((M2C_UNK *) ((s8 *) &data_020cdd4c + (temp_r0_2 * 4))));
            } else {
                func_0209b868(var_r6, 0xC0);
            }
            var_r5 += 1;
            var_r6 += 0x28;
        } while (var_r5 < 3);
        M2C_FIELD(arg0, s32 *, 0x9A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x9A0) + 1);
        return 1;
    }
    return 0;
}
