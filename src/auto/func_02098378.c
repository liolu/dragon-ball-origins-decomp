#include "m2c.h"

M2C_UNK func_02098038();                            /* extern */
extern M2C_UNK data_02136be0;

void func_02098378(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x154) == M2C_FIELD(&data_02136be0, s32 *, 0x27C)) {
        M2C_FIELD(&data_02136be0, s32 *, 0x27C) = 0;
    }
    func_02098038(arg0);
}
