#include "m2c.h"

typedef struct UnkCardCommon {
    u32 unk_000;
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c;
    u32 unk_010[2];
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
} UnkCardCommon;

typedef struct UnkCardRom {
    void (*unk_000)(struct UnkCardRom *rom);
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c[5];
    u32 unk_020[0x80];
} UnkCardRom;

extern UnkCardCommon data_0216f020;
extern UnkCardRom data_0216f660;
extern void func_020bab64(s32, s32, s32, M2C_UNK);
extern void func_020c0308(u32 hi, u32 lo);

#pragma opt_rotateloops off
#pragma opt_propagation off
void func_020c0368(void) {
    UnkCardCommon *const p = &data_0216f020;
    UnkCardRom *const rom  = &data_0216f660;

    func_020bab64(p->unk_028, 0x04100010, p->unk_020, 0x200);
    func_020c0308(0xB7000000 | (p->unk_01c >> 8), p->unk_01c << 24);
    *(volatile u32 *) 0x040001A4 = rom->unk_004;
}
