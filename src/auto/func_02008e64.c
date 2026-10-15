#include "m2c.h"

M2C_UNK func_020027ac(M2C_UNK);                     /* extern */
M2C_UNK func_02008878(void *);                      /* extern */
M2C_UNK func_020088a8();                            /* extern */
M2C_UNK func_0203fed4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02122e44;
extern M2C_UNK data_02123784;

void func_02008e64(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_r1) {                              /* switch 1; irregular */
        case 1:                                         /* switch 1 */
            if (M2C_FIELD(arg0, s32 *, 0x18) != 3) {
                return;
            }
            func_0203fed4(&data_02123784);
            return;
        case 10:                                        /* switch 1 */
            if (M2C_FIELD(arg0, s32 *, 0x18) != M2C_FIELD(arg0, s32 *, 0x1C)) {
                temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
                if (temp_r2 > -0x10) {
                    temp_r0                      = temp_r2 - 4;
                    M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
                    if (temp_r0 < -0x10) {
                        M2C_FIELD(arg0, s32 *, 0x10) = -0x10;
                    }
                    return;
                }
                func_020088a8(arg0);
                func_020027ac(1);
                temp_r0_2                    = M2C_FIELD(arg0, s32 *, 0x1C);
                M2C_FIELD(arg0, s32 *, 0x18) = temp_r0_2;
                switch (temp_r0_2) {                    /* switch 2; irregular */
                    case 0:                                 /* switch 2 */
                        func_02008878(arg0);
                        return;
                    case 3:                                 /* switch 2 */
                        M2C_FIELD(&data_02122e44, s32 *, 0x928) = 1;
                        return;
                }
            } else {
                temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x10);
                if (temp_r0_3 >= 0) {
                    return;
                }
                temp_r0_4                    = temp_r0_3 + 4;
                M2C_FIELD(arg0, s32 *, 0x10) = temp_r0_4;
                if (temp_r0_4 < 0) {
                    return;
                }
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
                M2C_FIELD(arg0, s32 *, 8)    = 1;
                return;
            }
            break;
    }
}
