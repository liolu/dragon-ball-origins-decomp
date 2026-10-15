#include "m2c.h"

s32 func_020027e0(M2C_UNK);                         /* extern */
M2C_UNK func_02002980(s32, M2C_UNK);                /* extern */
M2C_UNK func_02002c10(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02039264();                            /* extern */
M2C_UNK func_02039308(void *);                      /* extern */
M2C_UNK func_020397c8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203989c(void *);                      /* extern */
M2C_UNK func_02039af8(void *);                      /* extern */

void func_02039184(void *arg0, s32 arg1) {
    func_02039264();
    func_02002980(0x31304E4D, 0);
    func_02002c10(arg0 + 0xB8, 0x3C, 0);
    if (arg1 != 0) {
        func_02002980(0x30304645, 0);
        func_02002c10(arg0 + 0x6D8, 0x2D, 0);
        func_02002c10(arg0 + 0x700, 0x2E, 0);
        func_02002c10(arg0 + 0x728, 0x2F, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x750) = 0;
    func_0203989c(arg0);
    M2C_FIELD(arg0, s32 *, 4)     = func_020027e0(0);
    M2C_FIELD(arg0, s32 *, 0x758) = 0;
    M2C_FIELD(arg0, s32 *, 0x75C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x760) = -1;
    M2C_FIELD(arg0, s32 *, 0x788) = -1;
    M2C_FIELD(arg0, s32 *, 0x794) = -1;
    if (arg1 != 0) {
        func_02039af8(arg0);
    }
    func_02039308(arg0);
    func_020397c8(arg0, 0);
}
