/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_ReadRegisterAsync from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_ReadRegisterAsync.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef void (*PMCallback)(u32 result, void *argument);
typedef struct PMData16 {
    u16 flag;
    u16 padding;
    u16 *buffer;
} PMData16;
typedef struct PXIContext {
    unsigned char reserved_00[0x1c];
    u32 locked;
    PMCallback callback;
    void *callbackArgument;
} PXIContext;
extern int func_020be3e8(void);
extern void func_020beaa4(u32 command);
extern PXIContext data_0216eeec;
extern PMData16 data_0216ef30[];
u32 func_020be70c(u16 channel, u16 *buffer, PMCallback callback, void *callbackArgument) {
    if (func_020be3e8() == 0) {
        return 1;
    }

    data_0216eeec.callback         = callback;
    data_0216eeec.callbackArgument = callbackArgument;
    data_0216ef30[channel].flag    = 0;
    data_0216ef30[channel].buffer  = buffer;
    func_020beaa4((channel & 0xff) | 0x03006500);
    return 0;
}
