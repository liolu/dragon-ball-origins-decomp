#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
s32 func_020c23f0(M2C_UNK *);                       /* extern */
extern M2C_UNK func_020ad5b0;

s32 func_020acac8(void) {
    func_020ac694(3);
    if (func_020c23f0(&func_020ad5b0) == 2) {
        return 1;
    }
    return 0;
}
