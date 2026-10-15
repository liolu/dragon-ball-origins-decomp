#include "m2c.h"

extern void *data_0216bf30;

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

void func_020b0e08(void *arg0) {
    *(M2C_S8 *) ((s8 *) arg0 + 0) = *(M2C_S8 *) ((s8 *) data_0216bf30 + 124);
}
