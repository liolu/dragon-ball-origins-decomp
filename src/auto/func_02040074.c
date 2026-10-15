#include "m2c.h"

M2C_UNK func_0209b808(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0209bfc8(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020b87e4(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK data_020d92dc;
extern M2C_UNK data_02136be0;

void func_02040074(s32 arg0, M2C_UNK arg1) {
    u8 sp0[16];

    func_020b87e4(sp0, &data_020d92dc, M2C_FIELD(&data_02136be0, s32 *, 0xA4));
    func_0209b808(arg0 + 0x4D8, arg1, 0x200);
    func_0209bfc8(arg0 + 0x4D8, sp0);
}
