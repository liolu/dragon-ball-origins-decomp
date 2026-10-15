#include "m2c.h"

M2C_UNK func_02006f0c();                            /* extern */
M2C_UNK func_0200750c();                            /* extern */
M2C_UNK func_020075e8();                            /* extern */
M2C_UNK func_020075ec(void *);                      /* extern */
M2C_UNK func_02007634(void *);                      /* extern */

void func_02006e64(void *arg0) {
    s32 temp_r0;
    s32 temp_r1_2;
    u32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    temp_r1                     = M2C_FIELD(arg0, u32 *, 8);
    switch (temp_r1) {
        default:
            break;
        case 0:
            temp_r0                      = M2C_FIELD(arg0, s32 *, 0xC) - 0x10;
            M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
            if (temp_r0 >= 0) {
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
                M2C_FIELD(arg0, s32 *, 0xC)  = 0;
                M2C_FIELD(arg0, u32 *, 8)    = 1U;
            }
            break;
        case 1:
            func_02006f0c(arg0);
            break;
        case 2:
            func_0200750c(arg0);
            break;
        case 3:
            func_020075e8(arg0);
            break;
        case 4:
        case 5:
            temp_r1_2                    = 0 - M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(arg0, s32 *, 0x10) = temp_r1_2;
            if (temp_r1_2 <= -0x10) {
                M2C_FIELD(arg0, s32 *, 0x10) = -0x10;
            }
            break;
    }
    func_020075ec(arg0);
    func_02007634(arg0);
}
