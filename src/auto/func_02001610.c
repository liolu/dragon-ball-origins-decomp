#include "m2c.h"

M2C_UNK func_02001684();                            /* extern */
extern M2C_UNK data_020d5148;

void *func_02001610(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d5148;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    func_02001684(arg0, arg1);
    return arg0;
}
