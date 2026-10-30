#include "m2c.h"
extern u32 func_020ba034(void);
extern u32 func_020ba048(u32);
extern u32 func_020b8674(s32);
extern u32 func_020b872c(u32);
extern void WaitByLoop(s32);

void func_020c2fa4(s32 a0, s32 *a1) {
    u32 flag;
    for (;;) {
        *(u32 *) ((s8 *) a1 + 4) = func_020ba034();
        flag                     = func_020b872c(0x27fffe8) & 0x40;
        *(u32 *) ((s8 *) a1 + 0) = flag;
        if (flag != 0) {
            return;
        }
        if (func_020b8674(a0) == 0) {
            return;
        }
        func_020ba048(*(u32 *) ((s8 *) a1 + 4));
        WaitByLoop(1);
    }
}
