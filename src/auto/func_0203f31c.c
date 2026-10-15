#include "m2c.h"

s32 func_0203f388(void *, s32);                     /* extern */
M2C_UNK func_02040154(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK data_020ce25c;
extern M2C_UNK data_02123784;

void func_0203f31c(void *arg0, s32 arg1) {
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0xC);
    func_02040154(&data_02123784, func_0203f388(arg0, temp_r6),
                  arg1 + (*((M2C_UNK *) ((s8 *) &data_020ce25c + (temp_r6 * 4))) + (M2C_FIELD(arg0, s32 *, 8) * 3)));
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}
