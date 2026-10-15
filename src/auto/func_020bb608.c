#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ba034(void);
void func_020ba048(M2C_UNK);

extern M2C_UNK data_0216d260;

s32 func_020bb608(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020ba034();
    var_r4  = 0;
    var_r1  = M2C_FIELD(&data_0216d260, M2C_UNK **, 8);
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_020ba048(temp_r0);
    return var_r4;
}
