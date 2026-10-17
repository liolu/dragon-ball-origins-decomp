#include "m2c.h"

extern void **data_02162c7c;

void func_0209fbf0(void) {
    if (data_02162c7c == NULL) {
        return;
    }
    M2C_FIELD(*data_02162c7c, M2C_UNK(**)(), 0x10)(data_02162c7c);
}
