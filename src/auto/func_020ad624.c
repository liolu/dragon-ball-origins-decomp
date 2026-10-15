#include "engine.h"
#include "m2c.h"

void func_020ac694(M2C_UNK);
void func_020ac6a4(M2C_UNK);
void func_020ac708(M2C_UNK, M2C_UNK);
M2C_UNK func_020acbc4(M2C_UNK);

void func_020ad624(s32 arg0) {
    s32 temp_r0_2;
    u16 temp_r0;
    u16 temp_r4;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_020ac6a4((s32) temp_r0);
        func_020ac694(9);
        return;
    }
    temp_r4 = M2C_FIELD(arg0, u16 *, 8);
    func_020ac708((s32) temp_r4, (s32) (s8) M2C_FIELD(arg0, u16 *, 0xA));
    temp_r0_2 = func_020acbc4((s32) (u16) (temp_r4 + 1));
    if (temp_r0_2 == 0x18) {
        func_020ac694(1);
        return;
    }
    if (temp_r0_2 == 2) {
        return;
    }
    func_020ac6a4(temp_r0_2);
    func_020ac694(9);
}
