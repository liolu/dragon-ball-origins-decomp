/* compiler: 2.0/sp1p5 -flag no-opt_propagation */
#include "m2c.h"

void func_020ba364(s32, s32, s32, s32);
void func_020ba70c(s32, s32, s32);

extern s32 data_020e79f4;

void func_020b7450(s32 arg0, s32 arg1, s32 arg2) {
    u32 vram = 0x6600000;
    if ((data_020e79f4 != -1) && ((u32) arg2 > 0x30)) {
        func_020ba364(data_020e79f4, arg0, vram + arg1, arg2);
        return;
    }
    func_020ba70c(arg0, vram + arg1, arg2);
}
