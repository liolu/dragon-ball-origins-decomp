#include "m2c.h"

M2C_UNK func_02012428();                            /* extern */
extern M2C_UNK data_0213b428;

void func_02012b54(void *arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213b428 + (M2C_FIELD(arg0, s32 *, 0x9C) * 4))) = 0;
    func_02012428(arg0);
}
