#include "m2c.h"

M2C_UNK func_0209995c();                            /* extern */
M2C_UNK func_020c636c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020e717c;

M2C_UNK **func_020998b0(M2C_UNK **arg0) {
    *arg0 = &data_020e717c;
    func_0209995c();
    func_020c636c(arg0);
    return arg0;
}
