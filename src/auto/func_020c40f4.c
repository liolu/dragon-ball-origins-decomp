#include "engine.h"
#include "m2c.h"

void func_020c4118(M2C_UNK);
void func_020c44ac(M2C_UNK);

extern M2C_UNK data_02170950;

void func_020c40f4(void) {
    func_020c44ac(1);
    M2C_FIELD(&data_02170950, s32 *, 0xC) = 1;
    func_020c4118(1);
}
