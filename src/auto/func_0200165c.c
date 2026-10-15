#include "m2c.h"

M2C_UNK func_020016f4();                            /* extern */
M2C_UNK func_020c636c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d5148;

M2C_UNK **func_0200165c(M2C_UNK **arg0) {
    *arg0 = &data_020d5148;
    func_020016f4();
    func_020c636c(arg0);
    return arg0;
}
