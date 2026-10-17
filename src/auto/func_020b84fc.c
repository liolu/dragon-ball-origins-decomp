#include "m2c.h"

M2C_UNK WaitByLoop();                        /* extern */
s32 func_020b85dc(); /* extern */

void func_020b84fc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_020b85dc() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_020b85dc(arg0, arg1, arg2, arg3) > 0);
}
