#include "m2c.h"

void func_0209d55c(s32 arg0, s32 arg1) {
    *(s32 *) 0x04001010 = (arg0 & 0x1FF) | (0x01FF0000 & (arg1 << 0x10));
}
