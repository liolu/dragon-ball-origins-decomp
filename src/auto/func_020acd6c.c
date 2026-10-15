#include "m2c.h"

s32 func_020ac674();                                /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c1d54(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020e7908;
extern M2C_UNK func_020ad884;

s32 func_020acd6c(void) {
    if ((func_020ac674() == 4) || (func_020ac674() == 6) || (func_020ac674() == 5)) {
        return 1;
    }
    if (func_020c1d54(&func_020ad884) != 2) {
        func_020ac6a4();
        return 0;
    }
    M2C_FIELD(&data_020e7908, s16 *, 2) = 0;
    M2C_FIELD(&data_020e7908, s16 *, 0) = 1;
    return 1;
}
