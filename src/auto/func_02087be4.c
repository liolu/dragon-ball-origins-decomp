#include "m2c.h"

M2C_UNK func_02001684(void *, s32);                 /* extern */
s32 func_02087dbc(void *, void *);                  /* extern */
M2C_UNK func_02087df8(void *, void *, s32);         /* extern */
s32 func_02087f84(void *, void *);                  /* extern */
M2C_UNK func_02087fa4(void *, void *, s32);         /* extern */
s32 func_02099c38(void *);                          /* extern */
M2C_UNK func_02099c5c(void *, s32, s32);            /* extern */
M2C_UNK func_020b87e4(void *, M2C_UNK *, s32);      /* extern */
M2C_UNK func_020bd3c4(M2C_UNK *);                   /* extern */
s32 func_020bd65c(M2C_UNK *, void *);               /* extern */
M2C_UNK func_020bd6a4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e69d8;
extern M2C_UNK data_020e6b6c;
extern M2C_UNK data_020e6b78;
extern M2C_UNK data_020e6b84;

void func_02087be4(void *arg0) {
    u8 sp48[72];
    u8 sp0[72];
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;

    func_020b87e4(arg0 + 0x1B8, &data_020e6b6c, *((M2C_UNK *) ((s8 *) &data_020e69d8 + (M2C_FIELD(arg0, s32 *, 0x24) * 4))));
    func_020bd3c4(sp48);
    if (func_020bd65c(sp48, arg0 + 0x1B8) == 0) {
        var_r0 = 0;
    } else {
        func_020bd6a4(sp48);
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        func_02001684(arg0 + 0x958, func_02087dbc(arg0, arg0 + 0x1B8));
        func_02087df8(arg0, arg0 + 0x1B8, M2C_FIELD(arg0, s32 *, 0x95C));
        return;
    }
    func_020b87e4(arg0 + 0x1B8, &data_020e6b78, *((M2C_UNK *) ((s8 *) &data_020e69d8 + (M2C_FIELD(arg0, s32 *, 0x24) * 4))));
    func_020bd3c4(sp0);
    if (func_020bd65c(sp0, arg0 + 0x1B8) == 0) {
        var_r0_2 = 0;
    } else {
        func_020bd6a4(sp0);
        var_r0_2 = 1;
    }
    if (var_r0_2 != 0) {
        func_02001684(arg0 + 0x958, func_02087f84(arg0, arg0 + 0x1B8));
        func_02087fa4(arg0, arg0 + 0x1B8, M2C_FIELD(arg0, s32 *, 0x95C));
        return;
    }
    func_020b87e4(arg0 + 0x1B8, &data_020e6b84, *((M2C_UNK *) ((s8 *) &data_020e69d8 + (M2C_FIELD(arg0, s32 *, 0x24) * 4))));
    temp_r0 = func_02099c38(arg0 + 0x1B8);
    func_02001684(arg0 + 0x958, temp_r0);
    func_02099c5c(arg0 + 0x1B8, M2C_FIELD(arg0, s32 *, 0x95C), temp_r0);
}
