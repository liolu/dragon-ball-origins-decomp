#include "m2c.h"

M2C_UNK func_02035c34(M2C_UNK, s32, s32);           /* extern */
extern void *data_0213dff0;

void func_020365c8(M2C_UNK arg0) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_02035c34(arg0, var_r6, M2C_FIELD(data_0213dff0, s32 *, 0x7B4) & (1 << var_r6));
        var_r6 += 1;
    } while (var_r6 < 4);
}
