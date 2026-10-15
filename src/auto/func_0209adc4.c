#include "m2c.h"

void func_0209adc4(void *arg0, s32 arg1, s32 arg2, s32 arg3, u32 *arg4, s32 *arg5, u32 *arg6, s32 *arg7, u32 arg8, s32 arg9,
                   s32 *argA) {
    M2C_FIELD(arg0, u32 *, 0)    = (u32) *arg4;
    M2C_FIELD(arg0, s32 *, 4)    = (s32) *arg5;
    M2C_FIELD(arg0, s32 *, 8)    = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) *argA;
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    *argA += (u32) (arg2 * arg3) >> arg9;
    *arg4 += arg2;
    *arg6 -= arg2;
    if ((u32) *arg4 < arg8) {
        return;
    }
    *arg4 = 0;
    *arg6 = arg8;
    *arg5 += arg3;
    *arg7 -= arg3;
}
