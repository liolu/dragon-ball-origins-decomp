#include "m2c.h"

M2C_UNK func_020aef24();                            /* extern */
M2C_UNK func_020af168();                            /* extern */
M2C_UNK func_020b0004();                            /* extern */
M2C_UNK func_020bb024();                            /* extern */
M2C_UNK func_020bef14(M2C_UNK *);                   /* extern */
M2C_UNK func_020bef2c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02168b80;
extern M2C_UNK data_02168b90;
extern M2C_UNK data_02168b9c;
extern M2C_UNK func_020aedc0;
extern M2C_UNK func_020aedf8;

void func_020aecfc(void) {
    if (M2C_FIELD(&data_02168b80, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_02168b80, s32 *, 0xC) = 1;
    func_020bb024();
    M2C_FIELD(&data_02168b80, M2C_UNK **, 0x10) = &func_020aedc0;
    M2C_FIELD(&data_02168b80, s32 *, 0x14)      = 0;
    M2C_FIELD(&data_02168b80, M2C_UNK **, 0x1C) = &func_020aedf8;
    M2C_FIELD(&data_02168b80, s32 *, 0x20)      = 0;
    func_020bef14(&data_02168b90);
    func_020bef2c(&data_02168b9c);
    func_020aef24();
    func_020b0004();
    func_020af168();
    M2C_FIELD(&data_02168b80, s8 *, 0)  = -1;
    M2C_FIELD(&data_02168b80, s32 *, 4) = 1;
}
