#include "m2c.h"

M2C_UNK func_0204b244(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_0204b2ac(M2C_UNK *);                   /* extern */
M2C_UNK func_02089d1c();                            /* extern */
M2C_UNK func_0208d7d8();                            /* extern */
M2C_UNK func_020ad184(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_021267b0;
extern M2C_UNK data_02126aa0;
extern M2C_UNK data_02137b18;
extern s32 data_0215b09c;
extern M2C_UNK func_0208cd20;

void func_0208a9d0(void) {
    func_02089d1c();
    func_020ad184(&func_0208cd20, 0, 0xFFFF);
    data_0215b09c = 8;
    func_0208d7d8();
    func_0204b2ac(&data_021267b0);
    func_0204b2ac(&data_02126aa0);
    func_0204b244(&data_021267b0, 5,
                  M2C_FIELD(&data_02137b18, s32 *, 0x14) + M2C_FIELD(M2C_FIELD(&data_02137b18, void **, 0x10), u16 *, 0x366));
}
