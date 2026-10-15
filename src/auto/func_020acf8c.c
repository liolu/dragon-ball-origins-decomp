#include "m2c.h"

s32 func_020ac674();                                /* extern */
M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c1f34(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
extern M2C_UNK data_021662c0;
extern M2C_UNK data_021663c0;
extern M2C_UNK data_021676d0;
extern M2C_UNK func_020adb24;

s32 func_020acf8c(void) {
    u16 var_r0;

    if ((func_020ac674() == 4) || (func_020ac674() == 6) || (func_020ac674() == 5)) {
        return 1;
    }
    func_020ac694(3);
    if (M2C_FIELD(&data_021662c0, s32 *, 0xC) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (func_020c1f34(&func_020adb24, &data_021663c0, &data_021676d0, 1, (s32) var_r0) == 2) {
        return 1;
    }
    func_020ac6a4();
    return 0;
}
