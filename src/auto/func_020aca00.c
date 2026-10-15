#include "m2c.h"

s32 func_020aca38();                                /* extern */
M2C_UNK func_020ad138();                            /* extern */
s32 func_020c2c60(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02166ea0;

s32 func_020aca00(void) {
    if (func_020c2c60(&data_02166ea0) != 0) {
        return 0;
    }
    if (func_020aca38() != 0) {
        return 1;
    }
    func_020ad138();
    return 0;
}
