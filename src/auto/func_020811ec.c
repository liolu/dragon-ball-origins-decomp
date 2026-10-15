#include "m2c.h"

M2C_UNK func_02072f5c();                            /* extern */
M2C_UNK func_0208123c(M2C_UNK, s32);                /* extern */
M2C_UNK func_020812fc(M2C_UNK, s32);                /* extern */
M2C_UNK func_0208132c(M2C_UNK, s32);                /* extern */

void func_020811ec(M2C_UNK arg0, void *arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg1, s32 *, 0);
    switch (temp_r2) {                              /* irregular */
        case 2:
            func_0208123c(arg0, M2C_FIELD(arg1, s32 *, 4));
            return;
        case 5:
            func_020812fc(arg0, M2C_FIELD(arg1, s32 *, 4));
            return;
        case 19:
            func_0208132c(arg0, M2C_FIELD(arg1, s32 *, 4));
            return;
        default:
            func_02072f5c();
            return;
    }
}
