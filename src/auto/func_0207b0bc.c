#include "m2c.h"

M2C_UNK func_02072f5c();                            /* extern */
M2C_UNK func_0207b120(M2C_UNK, void *);             /* extern */
M2C_UNK func_0207b200(M2C_UNK, void *);             /* extern */
M2C_UNK func_0207b244(M2C_UNK, void *);             /* extern */

void func_0207b0bc(M2C_UNK arg0, void *arg1) {
    s32 temp_r2;
    void *var_r1;

    temp_r2 = M2C_FIELD(arg1, s32 *, 0);
    switch (temp_r2) {                              /* irregular */
        case 2:
            func_0207b120(arg0, M2C_FIELD(arg1, void **, 4));
            return;
        case 3:
            var_r1 = M2C_FIELD(arg1, void **, 4);
            if (((u32) (M2C_FIELD(var_r1, s32 *, 4) & 0xF0000000) >> 0x1C) != 1) {
                var_r1 = NULL;
            }
            func_0207b200(arg0, var_r1);
            return;
        case 8:
            func_0207b244(arg0, M2C_FIELD(arg1, void **, 4));
            return;
        default:
            func_02072f5c();
            return;
    }
}
