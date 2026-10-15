#include "m2c.h"

s32 func_020ac730();                                /* extern */
M2C_UNK func_020ac7f4(s32, u16);                    /* extern */
M2C_UNK func_020ac808(M2C_UNK *);                   /* extern */
M2C_UNK func_020ac848(M2C_UNK *);                   /* extern */
s32 func_020acc7c(M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020c1a70();                                /* extern */
extern M2C_UNK func_0208cd38;
extern M2C_UNK func_0208cd6c;
extern M2C_UNK func_0208cd70;
extern M2C_UNK func_0208e460;

void func_0208a584(void *arg0) {
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_020ac730();
    temp_r5 = func_020c1a70();
    func_020ac7f4(M2C_FIELD(arg0, s32 *, 0x40), (u16) M2C_FIELD(arg0, s32 *, 0x44));
    func_020ac848(&func_0208cd70);
    func_020ac808(&func_0208e460);
    if (func_020acc7c(0, temp_r5, temp_r6, &func_0208cd38, &func_0208cd6c) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0x28;
}
