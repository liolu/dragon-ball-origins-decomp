#include "engine.h"
#include "m2c.h"

void func_0202c084(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_r0 == 0) {
        return;
    }
    func_0202c084(temp_r0);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
