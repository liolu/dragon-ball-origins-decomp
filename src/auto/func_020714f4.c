#include "m2c.h"

M2C_UNK func_020716a4();                            /* extern */
M2C_UNK func_0207310c(void *);                      /* extern */
M2C_UNK func_0207b890(void *);                      /* extern */
M2C_UNK func_0208193c(void *);                      /* extern */
M2C_UNK func_02083514(void *);                      /* extern */

void func_020714f4(void *arg0, s32 arg1, u32 arg2) {
    void *var_r0;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_4;

    func_020716a4();
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg1 & ~0xF0000000) | (arg2 << 0x1C));
    switch (arg2) {
        default:
            break;
        case 0:
            if (((u32) (M2C_FIELD(arg0, s32 *, 4) & 0xF0000000) >> 0x1C) == 0) {
                var_r0 = arg0;
            } else {
                var_r0 = NULL;
            }
            func_0207310c(var_r0);
            break;
        case 1:
            if (((u32) (M2C_FIELD(arg0, s32 *, 4) & 0xF0000000) >> 0x1C) == 1) {
                var_r0_2 = arg0;
            } else {
                var_r0_2 = NULL;
            }
            func_0207b890(var_r0_2);
            break;
        case 2:
            if (((u32) (M2C_FIELD(arg0, s32 *, 4) & 0xF0000000) >> 0x1C) == 2) {
                var_r0_3 = arg0;
            } else {
                var_r0_3 = NULL;
            }
            func_0208193c(var_r0_3);
            break;
        case 3:
            if (((u32) (M2C_FIELD(arg0, s32 *, 4) & 0xF0000000) >> 0x1C) == 3) {
                var_r0_4 = arg0;
            } else {
                var_r0_4 = NULL;
            }
            func_02083514(var_r0_4);
            break;
    }
    M2C_FIELD(arg0, s8 *, 0x3FE) = 2;
}
