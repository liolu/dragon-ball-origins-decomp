#include "m2c.h"

M2C_UNK func_020af6a0(void *);                      /* extern */
M2C_UNK func_020babf0(u8);                          /* extern */
M2C_UNK func_020bac58(u8, s32);                     /* extern */

void func_020af600(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020bac58(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_020babf0(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020af6a0(arg0);
}
