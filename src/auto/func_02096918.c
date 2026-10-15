#include "m2c.h"

M2C_UNK func_020016f4(s32);                         /* extern */
M2C_UNK func_0204b040(M2C_UNK *);                   /* extern */
M2C_UNK func_02096974();                            /* extern */
M2C_UNK func_020969a0(s32);                         /* extern */
M2C_UNK func_020969c8(s32);                         /* extern */
M2C_UNK func_02096a00(s32);                         /* extern */
M2C_UNK func_02098e3c(M2C_UNK *);                   /* extern */
M2C_UNK func_02099044(M2C_UNK *);                   /* extern */
M2C_UNK func_020992ac();                            /* extern */
extern M2C_UNK data_021267b0;
extern M2C_UNK data_0215f048;
extern M2C_UNK data_0215f104;

void func_02096918(s32 arg0) {
    func_02096974();
    func_020969a0(arg0);
    func_020969c8(arg0);
    func_02096a00(arg0);
    func_02098e3c(&data_0215f104);
    func_02099044(&data_0215f048);
    func_020992ac();
    func_0204b040(&data_021267b0);
    func_020016f4(arg0 + 0xDE4);
}
