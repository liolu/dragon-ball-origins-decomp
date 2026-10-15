#include "m2c.h"

s32 func_020ac674();                                /* extern */
M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
s32 func_020ad21c();                                /* extern */
M2C_UNK func_020ba820(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_021662c0;
extern M2C_UNK data_0216636a;

s32 func_020ad184(s32 arg0, void *arg1, s16 arg2) {
    if (func_020ac674() != 1) {
        return 0;
    }
    func_020ac694(2);
    M2C_FIELD(&data_021662c0, s32 *, 0x20) = arg0;
    M2C_FIELD(&data_021662c0, s16 *, 0)    = arg2;
    M2C_FIELD(&data_021662c0, s16 *, 0xA6) = 1;
    if (arg1 != NULL) {
        M2C_FIELD(&data_021662c0, u16 *, 0xAE) = (u16) M2C_FIELD(arg1, u16 *, 4);
        M2C_FIELD(&data_021662c0, u16 *, 0xAC) = (u16) M2C_FIELD(arg1, u16 *, 2);
        M2C_FIELD(&data_021662c0, u16 *, 0xAA) = (u16) M2C_FIELD(arg1, u16 *, 0);
    } else {
        func_020ba820(&data_0216636a, 0xFF, 6);
    }
    if (func_020ad21c() != 0) {
        return 1;
    }
    func_020ac694(9);
    return 0;
}
