#include "m2c.h"

s32 func_020bb5cc();                                /* extern */
s32 func_020bb608();                                /* extern */

s32 func_020bb644(void) {
    s32 temp_r4;

    temp_r4 = func_020bb5cc();
    return (0x100 - temp_r4) - func_020bb608();
}
