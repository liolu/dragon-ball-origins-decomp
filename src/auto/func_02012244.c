#include "m2c.h"

M2C_UNK func_020114ec(void *, s32, s32);            /* extern */

void func_02012244(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x62C) = (s32) (M2C_FIELD(arg0, s32 *, 0x62C) & 0xFFFF7FFE);
    M2C_FIELD(arg0, s16 *, 0x624) = (s16) (0xFFFF7FFEU >> 0x11);
    func_020114ec(arg0, M2C_FIELD(arg0, s32 *, 0x614), 0xFFFC);
}
