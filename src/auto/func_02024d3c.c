#include "engine.h"
#include "m2c.h"

void func_02001368(M2C_UNK);
M2C_UNK func_020291ac(M2C_UNK);
void func_02029304(M2C_UNK);
void func_02029360(M2C_UNK);

void func_02024d3c(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
    if (func_020291ac(arg0) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C) == 0) {
        func_02001368(1);
    }
    func_02029360(arg0);
    func_02029304(arg0);
}
