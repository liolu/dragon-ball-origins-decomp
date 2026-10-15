#include "m2c.h"

void func_020a3df8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *) 0x040004A4 = arg5 | (arg0 | (arg1 * 0x10) | (arg2 << 6)) | (arg3 << 0x18) | (arg4 << 0x10);
}
