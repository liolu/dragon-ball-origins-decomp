#include "m2c.h"

M2C_UNK func_02023168();                            /* extern */
M2C_UNK func_02023178(void *, M2C_UNK);             /* extern */
s32 func_0204e908(M2C_UNK);                         /* extern */
s32 func_0204ecfc(s32);                             /* extern */

void func_02022d4c(void *arg0) {
    s32 var_r4;
    u32 temp_r0;

    func_02023168();
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1C);
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_02023178(arg0, 1);
            break;
        case 1:
            func_02023178(arg0, 2);
            break;
        case 2:
            func_02023178(arg0, 3);
            break;
        case 3:
            func_02023178(arg0, 4);
            func_02023178(arg0, 7);
            break;
        case 7:
            func_02023178(arg0, 8);
            break;
        case 8:
            func_02023178(arg0, 9);
            break;
        case 9:
            func_02023178(arg0, 0xA);
            break;
        case 10:
            func_02023178(arg0, 0xB);
            func_02023178(arg0, 0xE);
            break;
        case 14:
            func_02023178(arg0, 0xF);
            break;
        case 15:
            func_02023178(arg0, 0x10);
            break;
        case 16:
            func_02023178(arg0, 0x11);
            break;
        case 17:
            func_02023178(arg0, 0x12);
            func_02023178(arg0, 0x14);
            break;
        case 20:
            func_02023178(arg0, 0x15);
            break;
        case 21:
            func_02023178(arg0, 0x16);
            break;
        case 22:
            func_02023178(arg0, 0x17);
            break;
        case 23:
            func_02023178(arg0, 0x18);
            func_02023178(arg0, 0x1A);
            break;
        case 24:
            func_02023178(arg0, 0xC);
            break;
        case 26:
            func_02023178(arg0, 0x1B);
            break;
        case 27:
            func_02023178(arg0, 0x1C);
            break;
        case 28:
            func_02023178(arg0, 0x1D);
            break;
        case 29:
            func_02023178(arg0, 0x1E);
            func_02023178(arg0, 0x20);
            break;
        case 32:
            func_02023178(arg0, 0x21);
            break;
        case 33:
            func_02023178(arg0, 0x22);
            break;
        case 34:
            func_02023178(arg0, 0x23);
            break;
        case 35:
            func_02023178(arg0, 0x24);
            func_02023178(arg0, 0x26);
            break;
        case 38:
            func_02023178(arg0, 0x27);
            break;
        case 39:
            func_02023178(arg0, 0x28);
            break;
        case 40:
            func_02023178(arg0, 0x29);
            break;
        case 41:
            func_02023178(arg0, 0x2C);
            break;
        case 43:
            func_02023178(arg0, 6);
            break;
        case 44:
            func_02023178(arg0, 0x2D);
            break;
        case 45:
            func_02023178(arg0, 0x2E);
            break;
        case 46:
            func_02023178(arg0, 0x2F);
            break;
        case 47:
            func_02023178(arg0, 5);
            func_02023178(arg0, 0xD);
            func_02023178(arg0, 0x13);
            func_02023178(arg0, 0x19);
            func_02023178(arg0, 0x1F);
            func_02023178(arg0, 0x25);
            func_02023178(arg0, 0x2A);
            func_02023178(arg0, 0x30);
            func_02023178(arg0, 0x31);
            func_02023178(arg0, 0x32);
            func_02023178(arg0, 0x33);
            func_02023178(arg0, 0x34);
            func_02023178(arg0, 0x35);
            break;
    }
    if (func_0204e908(0x2B) != 0) {
        return;
    }
    var_r4 = 0;
loop_88:
    if ((var_r4 != 6) && (var_r4 != 0x2B)) {
        if (func_0204ecfc(var_r4) == 0) {
            return;
        }
        goto block_94;
    }
block_94:
    var_r4 += 1;
    if (var_r4 >= 0x36) {
        func_02023178(arg0, 0x2B);
        return;
    }
    goto loop_88;
}
