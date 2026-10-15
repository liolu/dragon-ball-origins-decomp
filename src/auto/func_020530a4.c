#include "engine.h"
#include "m2c.h"

void func_02052ff4(M2C_UNK, M2C_UNK);
void func_02053028(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02053070(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020530a4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 4)   = arg6;
    M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = 0x13;
    if (arg1 != 0) {
        func_02052ff4(arg0, arg1);
    }
    if ((arg2 != 0) && (arg3 > 0)) {
        func_02053028(arg0, arg2, arg3);
    }
    if ((arg4 != 0) && (arg5 != 0)) {
        func_02053070(arg0, arg4, arg5);
    }
    M2C_FIELD(arg0, s32 *, 0x16C) = arg7;
}
