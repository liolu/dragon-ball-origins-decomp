#include "m2c.h"

extern M2C_UNK *data_0213dff0;
extern M2C_UNK data_0213f2e4;
extern M2C_UNK data_0213fc40;

void func_02054b74(void *arg0) {
    s32 temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r1 = M2C_FIELD(temp_r2, s32 *, 0x6E0);
    if (temp_r1 == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) data_0213dff0;
        return;
    }
    if (temp_r1 == 1) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_0213f2e4;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) ((M2C_FIELD(temp_r2, s32 *, 0x6E4) * 0x794) + (s32) &data_0213fc40);
}
