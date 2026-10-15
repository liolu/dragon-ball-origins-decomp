#include "m2c.h"

M2C_UNK func_02001af8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020027e0(M2C_UNK);                         /* extern */
M2C_UNK func_02006400();                            /* extern */
M2C_UNK func_02006498(void *);                      /* extern */
M2C_UNK func_020065ec(void *);                      /* extern */
M2C_UNK func_02006680(void *);                      /* extern */
M2C_UNK func_020066a4(void *);                      /* extern */
M2C_UNK func_02006874(void *);                      /* extern */
M2C_UNK func_02007abc(void *, M2C_UNK);             /* extern */

void func_02006384(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = -0x10;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_02006400(arg0);
    func_02006498(arg0);
    func_020065ec(arg0);
    func_02006680(arg0);
    func_020066a4(arg0);
    func_02006874(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_020027e0(0);
    func_02007abc(arg0, 2);
    func_02001af8(0x58, 4);
}
