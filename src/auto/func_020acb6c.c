#include "m2c.h"

M2C_UNK func_020ac694();                     /* extern */
M2C_UNK func_020ac6a4();                     /* extern */
M2C_UNK func_020ac6e4();                            /* extern */
s32 func_020acbc4();                         /* extern */

s32 func_020acb6c(void) {
    s32 temp_r0;

    func_020ac6e4();
    func_020ac694(3);
    temp_r0 = func_020acbc4(1);
    if (temp_r0 == 0x18) {
        func_020ac6a4(0x18);
        func_020ac694(9);
        return 0;
    }
    if (temp_r0 == 2) {
        return 1;
    }
    func_020ac6a4();
    func_020ac694(9);
    return 0;
}
