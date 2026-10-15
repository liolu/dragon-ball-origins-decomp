#include "m2c.h"

s32 func_020aca60();                                /* extern */
M2C_UNK func_020ad138();                            /* extern */

void func_020ad544(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020ad138();
        return;
    }
    if (func_020aca60() != 0) {
        return;
    }
    func_020ad138();
}
