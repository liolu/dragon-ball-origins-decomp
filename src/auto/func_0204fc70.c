/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0204ffc8(u32);                         /* extern */
M2C_UNK func_020501e8();                            /* extern */
M2C_UNK func_0205020c();                            /* extern */
M2C_UNK func_02050230();                            /* extern */
extern M2C_UNK data_02137b30;
extern M2C_UNK data_0213b2b4;

void func_0204fc70(void) {
    s32 var_r0;
    u32 var_r7;

    var_r7 = 0;
    do {
        if ((u32) ((u8 *) &data_0213b2b4)[var_r7] < 0x21U) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            func_0204ffc8(var_r7);
        }
        var_r7 += 1;
    } while (var_r7 < 0x9EU);
    func_020501e8();
    func_0205020c();
    func_02050230();
    M2C_FIELD(&data_02137b30, s32 *, 0)    = 0;
    M2C_FIELD(&data_02137b30, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02137b30, s32 *, 4)    = 0;
}
