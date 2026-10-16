/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_SetBankForSubObj from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_vramcnt.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_0216cde4;
extern UnkGxVramState data_0216cde4;
void func_020b5930(u32 lcdc);
void func_020b62fc(s32 subObj) {
    data_0216cde4.lcdc   = ~subObj & (data_0216cde4.lcdc | data_0216cde4.subObj);
    data_0216cde4.subObj = subObj;

    switch (subObj) {
        case 0x008:
            (*(vu8 *) 0x04000243) = 0x84;
            break;
        case 0x100:
            (*(vu8 *) 0x04000249) = 0x82;
            break;
        case 0x000:
        default:
            break;
    }
    func_020b5930(data_0216cde4.lcdc);
}
