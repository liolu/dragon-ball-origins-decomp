#include "m2c.h"

M2C_UNK func_0204fc70();                            /* extern */
s32 func_02050014(M2C_UNK, s32, M2C_UNK *, M2C_UNK); /* extern */
s32 func_020500bc(M2C_UNK, s32, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_02137b30;
extern M2C_UNK data_02137b34;

void func_0204fc08(s32 arg0, s32 *arg1, M2C_UNK arg2) {
    s32 temp_r0;

    func_0204fc70();
    M2C_FIELD(&data_02137b30, s32 *, 0x10) = arg0;
    M2C_FIELD(&data_02137b30, s32 *, 4)    = (s32) *arg1;
    temp_r0                                = func_02050014(0, arg0, &data_02137b34, arg2);
    M2C_FIELD(&data_02137b30, s32 *, 0x10) = temp_r0;
    M2C_FIELD(&data_02137b30, s32 *, 0x10) = func_020500bc(1, temp_r0, &data_02137b34, arg2);
}
