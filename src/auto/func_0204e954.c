#include "m2c.h"

s32 func_0204ecfc();                                /* extern */
extern M2C_UNK data_02136d6c;

s32 func_0204e954(s32 arg0) {
    if (func_0204ecfc() != 0) {
        return *((M2C_UNK *) ((s8 *) &data_02136d6c + (arg0 * 4)));
    }
    return 0;
}
