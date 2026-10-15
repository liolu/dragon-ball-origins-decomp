#include "engine.h"
#include "m2c.h"

void func_0202c0a8(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_r2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
        return;
    }
    func_0202c0a8(temp_r2, arg1);
}
