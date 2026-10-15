#include "engine.h"
#include "m2c.h"

void func_020032ac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020ede74;

void func_02002c98(s32 arg0, s32 arg1, s32 arg2) {
    func_020032ac(arg0, arg1, (arg2 * 0x564) + (s32) &data_020ede74, arg2);
}
