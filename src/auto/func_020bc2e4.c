/* Reconstructed from USA ARM9 at 0x020d168c (192 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

M2C_UNK func_020b8e3c(void *);                      /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */

s32 func_020bc2e4(void *arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r4;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    temp_r4                         = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x1C) | 0x200);
    var_r0 = M2C_FIELD(temp_r4, s32(**)(void *, M2C_UNK, s32, s32), 0x50)(temp_r4, arg1, M2C_FIELD(arg0, s32 *, 4), arg2);
    switch (var_r0) {
        case 0:
        case 1:
            M2C_FIELD(temp_r4, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x1C) & ~0x200);
            break;
        case 6:
            temp_r5 = func_020ba034();
            if (M2C_FIELD(temp_r4, s32 *, 0x1C) & 0x200) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            if (var_r0_2 != 0) {
                do {
                    func_020b8e3c(temp_r4 + 0xC);
                    if (M2C_FIELD(temp_r4, s32 *, 0x1C) & 0x200) {
                        var_r0_3 = 1;
                    } else {
                        var_r0_3 = 0;
                    }
                } while (var_r0_3 != 0);
            }
            func_020ba048(temp_r5);
            var_r0 = M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x24), s32 *, 0x14);
            break;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg2);
    return var_r0;
}
