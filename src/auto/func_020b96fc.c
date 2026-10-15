#include "m2c.h"

s32 func_020b9894(M2C_UNK);                         /* extern */
s32 func_020b9978(M2C_UNK);                         /* extern */
M2C_UNK func_020b9a20(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9a34(M2C_UNK, s32);                /* extern */
extern s32 data_0216d11c;

void func_020b96fc(void) {
    if (data_0216d11c != 0) {
        return;
    }
    data_0216d11c = 1;
    func_020b9a20(0, func_020b9894(0));
    func_020b9a34(0, func_020b9978(0));
    func_020b9a34(2, 0);
    func_020b9a20(2, 0);
    func_020b9a20(3, func_020b9894(3));
    func_020b9a34(3, func_020b9978(3));
    func_020b9a20(4, func_020b9894(4));
    func_020b9a34(4, func_020b9978(4));
    func_020b9a20(5, func_020b9894(5));
    func_020b9a34(5, func_020b9978(5));
    func_020b9a20(6, func_020b9894(6));
    func_020b9a34(6, func_020b9978(6));
}
