#include "m2c.h"

M2C_UNK func_0200ee78(M2C_UNK *, void *, s32, s32); /* extern */
s32 func_0202c83c();                                /* extern */

s32 func_0200e6bc(void *arg0, s32 arg1) {
    M2C_UNK sp0;

    func_0200ee78(&sp0, arg0, arg0 + 0x5FC, func_0202c83c());
    M2C_FIELD(arg0, s32 *, 0x5CC) = (s32) M2C_FIELD(arg0, s32 *, 0x5EC);
    M2C_FIELD(arg0, s32 *, 0x5DC) = (s32) M2C_FIELD(arg0, s32 *, 0x5FC);
    M2C_FIELD(arg0, s32 *, 0x5E0) = (s32) M2C_FIELD(arg0, s32 *, 0x600);
    M2C_FIELD(arg0, s32 *, 0x5E4) = (s32) M2C_FIELD(arg0, s32 *, 0x604);
    M2C_FIELD(arg0, s32 *, 0x5D0) = (s32) M2C_FIELD(arg0, s32 *, 0x5F0);
    M2C_FIELD(arg0, s32 *, 0x5D4) = (s32) M2C_FIELD(arg0, s32 *, 0x5F4);
    M2C_FIELD(arg0, s32 *, 0x5D8) = (s32) M2C_FIELD(arg0, s32 *, 0x5F8);
    M2C_FIELD(arg0, s32 *, 0x5E8) = (s32) M2C_FIELD(arg0, s32 *, 0x608);
    return arg1 + 4;
}
