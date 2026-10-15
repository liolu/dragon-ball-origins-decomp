#include "m2c.h"

s32 func_02088b2c(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, u16 *, 6) & arg1;
}
