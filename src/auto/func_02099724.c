#include "m2c.h"

M2C_UNK func_02099778();                            /* extern */
M2C_UNK func_020c636c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020e7148;

M2C_UNK **func_02099724(M2C_UNK **arg0) {
    *arg0 = &data_020e7148;
    func_02099778();
    func_020c636c(arg0);
    return arg0;
}
