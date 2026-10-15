#include "m2c.h"

M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c1ef4(M2C_UNK *);                       /* extern */
extern M2C_UNK func_020ad7e0;

s32 func_020ad378(void) {
    if (func_020c1ef4(&func_020ad7e0) == 2) {
        return 1;
    }
    func_020ac6a4();
    return 0;
}
