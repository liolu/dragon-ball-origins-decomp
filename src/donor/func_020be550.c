/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_CommonCallback from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_CommonCallback.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
typedef int PXIFifoTag;
typedef void (*PMCallback)(u32 result, void *arg);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
typedef struct {
    u16 flag;
    u16 pad;
    u16 *buffer;
} PMData16;
extern struct {
    u32 reserved0;
    volatile BOOL syncFlag;
    volatile BOOL sleepEndFlag;
    u32 reserved0c[4];
    PMiWork work;
} data_0216eeec;
extern PMData16 data_0216ef30[5];
extern void func_020be46c(u32 result);
void func_020be550(PXIFifoTag tag, u32 data, BOOL err) {

    u16 command;
    u16 pxiResult;

    if (err) {
        func_020be46c(2);
        return;
    }

    command   = (u16) ((data & 0x00007f00) >> 8);
    pxiResult = (u16) ((data & 0x000000ff) >> 0);

    if (0x0070 <= command && command <= 0x0074) {
        int num     = (int) (command - 0x0070);
        u16 value   = (u16) (pxiResult & 0xff);
        u16 *buffer = data_0216ef30[num].buffer;

        if (buffer) {
            *buffer = value;
        }
        data_0216ef30[num].flag = 1;
        pxiResult               = 0;
    } else if (command == 0x0060) {
        data_0216eeec.syncFlag = 1;
    } else if (command == 0x0062) {
        data_0216eeec.sleepEndFlag = 1;
    } else if (command == 0x0067) {
        if (data_0216eeec.work.work) {
            *(u32 *) data_0216eeec.work.work = pxiResult;
        }
        pxiResult = 0;
    }

    func_020be46c(pxiResult);
}
