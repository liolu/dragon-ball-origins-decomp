#include "m2c.h"

s32 func_020c2e04();                                /* extern */
s32 func_020c2e1c();                                /* extern */

s32 func_020c2ddc(void) {
    if ((func_020c2e1c() != 0) && (func_020c2e04() == 0)) {
        return 1;
    }
    return 0;
}
