#include "m2c.h"

M2C_UNK func_02001684(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02050388(M2C_UNK *);                   /* extern */
M2C_UNK func_02050b78(M2C_UNK *);                   /* extern */
M2C_UNK func_02050e64(M2C_UNK *);                   /* extern */
M2C_UNK func_020523d4();                            /* extern */
M2C_UNK func_02052884();                            /* extern */
M2C_UNK func_02052918(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205e4cc(M2C_UNK *);                   /* extern */
M2C_UNK func_0205f304(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0213b354;
extern M2C_UNK data_0213b388;
extern M2C_UNK data_0213b4d0;
extern M2C_UNK data_0213bad0;
extern M2C_UNK data_0213c810;
extern M2C_UNK data_0213dff0;
extern M2C_UNK data_0213fc40;

void func_02052ac8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02001684(&data_0213b388, 0xC8000);
    M2C_FIELD(&data_0213b354, s32 *, 0x24) = (s32) M2C_FIELD(&data_0213b354, s32 *, 0x38);
    M2C_FIELD(&data_0213b354, s32 *, 0x20) = (s32) M2C_FIELD(&data_0213b354, s32 *, 0x3C);
    func_02052884();
    func_02052918(arg0, arg1, arg2, arg3);
    func_02050388(&data_0213dff0);
    func_02050e64(&data_0213fc40);
    func_02050b78(&data_0213c810);
    func_0205e4cc(&data_0213bad0);
    func_0205f304(&data_0213b4d0);
    M2C_FIELD(&data_0213b354, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0213b354, s32 *, 0x30) = 0;
    M2C_FIELD(&data_0213b354, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0213b354, s32 *, 0x28) = 0;
    func_020523d4();
}
