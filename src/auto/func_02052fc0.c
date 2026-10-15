#include "engine.h"
#include "m2c.h"

void func_0200da3c(M2C_UNK, M2C_UNK);

void func_02052fc0(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    M2C_FIELD(arg0, s32 *, 8)     = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC)   = 0x13;
    M2C_FIELD(arg0, s32 *, 8)     = 0x13;
    M2C_FIELD(arg0, s32 *, 0xC)   = 0x13;
    func_0200da3c(M2C_FIELD(arg0, s32 *, 0x20), 0);
}
