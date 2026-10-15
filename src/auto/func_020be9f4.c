#include "m2c.h"

M2C_UNK func_020be424();                            /* extern */
s32 func_020be948(M2C_UNK *, s32 *);                /* extern */
extern M2C_UNK func_020be464;

s32 func_020be9f4(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020be948(&func_020be464, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020be424();
    return sp0;
}
