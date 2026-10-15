#include "m2c.h"

M2C_UNK func_020ac7b8(s32, s32);                    /* extern */
M2C_UNK func_020ac808(M2C_UNK *);                   /* extern */
M2C_UNK func_020acefc(M2C_UNK, s32, M2C_UNK *);     /* extern */
extern M2C_UNK func_0208cd6c;
extern M2C_UNK func_0208e460;

void func_0208aaac(void *arg0) {
    func_020ac7b8(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x44));
    func_020ac808(&func_0208e460);
    func_020acefc(3, (M2C_FIELD(arg0, s32 *, 0x3D0) * 0xD8) + (s32) (arg0 + 0x48) + 0x18, &func_0208cd6c);
}
