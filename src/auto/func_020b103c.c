#include "m2c.h"

s32 func_020aec5c(s32, u16);                        /* extern */
M2C_UNK func_020aecac(s32, M2C_UNK);                /* extern */
s32 func_020b11a0(void *);                          /* extern */

s32 func_020b103c(void *arg0) {
    if (func_020aec5c(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_020b11a0(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_020aecac(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
