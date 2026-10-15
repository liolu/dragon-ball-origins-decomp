#include "engine.h"
#include "m2c.h"

void func_020af600(M2C_UNK);
void func_020af774(M2C_UNK, M2C_UNK);
void func_020b3c68(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020af474(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (M2C_FIELD(arg0, u8 *, 0x2C) != 0)) {
        if (arg1 == 0) {
            func_020af600(arg0);
            return;
        }
        func_020b3c68(arg0 + 0x1C, 0, arg1);
        func_020af774(arg0, 0);
        M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
    }
}
