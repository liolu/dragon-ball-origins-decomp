#include "m2c.h"

M2C_UNK func_0202a8f8(M2C_UNK *);                   /* extern */
M2C_UNK func_0202a9b8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0202aa40(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0202aa60(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0202ab20(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020e6e40;
extern M2C_UNK data_020e6e54;
extern M2C_UNK data_020f8a2c;

void func_02094098(void) {
    func_0202a8f8(&data_020f8a2c);
    func_0202ab20(&data_020f8a2c, 0x71C);
    func_0202a9b8(&data_020f8a2c, 0xFFFFF8E4);
    func_0202aa40(&data_020f8a2c, M2C_FIELD(&data_020e6e40, s32 *, 0x10));
    func_0202aa60(&data_020f8a2c, &data_020e6e54);
}
