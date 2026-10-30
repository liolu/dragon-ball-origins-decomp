/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CARDi_ReadRomIDCore from projets/blue-dragon-awakened-shadow/src/donor/CARDi_ReadRomIDCore.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef volatile u32 vu32;
extern void func_020c0308(u32 hi, u32 lo);
extern u32 func_020c0708(void);
extern u8 *data_020e7a14;
static inline u32 CARDi_GetRomControl(void) {
    return *(u32 *) (data_020e7a14 + 0x60);
}
extern void func_020c0308(u32 hi, u32 lo);
u32 func_020c0708(void) {
    func_020c0308(0xB8000000, 0);
    *(vu32 *) 0x040001A4 = ((CARDi_GetRomControl() & ~0x07000000) | 0xA7000000) & ~0x1FFF;
    while (!(*(vu32 *) 0x040001A4 & 0x800000)) {
    }
    return *(vu32 *) 0x04100010;
}
