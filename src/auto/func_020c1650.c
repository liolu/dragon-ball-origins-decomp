#include "m2c.h"

s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
void *func_020c1120();                              /* extern */
s32 func_020c1130();                                /* extern */

s32 func_020c1650(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020ba034();
    temp_r0 = func_020c1130();
    if (temp_r0 != 0) {
        func_020ba048(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020c1120(), s32 *, 0xC8) = arg0;
    func_020ba048(temp_r5);
    return 0;
}
