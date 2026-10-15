#include "m2c.h"

void func_0200da3c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5EC) = (s32) ((M2C_FIELD(arg0, s32 *, 0x5EC) & arg1) | 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x5DC) = (s32) M2C_FIELD(arg0, s32 *, 0x5FC);
    M2C_FIELD(arg0, s32 *, 0x5E0) = (s32) M2C_FIELD(arg0, s32 *, 0x600);
    M2C_FIELD(arg0, s32 *, 0x5E4) = (s32) M2C_FIELD(arg0, s32 *, 0x604);
}
