#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ba034(void);
void func_020ba048(M2C_UNK);

void func_020a0ec8(s32 arg0) {
    s32 temp_r0;

    temp_r0                      = func_020ba034();
    *(s32 *) 0x04000540          = 3;
    M2C_FIELD(arg0, s8 *, 0x1F0) = 1;
    func_020ba048(temp_r0);
}
