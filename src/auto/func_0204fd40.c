/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0204ffc8(u32);                         /* extern */
extern M2C_UNK data_02137b30;
extern M2C_UNK data_02137c00;
extern M2C_UNK data_0213b2b4;

void func_0204fd40(s32 arg0) {
    s32 temp_r3;
    s32 var_r1;
    u32 var_r8;
    u8 temp_r0;
    u8 temp_r5;

    var_r8  = 0;
    temp_r5 = ((s8 *) &data_0213b2b4)[arg0];
    temp_r3 = *((M2C_UNK *) ((s8 *) &data_02137c00 + (temp_r5 * 4)));
    M2C_FIELD(&data_02137b30, s32 *, 4) =
        (s32) (M2C_FIELD(&data_02137b30, s32 *, 4) + (M2C_FIELD(&data_02137b30, s32 *, 0x10) - temp_r3));
    M2C_FIELD(&data_02137b30, s32 *, 0x10) = temp_r3;
    do {
        temp_r0 = ((s8 *) &data_0213b2b4)[var_r8];
        if ((u32) temp_r0 < 0x21U) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        if ((var_r1 != 0) && ((u32) temp_r0 >= (u32) temp_r5)) {
            func_0204ffc8(var_r8);
        }
        var_r8 += 1;
    } while (var_r8 < 0x9EU);
}
