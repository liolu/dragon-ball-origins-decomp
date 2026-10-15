#include "m2c.h"

s32 func_020c1130();                                /* extern */

u16 func_020c189c(void) {
    if (func_020c1130() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
