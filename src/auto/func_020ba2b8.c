/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ba2b8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_020ba034(void);
extern void func_020ba2b8(void);
extern void func_020ba2c8(void);
void func_020ba2b8(void) {
    while (1) {
        func_020ba034();
        func_020ba2c8();
    }
}
void func_020ba2c8(void);
