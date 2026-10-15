#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c2c6c(M2C_UNK *, s32, M2C_UNK *);       /* extern */
extern M2C_UNK data_021662c0;
extern M2C_UNK data_02166300;
extern M2C_UNK data_021663c0;
extern M2C_UNK func_020adc78;

s32 func_020ad020(void) {
    func_020ac694(3);
    if (func_020c2c6c(&func_020adc78,
                      M2C_FIELD(&data_021662c0, s32(**)(M2C_UNK *, M2C_UNK *), 0xC)(&data_02166300, &data_021663c0),
                      &data_02166300) == 2) {
        return 1;
    }
    func_020ac6a4();
    func_020ac694(9);
    return 0;
}
