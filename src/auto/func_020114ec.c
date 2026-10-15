#include "m2c.h"

M2C_UNK func_0200dec0(void *, u16 *, s32, s32);     /* extern */
u16 *func_02011678(void *, u16 *);                  /* extern */
u16 *func_02011958(void *, u16 *, u32);             /* extern */
u16 *func_02011b14(void *, u16 *, u32, s32);        /* extern */
u16 *func_02011d00(void *, u16 *, u32);             /* extern */
u16 *func_02011f34(void *, u16 *, u32);             /* extern */
u16 *func_02011fb0(void *, u16 *, u32);             /* extern */
s32 func_0201227c();                                /* extern */

void func_020114ec(void *arg0, void *arg1, s32 arg2) {
    s32 var_r0;
    u16 *var_r6;
    u16 var_r10;

    if (arg1 == NULL) {
        return;
    }
    var_r10 = M2C_FIELD(arg1, u16 *, 4);
    var_r6  = arg1 + 4;
    if (func_0201227c() != 0) {
        return;
    }
    if (arg2 == var_r10) {
        return;
    }
loop_7:
    if (var_r10 == 0) {
        var_r6 = func_02011678(arg0, var_r6);
        goto block_33;
    }
    if (var_r10 == 0x600) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x770) > 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x5B4) = (s32) (M2C_FIELD(arg0, s32 *, 0x5B4) + 1);
        }
        func_020114ec(arg0, M2C_FIELD(arg0, void **, 0x618), 0xFFFE);
        var_r6 = (u16 *) ((s8 *) var_r6 + 4);
        goto block_33;
    }
    if (((u32) var_r10 >= 0x600U) && ((u32) var_r10 < 0x900U)) {
        var_r6 = func_02011958(arg0, var_r6, (u32) var_r10);
        goto block_33;
    }
    if (((u32) var_r10 >= 0x100U) && ((u32) var_r10 < 0x200U)) {
        var_r6 = func_02011b14(arg0, var_r6, (u32) var_r10, arg2);
        goto block_33;
    }
    if (var_r10 == 1) {
        var_r6 = (u16 *) ((s8 *) var_r6 + 4);
        goto block_33;
    }
    if (((u32) var_r10 >= 0xA00U) && ((u32) var_r10 < 0xB00U)) {
        var_r6 = func_02011fb0(arg0, var_r6, (u32) var_r10);
        goto block_33;
    }
    if (((u32) var_r10 >= 0x900U) && ((u32) var_r10 < 0xA00U)) {
        var_r6 = func_02011f34(arg0, var_r6, (u32) var_r10);
        goto block_33;
    }
    if (var_r10 == 0x204) {
        func_0200dec0(arg0, var_r6, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C));
        return;
    }
    var_r6 = func_02011d00(arg0, var_r6, (u32) var_r10);
block_33:
    var_r10 = *var_r6;
    if (arg2 == var_r10) {
        return;
    }
    goto loop_7;
}
