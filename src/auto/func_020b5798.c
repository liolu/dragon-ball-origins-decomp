/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_DispOn from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_020e79f0;
extern u16 data_0216cde0;
extern u16 data_020e79f0;
extern u16 data_0216cde0;
void func_020b5798(void) {
    data_020e79f0 = 1;
    if (data_0216cde0 != 0) {
        (*(u32 *) ((0x04000000) | 0x0)) = ((*(u32 *) ((0x04000000) | 0x0)) & ~0x30000) | (data_0216cde0 << 16);
    } else {
        (*(u32 *) ((0x04000000) | 0x0)) |= 0x10000;
    }
}
