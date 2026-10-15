#include "m2c.h"

M2C_UNK func_020976f0();                            /* extern */
M2C_UNK func_0209b854(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209b87c(s32, s32, s32);               /* extern */
extern M2C_UNK data_020cffa0;
extern M2C_UNK data_020cffc4;
extern M2C_UNK data_0215dbb8;
extern M2C_UNK data_0215f218;

void func_020992d4(void *arg0) {
    s32 temp_r2;
    s32 var_r6;
    s32 var_r7;

    if ((s32) M2C_FIELD(arg0, s16 *, 0x10) >= 0xC) {
        M2C_FIELD(arg0, s16 *, 0x10)                 = 0;
        M2C_FIELD(&data_0215dbb8, M2C_UNK **, 0xDE0) = &data_0215f218;
        func_020976f0();
    }
    if ((s32) M2C_FIELD(arg0, s16 *, 0x10) < 0) {
        return;
    }
    var_r6 = 0;
    var_r7 = 0;
    do {
        temp_r2 = M2C_FIELD(arg0, s16 *, 0x10) - var_r6;
        if ((temp_r2 >= 0) && (temp_r2 < 9)) {
            func_0209b87c(M2C_FIELD(arg0, s32 *, 4) + var_r7,
                          M2C_FIELD(arg0, s32 *, 8) + *((M2C_UNK *) ((s8 *) &data_020cffa0 + (temp_r2 * 4))),
                          M2C_FIELD(arg0, s32 *, 0xC) + *((M2C_UNK *) ((s8 *) &data_020cffc4 + (temp_r2 * 4))));
        } else {
            func_0209b854(M2C_FIELD(arg0, s32 *, 4) + var_r7, 0x100);
        }
        var_r6 += 1;
        var_r7 += 0x28;
    } while (var_r6 < 3);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0x10) + 1);
}
