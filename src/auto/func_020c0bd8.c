#include "m2c.h"

M2C_UNK func_020ba0a4(s32);                         /* extern */
M2C_UNK func_020ba2b8();                            /* extern */
M2C_UNK func_020ba540(M2C_UNK);                     /* extern */
s32 func_020be9f4();                                /* extern */
M2C_UNK func_020c0cc4(M2C_UNK, M2C_UNK);            /* extern */

void func_020c0bd8(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_020ba540(0);
    func_020ba540(1);
    func_020ba540(2);
    func_020ba540(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_020be9f4();
        if (var_r0 == 4) {
            do {
                func_020ba0a4(0xA3A47);
                var_r0 = func_020be9f4();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_020c0cc4(1, 1);
    }
    func_020ba2b8();
}
