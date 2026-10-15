#include "m2c.h"

void *func_0200f700(void *arg0, void *arg1) {
    s16 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r3;

    temp_r2 = M2C_FIELD(arg1, s16 *, 0xA);
    var_r3  = 0;
    switch (temp_r2) {
        default:
            break;
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x6D8) & 4) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                var_r3 = 1;
            }
            break;
        case 1:
            if (M2C_FIELD(arg0, s32 *, 0x6D8) & 8) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            if (var_r0_2 != 0) {
                var_r3 = 1;
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, s32 *, 0x6D8) & 0x10) {
                var_r0_3 = 1;
            } else {
                var_r0_3 = 0;
            }
            if (var_r0_3 != 0) {
                var_r3 = 1;
            }
            break;
        case 3:
            if (M2C_FIELD(arg0, s32 *, 0x6D8) & 0x20) {
                var_r0_4 = 1;
            } else {
                var_r0_4 = 0;
            }
            if (var_r0_4 != 0) {
                var_r3 = 1;
            }
            break;
        case 4:
            if (M2C_FIELD(arg0, s32 *, 0x6DC) & 0x40) {
                var_r0_5 = 1;
            } else {
                var_r0_5 = 0;
            }
            if (var_r0_5 != 0) {
                var_r3 = 1;
            }
            break;
        case 5:
            if (M2C_FIELD(arg0, s32 *, 0x6D8) & 0x01000000) {
                var_r0_6 = 1;
            } else {
                var_r0_6 = 0;
            }
            if (var_r0_6 != 0) {
                var_r3 = 1;
            }
            break;
        case 6:
            if (M2C_FIELD(arg0, s32 *, 0x6DC) & 0x100) {
                var_r0_7 = 1;
            } else {
                var_r0_7 = 0;
            }
            if (var_r0_7 != 0) {
                var_r3 = 1;
            }
            break;
    }
    if (M2C_FIELD(arg1, s16 *, 8) != 0) {
        var_r3 ^= 1;
    }
    if (var_r3 == 1) {
        return arg1 + 0xC;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
