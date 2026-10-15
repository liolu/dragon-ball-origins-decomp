#include "m2c.h"

M2C_UNK func_020ba734(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK data_021603e8;

void func_0209a584(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 4)    = arg3;
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_020ba734(-1, arg0 + 0x18, 0x40);
    func_020ba734(0, arg0 + 0x58, 0x40);
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) * ((M2C_UNK *) ((s8 *) &data_021603e8 + (arg3 * 4)));
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    func_020ba734(-1, arg0 + 0xA0, 0x40);
    func_020ba734(0, arg0 + 0xE0, 0x400);
    M2C_FIELD(arg0, s32 *, 0x4E0) = 0;
}
