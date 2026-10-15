#include "m2c.h"

M2C_UNK func_020508f0(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02050c64(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020514cc(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0213b354;
extern M2C_UNK data_0213c810;
extern M2C_UNK data_0213dff0;
extern M2C_UNK data_0213fc40;

void func_020520e4(M2C_UNK arg0, M2C_UNK arg1) {
    func_020508f0(&data_0213dff0, arg0, arg1, M2C_FIELD(&data_0213b354, s32 *, 0x28));
    func_020514cc(&data_0213fc40, arg0, arg1, M2C_FIELD(&data_0213b354, s32 *, 0x28));
    func_02050c64(&data_0213c810, arg0, arg1, M2C_FIELD(&data_0213b354, s32 *, 0x28));
}
