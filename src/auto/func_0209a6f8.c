#include "m2c.h"

M2C_UNK func_0209a9f0(s32, s32, u32, s32);          /* extern */

u32 func_0209a6f8(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r0;
    u32 temp_r2;
    u32 temp_r4;

    temp_r2 = M2C_FIELD(arg0, u32 *, 8);
    temp_r4 = temp_r2 >> (((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 6) + 5);
    if (arg1 != 0) {
        func_0209a9f0(M2C_FIELD(arg0, s32 *, 4), arg1, temp_r2, arg2);
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x10);
    switch (temp_r0) {                              /* irregular */
        case 0x20:
            M2C_FIELD(arg0, u32 *, 8) = (u32) (M2C_FIELD(arg0, u32 *, 8) + ((arg2 + 0x1F) & ~0x1F));
            break;
        case 0x40:
            M2C_FIELD(arg0, u32 *, 8) = (u32) (M2C_FIELD(arg0, u32 *, 8) + ((arg2 + 0x3F) & ~0x3F));
            break;
        case 0x80:
            M2C_FIELD(arg0, u32 *, 8) = (u32) (M2C_FIELD(arg0, u32 *, 8) + ((arg2 + 0x7F) & ~0x7F));
            break;
    }
    return temp_r4;
}
