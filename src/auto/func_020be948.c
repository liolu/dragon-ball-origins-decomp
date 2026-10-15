#include "m2c.h"

M2C_UNK func_020ba0a4(s32);                         /* extern */
M2C_UNK func_020be6ac(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020be920(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020bea48(s32 *, s32 *);                /* extern */
s32 func_020bee08(M2C_UNK);                         /* extern */
s32 func_020bee28();                                /* extern */

void func_020be948(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_020ba0a4(0x996A00);
    if (func_020bee28() != 1) {
        func_020bea48(&sp4, &sp0);
        if (sp4 != 0) {
            func_020be920(0, 0);
        }
        if (sp0 != 0) {
            func_020be920(1, 0);
        }
        if (func_020bee08(1) == 0) {
            do {
                func_020ba0a4(0x996A00);
            } while (func_020bee08(1) == 0);
        }
    }
    func_020be6ac(0xE, arg0, arg1);
}
