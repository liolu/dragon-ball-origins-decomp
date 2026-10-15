#include "m2c.h"

void *func_0200dd68(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0x624) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 0x626) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s32 *, 0x620) = (s32) M2C_FIELD(arg1, s16 *, 8);
    return arg1 + 0xC;
}
