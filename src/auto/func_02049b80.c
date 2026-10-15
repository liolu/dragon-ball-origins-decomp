#include "m2c.h"

extern M2C_UNK data_020f62ec;
extern M2C_UNK data_020f8a2c;

M2C_UNK *func_02049b80(s32 arg0) {
    if (arg0 == 0) {
        return &data_020f8a2c;
    }
    return &data_020f62ec;
}
