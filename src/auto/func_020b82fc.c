#include "m2c.h"

typedef struct UnkIrqCallbackInfo {
    M2C_UNK (*func)(s32);
    s32 enable;
    s32 arg;
} UnkIrqCallbackInfo;

extern UnkIrqCallbackInfo data_0216ce6c[8];
M2C_UNK func_020b8370(s32);

void func_020b82fc(u32 arg0, M2C_UNK (*arg1)(s32), s32 arg2) {
    u32 mask;

    mask                     = 1 << (arg0 + 3);
    data_0216ce6c[arg0].func = arg1;
    data_0216ce6c[arg0].arg  = arg2;
    func_020b8370(mask);
    data_0216ce6c[arg0].enable = 1;
}
