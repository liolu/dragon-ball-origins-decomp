/* compiler: 2.0/sp1p5 -flag no-opt_rebuildlogicals */
#include "m2c.h"

M2C_UNK func_02002980(s32, s32);                    /* extern */
M2C_UNK func_02002c10(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_02035b1c(void *, s32, s32, s32, s32);  /* extern */
M2C_UNK func_02035b60(void *, s32, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_02035bac(void *, s32, s32);            /* extern */
M2C_UNK func_02035c04(void *, s32, s32);            /* extern */
M2C_UNK func_02036574(void *, s32, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_020365b0(void *, s32, s32);            /* extern */
M2C_UNK func_020365c8(void *);                      /* extern */
M2C_UNK func_0209b59c(void *, void *);              /* extern */
M2C_UNK func_0209b87c(void *, s32, s32);            /* extern */
M2C_UNK func_0209b978(void *, s32);                 /* extern */
extern void *data_0213dff0;

void func_020362d8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r1;
    void *temp_r4;

    temp_r4 = data_0213dff0;
    var_r1  = 0;
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x274) != 0)) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg4;
    func_02002980(0x30535453, arg4);
    func_02002980(0x31535453, arg4);
    func_02035b1c(arg0, arg1, arg2, arg3, 0x13);
    func_02035b60(arg0, arg1 + 0x14, arg2, 0x40, arg3, 0x14, 0x16);
    func_02002c10(arg0 + 0x80, 0x17, arg4);
    func_0209b978(arg0 + 0x80, arg3);
    func_0209b87c(arg0 + 0x80, arg1 + 0x14, arg2);
    func_02035c04(arg0, M2C_FIELD(temp_r4, s32 *, 0x2FC), M2C_FIELD(temp_r4, s32 *, 0x300));
    func_02036574(arg0, arg1 + 0x14, arg2 + 8, 0x40, arg3, 0x15, 0x16);
    func_0209b59c(arg0 + 0x1A0, arg0 + 0x80);
    func_0209b87c(arg0 + 0x1A0, arg1 + 0x14, arg2 + 8);
    func_020365b0(arg0, M2C_FIELD(temp_r4, s32 *, 0x780), M2C_FIELD(temp_r4, s32 *, 0x784));
    func_02035bac(arg0, arg1, arg3);
    func_020365c8(arg0);
}
