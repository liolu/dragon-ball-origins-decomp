#include "m2c.h"

M2C_UNK func_02043770(s32 *);                       /* extern */
extern s32 data_02124e38;

s32 func_02024e34(void) {
    s32 var_r0;

    if (data_02124e38 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return 0;
    }
    func_02043770(&data_02124e38);
    return 1;
}
