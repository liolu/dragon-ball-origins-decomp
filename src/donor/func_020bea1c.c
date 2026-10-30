/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_SetAmp from https://github.com/RonyxDumb/mkds src/arm9/0214f630_func_0214f630.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef enum {
    PM_AMP_OFF = 0,
    PM_AMP_ON  = 1
} PMAmpSwitch;
typedef enum {
    PM_LCD_POWER_OFF = 0,
    PM_LCD_POWER_ON  = 1
} PMLCDPower;
extern PMLCDPower func_020bee28(void);
extern u32 func_020be800(u16 registerAddr, u16 data);
extern const u16(*ctrdgi_fl_maxtime);
extern u32 func_020bea1c(PMAmpSwitch status);
u32 func_020be800(u16 registerAddr, u16 data);
u32 func_020bea1c(PMAmpSwitch status) {
    if (func_020bee28()) {
        return func_020be800(2, (u16) status);
    } else {
        return 0;
    }
}
PMLCDPower func_020bee28(void);
