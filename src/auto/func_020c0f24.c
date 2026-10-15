#include "m2c.h"

s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
M2C_UNK func_020bbe98(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020c1130();                                /* extern */
s32 func_020c1194(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c15d4();                            /* extern */
extern M2C_UNK data_0216f8a0;

s32 func_020c0f24(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_020ba034();
    if (func_020c1130() != 0) {
        func_020ba048(temp_r4);
        return 3;
    }
    temp_r0 = func_020c1194(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020c15d4();
    func_020bbe98(0xA, 0);
    M2C_FIELD(&data_0216f8a0, s32 *, 4) = 0;
    M2C_FIELD(&data_0216f8a0, s16 *, 0) = 0;
    func_020ba048(temp_r4);
    return 0;
}
