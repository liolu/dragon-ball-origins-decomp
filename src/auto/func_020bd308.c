/* Reconstructed from USA ARM9 at 0x020d27ec (132 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

M2C_UNK func_020b8e8c(void *);                      /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
M2C_UNK func_020bc0a8(void *, s32);                 /* extern */
s32 func_020bccc8(void *);                          /* extern */
M2C_UNK func_020bcedc();                            /* extern */

void func_020bd308(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r5;

    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x100) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        void *p;

        p                                     = M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~0x100);
        func_020bc0a8(p, arg1);
        if (func_020bccc8(arg0) == 0) {
            return;
        }
        func_020bcedc();
        return;
    }
    temp_r5                                  = M2C_FIELD(arg0, void **, 0x24);
    temp_r0                                  = func_020ba034();
    M2C_FIELD(temp_r5, volatile s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x1C)    = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~0x200);
    func_020b8e8c(arg0 + 0xC);
    func_020ba048(temp_r0);
}
