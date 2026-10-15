#include "m2c.h"

M2C_UNK func_0200da3c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02053120(void *);                      /* extern */
M2C_UNK func_020558b4(void *);                      /* extern */
s32 func_02055eb8(void *, s32);                     /* extern */
M2C_UNK func_020b4fb0(s32, s32, M2C_UNK *);         /* extern */
s32 func_020b4fe4(M2C_UNK *, M2C_UNK *);            /* extern */
extern s32 data_0213dff0;

void func_02055b8c(void *arg0) {
    u8 sp0[12];
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0x13) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x134);
        if ((s32) (func_02055eb8(arg0, data_0213dff0) + 1) > (s32) (temp_r5 - 1)) {
            var_r1 = M2C_FIELD(arg0, s32 *, 0x134) - 1;
        } else {
            var_r1 = func_02055eb8(arg0, data_0213dff0) + 1;
        }
        M2C_FIELD(arg0, s32 *, 0x1B0) = var_r1;
        var_r1_2                      = var_r1 + 1;
        temp_r0                       = M2C_FIELD(arg0, s32 *, 0x134) - 1;
        if (var_r1_2 > temp_r0) {
            var_r1_2 = temp_r0;
        }
        M2C_FIELD(arg0, s32 *, 0x1B0) = var_r1_2;
        func_020b4fb0((M2C_FIELD(arg0, s32 *, 0x138) * 0xC) + (s32) (arg0 + 0x44), M2C_FIELD(arg0, s32 *, 0x1C), sp0);
        if (M2C_FIELD(arg0, s32 *, 0x1B0) == M2C_FIELD(arg0, s32 *, 0x138)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            temp_r0_2 = func_020b4fe4(sp0, sp0);
            if ((temp_r0_2 >= 0) && (temp_r0_2 < 0x15F90)) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            if (var_r0_2 != 0) {
                M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
                M2C_FIELD(arg0, s32 *, 0xC) = 0;
            } else {
                goto block_16;
            }
        } else {
        block_16:
            M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(arg0, s32 *, 0xC) = 2;
        }
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r0_3) {                            /* irregular */
        case 0:
            func_02053120(arg0);
            return;
        case 2:
            func_020558b4(arg0);
            return;
        default:
            func_0200da3c(M2C_FIELD(arg0, s32 *, 0x20), 0);
            return;
    }
}
