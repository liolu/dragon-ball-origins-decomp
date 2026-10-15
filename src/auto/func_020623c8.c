#include "m2c.h"

void *func_0202c83c(s32);                           /* extern */
M2C_UNK func_02072874(void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_020623c8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 *arg3, s32 *arg4, s32 arg5, s32 arg6) {
    u32 sp1C;
    u32 sp18;
    u32 sp14;
    u32 sp10;
    void *spC;
    void *sp8;
    void *sp4;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    void *var_r10;
    void *var_r10_2;
    void *var_r10_3;
    void *var_r10_4;
    void *var_r9;

    var_r9  = arg0;
    sp4     = var_r9 + 0x6B3C;
    var_r10 = var_r9;
    sp1C    = 0;
    do {
        temp_r1 = M2C_FIELD(var_r10, s32 *, 0x6B4C);
        if ((temp_r1 & 1) == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            if ((temp_r1 & 0x10) == 0x10) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            if (var_r0_2 != 0) {
                temp_r1_2 = M2C_FIELD(func_0202c83c(M2C_FIELD(var_r10, s32 *, 0x6B54)), s32 *, 8);
                if (((s32) *arg3 <= temp_r1_2) && (temp_r1_2 <= (s32) *arg4)) {
                    func_02072874(sp4, arg1, arg2, arg5, arg6);
                }
            }
        }
        var_r10 += 0x468;
        sp4 += 0x468;
        temp_r0 = sp1C + 1;
        sp1C    = temp_r0;
    } while (temp_r0 < 0x10U);
    sp8       = var_r9 + 0xB1BC;
    var_r10_2 = var_r9;
    sp18      = 0;
    do {
        temp_r1_3 = M2C_FIELD(var_r10_2, s32 *, 0xB1CC);
        if ((temp_r1_3 & 1) == 1) {
            var_r0_3 = 1;
        } else {
            var_r0_3 = 0;
        }
        if (var_r0_3 != 0) {
            if ((temp_r1_3 & 0x10) == 0x10) {
                var_r0_4 = 1;
            } else {
                var_r0_4 = 0;
            }
            if (var_r0_4 != 0) {
                temp_r1_4 = M2C_FIELD(func_0202c83c(M2C_FIELD(var_r10_2, s32 *, 0xB1D4)), s32 *, 8);
                if (((s32) *arg3 <= temp_r1_4) && (temp_r1_4 <= (s32) *arg4)) {
                    func_02072874(sp8, arg1, arg2, arg5, arg6);
                }
            }
        }
        var_r10_2 += 0x424;
        sp8 += 0x424;
        temp_r0_2 = sp18 + 1;
        sp18      = temp_r0_2;
    } while (temp_r0_2 < 0x10U);
    spC       = var_r9 + 4;
    var_r10_3 = var_r9;
    sp14      = 0;
    do {
        temp_r1_5 = M2C_FIELD(var_r10_3, s32 *, 0x14);
        if ((temp_r1_5 & 1) == 1) {
            var_r0_5 = 1;
        } else {
            var_r0_5 = 0;
        }
        if (var_r0_5 != 0) {
            if ((temp_r1_5 & 0x10) == 0x10) {
                var_r0_6 = 1;
            } else {
                var_r0_6 = 0;
            }
            if (var_r0_6 != 0) {
                temp_r1_6 = M2C_FIELD(func_0202c83c(M2C_FIELD(var_r10_3, s32 *, 0x1C)), s32 *, 8);
                if (((s32) *arg3 <= temp_r1_6) && (temp_r1_6 <= (s32) *arg4)) {
                    func_02072874(spC, arg1, arg2, arg5, arg6);
                }
            }
        }
        var_r10_3 += 0x9B8;
        spC += 0x9B8;
        temp_r0_3 = sp14 + 1;
        sp14      = temp_r0_3;
    } while (temp_r0_3 < 1U);
    var_r10_4 = var_r9 + 0x9BC;
    sp10      = 0;
    do {
        temp_r1_7 = M2C_FIELD(var_r9, s32 *, 0x9CC);
        if ((temp_r1_7 & 1) == 1) {
            var_r0_7 = 1;
        } else {
            var_r0_7 = 0;
        }
        if (var_r0_7 != 0) {
            if ((temp_r1_7 & 0x10) == 0x10) {
                var_r0_8 = 1;
            } else {
                var_r0_8 = 0;
            }
            if (var_r0_8 != 0) {
                temp_r1_8 = M2C_FIELD(func_0202c83c(M2C_FIELD(var_r9, s32 *, 0x9D4)), s32 *, 8);
                if (((s32) *arg3 <= temp_r1_8) && (temp_r1_8 <= (s32) *arg4)) {
                    func_02072874(var_r10_4, arg1, arg2, arg5, arg6);
                }
            }
        }
        var_r9 += 0x618;
        var_r10_4 += 0x618;
        temp_r0_4 = sp10 + 1;
        sp10      = temp_r0_4;
    } while (temp_r0_4 < 0x10U);
}
