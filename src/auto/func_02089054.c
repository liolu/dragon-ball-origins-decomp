#include "m2c.h"

extern M2C_UNK data_0215f2fc;

void func_02089054(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_lr;

    temp_r1 = M2C_FIELD(&data_0215f2fc, s32 *, 0x20) - 0x80;
    temp_r2 = M2C_FIELD(&data_0215f2fc, s32 *, 0x24) - 0x60;
    if (M2C_FIELD(&data_0215f2fc, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + temp_r1);
        M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) + temp_r2);
        var_ip                        = M2C_FIELD(arg0, s32 *, 0x1F8);
        if (var_ip > 0x2000) {
            var_ip = 0x2000;
        } else if (var_ip < -0x2000) {
            var_ip = -0x2000;
        }
        M2C_FIELD(arg0, s32 *, 0x1F8) = var_ip;
        var_ip_2                      = M2C_FIELD(arg0, s32 *, 0x1FC);
        if (var_ip_2 > 0x2000) {
            var_ip_2 = 0x2000;
        } else if (var_ip_2 < -0x2000) {
            var_ip_2 = -0x2000;
        }
        M2C_FIELD(arg0, s32 *, 0x1FC) = var_ip_2;
    }
    if (M2C_FIELD(&data_0215f2fc, u16 *, 4) & 0x200) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0x40);
    }
    if (M2C_FIELD(&data_0215f2fc, u16 *, 4) & 0x100) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0x40);
    }
    var_lr = M2C_FIELD(arg0, s32 *, 0x200);
    if (var_lr > 0xE38) {
        var_lr = 0xE38;
    } else if (var_lr < -0xE38) {
        var_lr = -0xE38;
    }
    M2C_FIELD(arg0, s32 *, 0x200) = var_lr;
    if (M2C_FIELD(&data_0215f2fc, s32 *, 0x38) == 0) {
        return;
    }
    if (temp_r1 < -0x10) {
        return;
    }
    if (temp_r1 >= 0x10) {
        return;
    }
    if (temp_r2 < -0x10) {
        return;
    }
    if (temp_r2 >= 0x10) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x200) = 0;
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
}
