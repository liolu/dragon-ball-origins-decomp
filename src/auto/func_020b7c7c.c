#include "engine.h"
#include "m2c.h"

void func_020b636c(M2C_UNK);
void func_020ba4d8(M2C_UNK);

extern s32 data_020e79f4;
extern s32 data_0216ce00;

void func_020b7c7c(void) {
    if (data_020e79f4 != -1) {
        func_020ba4d8(data_020e79f4);
    }
    func_020b636c(data_0216ce00);
    data_0216ce00 = 0;
}
