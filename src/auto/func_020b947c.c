#include "m2c.h"
M2C_UNK func_020b8e8c(void *);
M2C_UNK func_020b95ac(s32, void *);
s32 func_020ba034();
M2C_UNK func_020ba048(s32);
extern M2C_UNK data_0216cec4;
void func_020b947c(void *arg0) {
    s32 temp = func_020ba034();
    s32 d    = M2C_FIELD(&data_0216cec4, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 8) == d) {
        s32 n                       = M2C_FIELD(arg0, s32 *, 0xC) - 1;
        M2C_FIELD(arg0, s32 *, 0xC) = n;
        if (n == 0) {
            func_020b95ac(d, arg0);
            M2C_FIELD(arg0, s32 *, 8) = 0;
            func_020b8e8c(arg0);
        }
    }
    func_020ba048(temp);
}