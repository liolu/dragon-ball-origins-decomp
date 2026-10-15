#include "m2c.h"

extern M2C_UNK data_0215f2fc;

void func_02003c98(void *arg0, s32 arg1) {
    u32 temp_r1;
    u32 temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0xC8) == 0) {
        temp_r2 = M2C_FIELD(arg0, u32 *, 0xC0);
        if ((temp_r2 != 0xC) && (temp_r2 != 0xD) && (temp_r2 != 0xE) && (temp_r2 != 0xF) && (temp_r2 != 0x10) &&
            (temp_r2 != 0x1F) && (temp_r2 != 0x20) && (temp_r2 != 0x21) && (temp_r2 != 0x22) && (temp_r2 != 0x23)) {
            M2C_FIELD(arg0, s32 *, 0xC8) =
                (s32) (M2C_FIELD(&data_0215f2fc, s32 *, 0x30) | (M2C_FIELD(&data_0215f2fc, u16 *, 6) & 9));
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        temp_r1 = M2C_FIELD(arg0, u32 *, 0xC0);
        switch (temp_r1) {
            default:
                break;
            case 0:
            case 1:
            case 2:
                M2C_FIELD(arg0, u32 *, 0xC0) = 3U;
                break;
            case 3:
            case 4:
                M2C_FIELD(arg0, u32 *, 0xC0) = 5U;
                break;
            case 5:
            case 6:
            case 7:
                M2C_FIELD(arg0, u32 *, 0xC0) = 8U;
                break;
            case 8:
            case 9:
            case 10:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0xBU;
                break;
            case 17:
            case 18:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0x13U;
                break;
            case 19:
            case 20:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0x15U;
                break;
            case 21:
            case 22:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0x17U;
                break;
            case 23:
            case 24:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0x19U;
                break;
            case 25:
            case 26:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0x1BU;
                break;
            case 27:
            case 28:
            case 29:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0x1EU;
                break;
            case 36:
            case 37:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0x26U;
                break;
            case 38:
            case 39:
            case 40:
                M2C_FIELD(arg0, u32 *, 0xC0) = 0x1EU;
                break;
        }
        M2C_FIELD(arg0, s32 *, 0xC4) = 0;
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC4) <= arg1) {
        return;
    }
    M2C_FIELD(arg0, u32 *, 0xC0) = (u32) (M2C_FIELD(arg0, u32 *, 0xC0) + 1);
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
}
