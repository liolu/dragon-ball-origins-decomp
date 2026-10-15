#include "m2c.h"

s32 func_020bb158();                         /* extern */
s32 func_020bb57c();                         /* extern */
M2C_UNK func_020bb6e4();                            /* extern */

void func_020bb4e4(M2C_UNK arg0) {
    if (func_020bb57c() != 0) {
        return;
    }
    do {

    } while (func_020bb158(0) != 0);
    if (func_020bb57c(arg0) != 0) {
        return;
    }
    func_020bb6e4();
    if (func_020bb57c(arg0) != 0) {
        return;
    }
    do {
        func_020bb158(1);
    } while (func_020bb57c(arg0) == 0);
}
