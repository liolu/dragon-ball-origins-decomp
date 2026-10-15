#include "m2c.h"

M2C_UNK func_020015f4(void *);                      /* extern */
M2C_UNK func_0202bc60();                            /* extern */
extern M2C_UNK data_020d5564;
extern M2C_UNK data_020d7fd0;
extern M2C_UNK data_020d86b8;
extern M2C_UNK data_020e78f4;

void *func_020171ac(void *arg0) {
    func_0202bc60();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d5564;
    M2C_FIELD(arg0, s32 *, 0x124)  = 0;
    M2C_FIELD(arg0, s32 *, 0x128)  = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d7fd0;
    M2C_FIELD(arg0, s32 *, 0x328)  = 0;
    M2C_FIELD(arg0, s32 *, 0x32C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x468)  = 0;
    func_020015f4(arg0 + 0x470);
    M2C_FIELD(arg0, M2C_UNK **, 0x70C) = &data_020e78f4;
    M2C_FIELD(arg0, s32 *, 0x758)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_020d86b8;
    M2C_FIELD(arg0, s32 *, 0x7E4)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7CC)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7D0)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7D4)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7D8)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7DC)      = 0xC;
    M2C_FIELD(arg0, s32 *, 0x7E0)      = 0xC;
    return arg0;
}
