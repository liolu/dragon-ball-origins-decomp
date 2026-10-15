#include "m2c.h"

M2C_UNK func_0202c248(void *, s32);                 /* extern */
s32 func_02047c7c(s32);                             /* extern */
extern M2C_UNK data_021252e4;

void func_02043fe0(void) {
    M2C_UNK *var_r5;
    s32 temp_r0_2;
    u32 var_r6;
    void *temp_r0;

    var_r6 = 0;
    var_r5 = &data_021252e4;
    do {
        if (M2C_FIELD(var_r5, void **, 4) != NULL) {
            if (func_02047c7c(M2C_FIELD(var_r5, s32 *, 0)) != 0) {
                M2C_FIELD(var_r5, s32 *, 0)                           = 0;
                M2C_FIELD(M2C_FIELD(var_r5, void **, 4), s32 *, 0x34) = 0;
                M2C_FIELD(var_r5, void **, 4)                         = NULL;
            } else {
                temp_r0 = M2C_FIELD(var_r5, void **, 4);
                func_0202c248(temp_r0, M2C_FIELD(temp_r0, s32 *, 0x30) + M2C_FIELD(temp_r0, s32 *, 0x34));
                temp_r0_2 = M2C_FIELD(var_r5, s32 *, 8);
                if (temp_r0_2 > 0) {
                    M2C_FIELD(var_r5, s32 *, 8) = (s32) (temp_r0_2 - 1);
                }
                if (M2C_FIELD(var_r5, s32 *, 8) == 0) {
                    if ((s32) M2C_FIELD(var_r5, s32 *, 0x10) <= 0) {
                        M2C_FIELD(var_r5, s32 *, 0)                           = 0;
                        M2C_FIELD(M2C_FIELD(var_r5, void **, 4), s32 *, 0x34) = 0;
                        M2C_FIELD(var_r5, void **, 4)                         = NULL;
                    } else {
                        func_0202c248(M2C_FIELD(var_r5, void **, 4), M2C_FIELD(var_r5, s32 *, 0xC));
                        M2C_FIELD(var_r5, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, 0x10);
                    }
                }
                goto block_10;
            }
        } else {
        block_10:
            var_r5 = (M2C_UNK *) ((s8 *) var_r5 + 0x14);
        }
        var_r6 += 1;
    } while (var_r6 < 0x10U);
}
