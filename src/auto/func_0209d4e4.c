#include "m2c.h"

void func_0209d4e4(s32 arg0, s32 arg1) {
    *(s32 *) 0x0400101C = (arg0 & 0x1FF) | (0x01FF0000 & (arg1 << 0x10));
}
