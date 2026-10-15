#include "m2c.h"

M2C_UNK func_02001e5c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02028dfc(void *);                      /* extern */
M2C_UNK func_020290dc(void *);                      /* extern */
M2C_UNK func_020297c4();                            /* extern */
s32 func_02029ed0();                                /* extern */
s32 func_0202a110(void *);                          /* extern */
M2C_UNK func_0202a3d0(void *);                      /* extern */
M2C_UNK func_020523b4();                            /* extern */
M2C_UNK func_020a0f68(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;
extern M2C_UNK data_021267b0;

s32 func_0202967c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r4;
    s32 var_r1;

    temp_r4                      = M2C_FIELD(arg0, s32 *, 0x4C);
    temp_r0                      = func_02029ed0();
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_r0;
    if (temp_r0 == 5) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x70);
    switch (temp_r1) {                              /* irregular */
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4C) = 4;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x4C) = 3;
            break;
        default:
            if ((M2C_FIELD(&data_021267b0, s32 *, 0x2EC) != 0) && (M2C_FIELD(&data_021267b0, s32 *, 0x208) != 0)) {
                var_r1 = 1;
            } else {
                var_r1 = 0;
            }
            if (var_r1 != 0) {
                M2C_FIELD(arg0, s32 *, 0x4C) = 4;
            } else if (temp_r0 == 0) {
                M2C_FIELD(arg0, s32 *, 0x4C) = func_0202a110(arg0);
            }
            break;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r0_2 == 6) {
        if (temp_r4 != 6) {
            func_020297c4();
        }
        return 1;
    }
    if (temp_r0_2 == 5) {
        return 0;
    }
    if (temp_r4 == 6) {
        func_02001e5c(0x7F, 4);
        func_020523b4();
    }
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    func_020a0f68(&data_020e7ddc, 0x7C00, 0x1F);
    func_02028dfc(arg0);
    func_020290dc(arg0);
    func_0202a3d0(arg0);
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    M2C_FIELD(&data_020e7ddc, s32 *, 0x134) = (s32) (M2C_FIELD(&data_020e7ddc, s32 *, 0x134) + 1);
    return 1;
}
