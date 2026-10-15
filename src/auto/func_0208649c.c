#include "m2c.h"

void *func_0208555c(void *);                        /* extern */
M2C_UNK func_02085568(M2C_UNK *, void *);           /* extern */
s32 func_020b50a4(M2C_UNK *);                       /* extern */
extern s32 data_027e0000;

void func_0208649c(void *arg0, s32 arg1) {
    u8 sp0[12];
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r2;
    s32 var_r5;
    s32 var_r6;

    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_02085568(sp0, arg0);
        temp_r4 = func_020b50a4(sp0);
        var_r5  = 0;
        if ((s32) M2C_FIELD(func_0208555c(arg0), s32 *, 0x8C) <= temp_r4) {
            var_r6 = 1;
            if (((s32) M2C_FIELD(func_0208555c(arg0), s32 *, 0x90) >= (s32) data_027e0000) &&
                (temp_r4 > (s32) M2C_FIELD(func_0208555c(arg0), s32 *, 0x90))) {
                var_r6 = 0;
            }
            if (var_r6 != 0) {
                var_r5 = 1;
            }
        }
        if (var_r5 != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(func_0208555c(arg0), s32 *, 0x94);
            M2C_FIELD(arg0, s32 *, 0x30) = 8;
            M2C_FIELD(arg0, s32 *, 0x18) = 1;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == 1) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r1 != -1) {
        temp_r1_2                    = temp_r1 - arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r1_2;
        if (temp_r1_2 < 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = -1;
        }
    }
    var_r2    = 0;
    temp_r1_3 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_r1_3 != -1) && (temp_r1_3 > 0)) {
        var_r2 = 1;
    }
    if (var_r2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
}
