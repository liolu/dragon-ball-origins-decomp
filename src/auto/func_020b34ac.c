#include "m2c.h"

s32 func_020b0e28(M2C_UNK);                         /* extern */
extern M2C_UNK func_020b352c;
extern M2C_UNK func_020b35a0;
extern M2C_UNK func_020b35b0;
extern M2C_UNK func_020b35e8;
extern M2C_UNK func_020b35f8;
extern M2C_UNK func_020b3620;
extern M2C_UNK func_020b3624;
extern M2C_UNK func_020b3640;

void func_020b34ac(void *arg0, M2C_UNK arg1) {
    if (func_020b0e28(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020b352c;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020b35a0;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020b35b0;
        M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_020b35e8;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020b35f8;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020b3620;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020b3624;
    M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_020b3640;
}
