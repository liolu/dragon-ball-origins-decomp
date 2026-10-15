#include "m2c.h"

void *func_02025450(M2C_UNK *);                     /* extern */
s32 func_020a2d5c(void *, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020f6268;
extern M2C_UNK data_02126064;

void func_02047e40(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    M2C_UNK *var_r4;
    u32 var_r1;
    void *var_r5;

    var_r5 = func_02025450(&data_020f6268);
    if (var_r5 == NULL) {
        return;
    }
    var_r4 = &data_02126064;
    var_r1 = 0;
loop_3:
    if ((s32) M2C_FIELD(var_r4, s32 *, 4) < 0) {
        M2C_FIELD(var_r4, s32 *, 0) = arg0;
        M2C_FIELD(var_r4, s32 *, 8) = func_020a2d5c(var_r5, arg3, -1, 0);
        M2C_FIELD(var_r4, s32 *, 4) = arg2;
        if ((s32) M2C_FIELD(M2C_FIELD(var_r5, void **, 4), s16 *, 0x16) <= 0) {
            var_r5 = NULL;
        }
        M2C_FIELD(var_r4, void **, 0xC) = var_r5;
        M2C_FIELD(var_r4, s32 *, 0x10)  = (s32) M2C_FIELD(arg4, s32 *, 0);
        M2C_FIELD(var_r4, s32 *, 0x14)  = (s32) M2C_FIELD(arg4, s32 *, 4);
        M2C_FIELD(var_r4, s32 *, 0x18)  = (s32) M2C_FIELD(arg4, s32 *, 8);
        M2C_FIELD(var_r4, s32 *, 0x1C)  = (s32) M2C_FIELD(arg4, s32 *, 0xC);
        M2C_FIELD(var_r4, s32 *, 0x20)  = (s32) M2C_FIELD(arg4, s32 *, 0x10);
        M2C_FIELD(var_r4, s32 *, 0x24)  = (s32) M2C_FIELD(arg4, s32 *, 0x14);
        M2C_FIELD(var_r4, s32 *, 0x28)  = (s32) M2C_FIELD(arg4, s32 *, 0x18);
        M2C_FIELD(var_r4, s32 *, 0x2C)  = (s32) M2C_FIELD(arg4, s32 *, 0x1C);
        M2C_FIELD(var_r4, s32 *, 0x30)  = (s32) M2C_FIELD(arg4, s32 *, 0x20);
        M2C_FIELD(var_r4, s32 *, 0x34)  = (s32) M2C_FIELD(arg4, s32 *, 0x24);
        M2C_FIELD(var_r4, s32 *, 0x38)  = (s32) M2C_FIELD(arg4, s32 *, 0x28);
        M2C_FIELD(var_r4, s32 *, 0x3C)  = (s32) M2C_FIELD(arg4, s32 *, 0x2C);
        M2C_FIELD(var_r4, s32 *, 0x40)  = (s32) M2C_FIELD(arg3, s32 *, 0);
        M2C_FIELD(var_r4, s32 *, 0x44)  = (s32) M2C_FIELD(arg3, s32 *, 4);
        M2C_FIELD(var_r4, s32 *, 0x48)  = (s32) M2C_FIELD(arg3, s32 *, 8);
        M2C_FIELD(var_r4, s32 *, 0x4C)  = (s32) M2C_FIELD(arg3, s32 *, 0xC);
        M2C_FIELD(var_r4, s32 *, 0x50)  = (s32) M2C_FIELD(arg3, s32 *, 0x10);
        M2C_FIELD(var_r4, s32 *, 0x54)  = (s32) M2C_FIELD(arg3, s32 *, 0x14);
        M2C_FIELD(var_r4, s32 *, 0x58)  = (s32) M2C_FIELD(arg3, s32 *, 0x18);
        M2C_FIELD(var_r4, s32 *, 0x5C)  = (s32) M2C_FIELD(arg3, s32 *, 0x1C);
        M2C_FIELD(var_r4, s32 *, 0x60)  = (s32) M2C_FIELD(arg3, s32 *, 0x20);
        M2C_FIELD(var_r4, s32 *, 0x64)  = (s32) M2C_FIELD(arg3, s32 *, 0x24);
        M2C_FIELD(var_r4, s32 *, 0x68)  = (s32) M2C_FIELD(arg3, s32 *, 0x28);
        M2C_FIELD(var_r4, s32 *, 0x6C)  = (s32) M2C_FIELD(arg3, s32 *, 0x2C);
        M2C_FIELD(var_r4, s32 *, 0x70)  = 0;
        return;
    }
    var_r1 += 1;
    var_r4 = (M2C_UNK *) ((s8 *) var_r4 + 0x74);
    if (var_r1 >= 0x10U) {
        return;
    }
    goto loop_3;
}
