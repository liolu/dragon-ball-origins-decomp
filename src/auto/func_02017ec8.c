#include "m2c.h"

void *func_02017ec8(void **arg0, void *arg1) {
    M2C_FIELD(*arg0, M2C_UNK(**)(void **, s16), 0x30)(arg0, M2C_FIELD(arg1, s16 *, 4));
    return arg1 + 8;
}
