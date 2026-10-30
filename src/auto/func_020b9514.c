#include "m2c.h"

M2C_UNK func_020b9588(s32, void *);                 /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
extern M2C_UNK data_0216cec4;

s32 func_020b9514(void *arg0) {
    s32 state;
    s32 r2;
    s32 d;
    s32 ret;

    state = func_020ba034();
    r2    = M2C_FIELD(arg0, s32 *, 8);
    d     = M2C_FIELD(&data_0216cec4, s32 *, 4);
    if (r2 == 0) {
        M2C_FIELD(arg0, s32 *, 8)   = d;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_020b9588(d, arg0);
        ret = 1;
    } else if (r2 != d) {
        ret = 0;
    } else {
        ret                         = 1;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    }
    func_020ba048(state);
    return ret;
}
