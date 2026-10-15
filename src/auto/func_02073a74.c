#include "m2c.h"

M2C_UNK func_02073af8(s32, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK func_02073f20(s32, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK func_0207430c(s32, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_020ced4c;
extern M2C_UNK data_020ced58;
extern M2C_UNK data_020ced64;
extern M2C_UNK func_02073044;
extern M2C_UNK func_0207b514;
extern M2C_UNK func_0207b544;

void func_02073a74(s32 arg0) {
    func_0207430c(arg0, arg0 + 0x7A4, &data_020ced58, &func_02073044, 3);
    func_02073f20(arg0, arg0 + 0x7B0, &data_020ced64, &func_0207b514, 0xF);
    func_02073af8(arg0, arg0 + 0x7BC, &data_020ced4c, &func_0207b544, 0x14);
}
