#include "m2c.h"

M2C_UNK func_020016f4();                            /* extern */
extern M2C_UNK data_020d5148;

M2C_UNK **func_0200163c(M2C_UNK **arg0) {
    *arg0 = &data_020d5148;
    func_020016f4();
    return arg0;
}
