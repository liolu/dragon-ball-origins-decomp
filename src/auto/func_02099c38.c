#include "m2c.h"

s32 func_02099ba8();                                /* extern */
M2C_UNK func_02099bb4(s32);                         /* extern */
s32 func_02099c28();                                /* extern */

s32 func_02099c38(void) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02099ba8();
    temp_r4 = func_02099c28();
    func_02099bb4(temp_r5);
    return temp_r4;
}
