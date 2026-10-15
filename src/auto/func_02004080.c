#include "m2c.h"

M2C_UNK func_02004130(M2C_UNK *);                   /* extern */
M2C_UNK func_0209de5c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209fb54(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020b5864(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020f1844;
extern M2C_UNK data_02160404;

void func_02004080(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020b5864(0x0400106C, 0);
            func_020b5864(0x0400006C, 0);
            return;
        case 1:
            func_0209de5c(&data_02160404, 0, 0);
            return;
        case 2:
            func_020b5864(0x0400106C, -0x10);
            func_020b5864(0x0400006C, -0x10);
            func_0209fb54(arg0, &data_020f1844);
            func_02004130(&data_020f1844);
            return;
    }
}
